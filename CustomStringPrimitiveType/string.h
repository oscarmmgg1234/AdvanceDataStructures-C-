//
//  string.h
//  string
//
//  Created by Oscar Maldonado on 4/21/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//
/*
 This project was created by Oscar Maldonado
 string primitive type
 
 Description: In this project we will create our very own string primitive type class
 
 */
#ifndef string_h
#define string_h
#include <ostream>

namespace array
{
class string
{
    int size;
    char* buffer;
public:
    
    string();
    string(const string& op);//copy constructor
    string(string && op);//move constructors
    string(const char* op);
    string(char op);
    ~string();//destructor
    
    char*& returnC();
    int length();//return length of buffer
    char& operator[](const int a);//returns char at specified index in the array
    string& operator=(const string& op);//string a = "hello"
    string& operator+=(const string & op);
    string& operator=(string && op) ;
    
    
    friend bool operator==(const string& a,const string& b);
    friend bool operator<=(const string& a,const string& b);
    friend bool operator>= (const string& a,const string& b);
    friend bool operator>(const string& a,const string& b);
    friend bool operator<(const string& a,const string& b);
    
    friend std::ostream& operator<<(std::ostream& a, const string& b);
    
    
};
}

array::string::string()
{
    size = 0;
    buffer = nullptr;
}

array::string::string(const array::string& op)// copy constructor
{
    size = op.size;
    buffer = op.buffer;
}
array::string::string(array::string&& op): size{std::move(op.size)},buffer{std::move(op.buffer)}
{
    
    op.size = 0;
    op.buffer = nullptr;
}
array::string::string(const char* op)//move construnctor
{
    size = 0;
    
    for(const char* a = op;*a;a++)
        size++;
    
    buffer = new char[size];
    for(int i = 0;i < size; i++)
        buffer[i] = op[i];
}
array::string::string(char op)
{
    size = 1;
    buffer = new char[size];
    buffer[0] = op;
}
array::string::~string()
{
    delete [] buffer;
}
int array::string::length()
{
    return size;
}
char& array::string::operator[](const int a)
{
    return buffer[a];
}
array::string& array::string::operator=(const array::string& op) // string a = b;
{
    size = op.size;
    buffer = op.buffer;
    return *this;
}
array::string& array::string::operator+=(const array::string &op)// string a += b;
{
    char *temp = buffer;
    buffer = nullptr;
    int x = 0;
    buffer = new char[size + op.size];
    for(int i = 0;i < size;i++)
    {
        if(i <= size)
            buffer[i] = temp[i];
        
        if(i >size)
            buffer[i] = op.buffer[x];
        x++;
        
    }
    size = size + op.size;
    return *this;
}
array::string& array::string::operator=(array::string&& op)
{
    size = std::move(op.size);
    buffer = std::move(op.buffer);
    
    op.size = 0;
    op.buffer = nullptr;
    return *this;
}
bool array::operator==(const array::string& a,const array::string& b)
{
    if(a.size != b.size)
        return false;
    
    for(int i = 0; i < a.size; i++)
        if(a.buffer[i] != b.buffer[i])
            return false;
    return true;
}
bool array::operator<=(const array::string& a,const array::string& b)
{
    if(a.size > b.size)
        return false;
    return true;
}
bool array::operator>=(const array::string& a,const array::string& b)
{
    if(a < b)
        return false;
    return true;
}
bool array::operator>(const array::string& a,const array::string& b)
{
    if (a.size > b.size)
        return true;
    return false;
}
bool array::operator<(const array::string& a,const array::string& b)
{
    if(a.size < b.size)
        return true;
    return false;
}
std::ostream& array::operator<<(std::ostream& a,const array::string& b)
{
    for(int i = 0;i < b.size;i++)
        a << b.buffer[i];
    return a;
}
char*& array::string::returnC()
{
    return buffer;
}


#endif /* string_h */
