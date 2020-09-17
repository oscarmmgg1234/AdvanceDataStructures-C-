//
//  Person.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/22/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef Person_h
#define Person_h
#include <string>


class Person
{
public:
    std::string get_name()
    {
        return name;
    }
    void set_name(std::string a)
    {
        name = a;
    }
    std::string get_address()
    {
        return address;
    }
    
    int get_telephone()
    {
        return telephone;
    }
    void set_telephone(int a){
        telephone = a;
    }
    void set_email(std::string b)
    {
        address = b;
    }
    std::string get_email()
    {
        return email;
    }
    
private:
    std::string name;
    std::string address;
    int telephone;
    std::string email;
    
    
    
};

#endif /* Person_h */
