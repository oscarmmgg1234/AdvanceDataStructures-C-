//
//  Student.h
//  Lab07
//
//  Created by Oscar Maldonado on 2/22/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#ifndef Student_h
#define Student_h
#include "Person.h"


class Student : public Person
{
    
public:
    std::string get_status(unsigned int b);
    void set_status(unsigned int a);
    
    
private:
    enum classStatus {freshman, sophomore, junior, senior};
    int status;
};

#endif /* Student_h */
