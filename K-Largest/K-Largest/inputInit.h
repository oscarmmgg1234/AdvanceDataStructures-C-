//
//  inputInit.h
//  K-Largest
//
//  Created by Oscar Maldonado on 4/21/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef inputInit_h
#define inputInit_h
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class inputFile
{
    int* buffer;
    int size;
    std::fstream inpt;
public:
    inputFile();
    inputFile(std::vector<int> a);//init with out a fileinput
    inputFile(const inputFile& a);//copy construct
    inputFile(inputFile&& a);//move constructor
    inputFile(const std::string fileName);
    ~inputFile();
    
    const int length();
    int &operator[](const int a);//return integer @given index
    inputFile& operator=(const inputFile& a);//assignment operator
    inputFile& operator=(inputFile&& a);//move constructor
    
    friend std::ostream& operator<<(std::ostream& a,inputFile& b);//output to the the console
    
    
    
};


#endif /* inputInit_h */
