

#ifndef MAP_UNORDERED_MAP_H
#define MAP_UNORDERED_MAP_H

#include <iostream>
#include <vector>
#include <string>
#include <list>

/*
 This project was created by Oscar Maldonado
 Data Structures
 Unordered_maps
 
 Description: In this project we will create hash tables
 
 */


//--------------------------------------------------------------------------------------------------------
template <class Key, class Value>
std::ostream& operator<<(std::ostream &out, const std::pair<Key,Value> & in)
{
    out << "(" << in.first << ":" << in.second << ")";
    return out;
}
//--------------------------------------------------------------------------------------------------------
//general template must come before specialization below
template <typename Key>
class Hasher
{
public:
    unsigned int operator()(const Key &k) const;
};
//--------------------------------------------------------------------------------------------------------
//specialization of Hasher for string
template <>
class Hasher<std::string>
{
public:
    unsigned int operator()(const std::string & k) const
    {
        unsigned int hashValue = 0;
        for(char ch: k)
            hashValue = 37 * hashValue + ch;
        return hashValue;
    }
};
//--------------------------------------------------------------------------------------------------------
//specialization of hasher for unsinged
template <>
class Hasher<unsigned int>
{
public:
    unsigned int operator()(const unsigned int& k) const
    {
        return k%37;
    }
};
//--------------------------------------------------------------------------------------------------------
//Hash table of "num_buckets" buckets. Each bucket is an STL list of pairs
template <typename Key, typename Value, template <typename> class Hash = Hasher>
class unordered_map
{
private:
    unsigned int num_buckets;
    std::vector<std::list<std::pair<Key,Value>>> bucket;
    Hash<Key> hashFunc;
    unsigned int theSize;

    //set bucket index based on key, if the key is found in the bucket[index] return true if set i
    bool find(const Key& key, unsigned int &index, typename std::list<std::pair<Key,Value>>::iterator &i)
    {
        index = hashFunc(key)%num_buckets;
        for(i = bucket[index].begin(); i != bucket[index].end();i++)
            if (i->first == key)
                break;
            if (i != bucket[index].end())
                return true;
            return false;
    }
public:
    unordered_map(unsigned int count = 11): num_buckets(count), hashFunc(Hash<Key>()),theSize(0)
    {
        bucket = std::vector<std::list<std::pair<Key, Value>>> (num_buckets);
    }
    ~unordered_map() = default;
    unordered_map(const unordered_map& rhs): num_buckets{rhs.num_buckets}, hashFunc{rhs.hashFunc}, theSize{0}
    {
        bucket = std::vector<std::list<std::pair<Key,Value>>> (num_buckets);
        typename std::list<std::pair<Key,Value>>::const_iterator j;
        for(int i = 0;i < rhs.num_buckets;i++)
            for(j = rhs.bucket[i].begin();i != rhs.bucket[i].end();i++)
                insert(*j);

    }

    unordered_map(unordered_map && rhs): num_buckets{rhs.num_buckets},
    bucket{move(rhs.bucket)}, hashFunc{rhs.hashFunc}, theSize{rhs.theSize} { }

    unordered_map & operator=(const unordered_map & rhs)
    {
        unordered_map<Key, Value, Hash> copy{rhs};
        swap(*this, copy);
        return *this;
    }

    unordered_map & operator=(unordered_map && rhs)
    {
        swap(num_buckets, rhs.num_buckets);
        swap(bucket, rhs.bucket);
        swap(hashFunc, rhs.hashFunc);
        swap(theSize, rhs.theSize);
        return *this;
    }

    unsigned bucket_count()
    {
        return num_buckets;
    }

    unsigned size()
    {
        return theSize;
    }

    unsigned bucket_size(unsigned n)
    {
        if (n >= num_buckets)
            return 0;

        return bucket[n].size();
    }

    // op[]: access a pair with "key", if it doesn't exist create an empty pair.
    Value & operator[](const Key & key)
    {
        unsigned index;
        typename std::list< std::pair<Key, Value> >::iterator i;

        if (find(key, index, i))
            return i->second;

        // not found, insert pair(key, default)
        bucket[index].push_front(std::pair<Key, Value>(key, Value()));
        theSize++;
        return bucket[index].front().second;
    }

    // move semantic version
    Value & operator[](Key && key)
    {
        unsigned index;
        typename std::list< std::pair<Key, Value> >::iterator i;

        if (find(key, index, i))
            return i->second;

        bucket[index].push_front(std::pair<Key, Value>(move(key), Value()));
        theSize++;
        return bucket[index].front().second;
    }

    // insert pair r, very similar to op[] above
    void insert(const std::pair<Key, Value> & r)
    {
        unsigned index;
        typename std::list< std::pair<Key, Value> >::iterator i;

        if (find(r.first, index, i))
            *i = r;
        else { // not found, insert the new pair
            bucket[index].push_front(r);
            theSize++;
        }
    }

    // move semantic version
    void insert(std::pair<Key, Value> && r)
    {
        unsigned index;
        typename std::list< std::pair<Key, Value> >::iterator i;

        if (find(r.first, index, i))
            *i = move(r);
        else {
            bucket[index].push_front(move(r));
            theSize++;
        }
    }

    // list all entries, this is just for debugging
    void print()
    {
        for (int i = 0; i < num_buckets; i++) {
            std::cout << "bucket[" << i << "] size=" << bucket_size(i) << " ";

            typename std::list< std::pair<Key, Value> >::iterator j;
            for (j = bucket[i].begin(); j != bucket[i].end(); j++)
                std::cout << *j << " ";
            std::cout << std::endl;
        }
    }

};





#endif //MAP_UNORDERED_MAP_H
