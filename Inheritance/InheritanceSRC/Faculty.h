//
//  Faculty.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/27/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef Faculty_h
#define Faculty_h
#include "Employee.h"

class Faculty : public Employee
{
private:
    std::string rank[4] = {"proffesor","associate","assistant","lecturer"};
    std::string status[4] = {"tenured", "tenure-track", "visiting"," non-tenure-track"};
    std::string frank;
    std::string fstatus;
public:
void set_rank(unsigned int a)
    {
        frank = rank[a];
    }
    std::string get_rank()
    {
        return frank;
    }
    void set_status(unsigned int a)
    {
        fstatus = status[a];
    }
    std::string get_status()
    {
        return fstatus;
    }
};

#endif /* Faculty_h */
