//
//  main.cpp
//  K-Largest
//  In this project we will fin the top k numbners in a n number of files
//  Point of this project is to practise I/O streams
//  Created by Oscar Maldonado on 4/21/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#include "inputInit.h"


inputFile::inputFile()
{
    buffer = nullptr;
    size =0;
}
inputFile::inputFile(std::vector<int> a)
{
    
    buffer = new int[a.size()];
    
    for(int c = 0;c < a.size();c++)
        buffer[c] = a[c];
    
}

inputFile::inputFile(const inputFile& a)
{
    size = a.size;
    buffer = a.buffer;
}
inputFile::inputFile(inputFile&& a): size{std::move(a.size)},buffer{std::move(a.buffer)}
{
    a.size = 0;
    a.buffer = nullptr;
}
inputFile::inputFile(std::string Filename)
{
    int index = 0;
    std::vector<int> temp;
    inpt.open(Filename,std::fstream::in);
    
    while(!inpt.eof())
    {
        temp.push_back(inpt.get());
        
    }
    
    buffer = new int[temp.size()];
    for(int& a : temp)
    {
        std::cout << a << std::endl;
        buffer[index] = a;
        index++;
    }
    
    
    inpt.close();

}
const int inputFile::length()
{
    return size;
}
int& inputFile::operator[](const int a)
{
    return buffer[a];
}
inputFile& inputFile::operator=(const inputFile& a)
{
    size = a.size;
    buffer = a.buffer;
    return *this;
}
inputFile& inputFile::operator=(inputFile &&a)
{
    size = std::move(a.size);
    buffer = std::move(a.buffer);
    a.size = 0;
    a.buffer = nullptr;
    return *this;
}
std::ostream& operator<<(std::ostream& d,inputFile& b)
{
    for(int a = 0; a < b.length();a++)
        d << b.buffer[a];
    return d;
}
inputFile::~inputFile()
{
    delete [] buffer;
}
