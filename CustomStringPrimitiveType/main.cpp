//
//  main.cpp
//  string
//
//  Created by Oscar Maldonado on 4/21/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

/*
 This project was created by Oscar Maldonado
 Implement our own string primitive type
 
 Description: In this project we will create our own string type 
 
 */


#include <iostream>

#include "string.h"


int main()
{
    Array::string sent = "Oscar Maldonado";
    
    Array::string a = sent.substr(2);
    
    std::cout << a << std::endl;
    
    
    
    
}
