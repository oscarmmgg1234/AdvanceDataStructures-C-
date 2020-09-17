//
//  staffSt.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/27/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef staffSt_h
#define staffSt_h
#include "staff.h"
#include "Student.h"

class staffSt : public Staff, public Student
{
private:
    unsigned int creditHours;
    
public:
    
    virtual std::string awahmi()
    {
        return "staffSt";
    }
    void set_creditH(unsigned int a)
    {
        creditHours = a;
    }
    unsigned int get_creditH()
    {
        return creditHours;
    }
    
};

#endif /* staffSt_h */
