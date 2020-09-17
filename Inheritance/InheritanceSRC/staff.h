//
//  staff.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/22/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef staff_h
#define staff_h
#include "Employee.h"
class Staff : public Employee
{
private:
    std::string position;
public:
    void set_position(std::string b)
    {
        position = b;
    }
    std::string get_position()
    {
        return position;
    }
    virtual std::string awahmi()
    {
        return "staff";
    }
    
};

#endif /* staff_h */
