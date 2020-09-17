//
//  Employee.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/22/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef Employee_h
#define Employee_h
#include "Person.h"

class Employee : public Person
{
    
private:
    std::string office;
    float salary;
    std::string date;
public:
    void set_office(std::string h)
    {
        office = h;
    }
    std::string get_office()
    {
        return office;
    }
    float get_salary()
    {
        return salary;
    }
    void set_salary(float a)
    {
        salary = a;
    }
    std::string get_date()
    {
        return date;
    }
    void set_date(std::string a)
    {
        date = a;
    }
};


#endif /* Employee_h */
