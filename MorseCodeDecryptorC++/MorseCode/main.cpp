//
//  main.cpp
//  MorseCode
//
//  Created by Oscar Maldonado on 2/18/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//

#include <iostream>
#include "morse.h"

Code::Code()
{
    alpha = alphacode();
    codewords = morsecode();
    
}


int main() {

    Code morseDec;
    std::vector<std::string> morse;
    std::string w;
    
    std::cin >>w;
    while( w != "x")
    {
         morse.push_back(w);
        std::cin >> w;
      
        
    }
    std::cout << morseDec.decode(morse);
    
    return 0;
}
