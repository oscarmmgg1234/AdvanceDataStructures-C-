//
//  main.cpp
//  Lab07
//
//  Created by Oscar Maldonado on 2/22/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//




#include <iostream>

#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Faculty.h"
#include "staff.h"
#include "staffSt.h"

#define X = 0

std::string Student::get_status(unsigned int b)
{
    
    switch (b)
    {
        case 0:
            return "freshman";
        case 1:
            return "sophomore";
        case 2:
            return "junior";
        case 3:
            return "senior";
        default:
            return "N/A";
    }
}

void Student::set_status(unsigned int a)
{
    switch(a)
    {
        case 0:
        {
            status = freshman;
            break;
        }
        case 1:
        {
            status = sophomore;
            break;
        }
        case 2:
        {
            status = junior;
            break;
        }
        case 3:
        {
            status = senior;
            break;
        }
            
    }
}

int main(int argc, const char * argv[]) {
    Person a;
    Student b;
    Employee c;
    Faculty d;
    Staff e;
    
    a.set_email("oscarmaldonado12347568@gmail.com");
    b.set_status(0);
    c.set_salary(12);
    d.set_rank(0);
    e.set_position("crew");
   
    std::cout << e.get_position();
 
   
    

    return 0;
}
