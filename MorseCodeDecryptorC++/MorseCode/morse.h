//
//  morse.h
//  MorseCode
//
//  Created by Oscar Maldonado on 2/18/19.
//  Copyright © 2019 Oscar Maldonado. All rights reserved.
//
//This project decripts and aprints morse code// practise I/O file stream
#ifndef morse_h
#define morse_h
#include <vector>
#include <string>

class Code
{
public:
    
    Code();  // Default constructor - loads and uses morse code
    
    std::string decode(std::vector< std::string> message)
    {
        std::string temp;
        for(int i = 0;i < message.size();i++)
        {
            temp += decode(message[i]);
        }
        return temp;
    }// decodes a message
    
private:
    
    std::vector<std::string> codewords; // this is a codeword vector parallel to A-Z
    std::vector<char> alpha; // this is the vector for A-Z
    
    std::vector<char>  alphacode()
    {
        std::vector<char> temp;
        for (char c='A'; c<='Z'; c++)
            temp.push_back(c);
        temp.push_back(' ');
        temp.push_back('.');
        return temp;
    }// function builds the vector alpha - A B C etc.
    
    std::vector<std::string>  morsecode()
    {
        std::vector<std::string> temp(28);
        temp[0] =".-";
        temp[1] ="-...";
        temp[2] ="-.-.";
        temp[3] ="-..";
        temp[4] =".";
        temp[5] ="..-.";
        temp[6] ="--.";
        temp[7] ="....";
        temp[8] ="..";
        temp[9] =".---";
        temp[10] ="-.-";
        temp[11] =".-..";
        temp[12] ="--";
        temp[13] ="-.";
        temp[14] ="---";
        temp[15] =".--.";
        temp[16] ="--.--";
        temp[17] =".-.";
        temp[18] ="...";
        temp[19] ="-";
        temp[20] ="..-";
        temp[21] ="...-";
        temp[22] =".--";
        temp[23] ="-..-";
        temp[24] ="-.--";
        temp[25] ="--..";
        temp[26] =".......";
        temp[27] ="x";
        return temp;
    }// function builds the vector codewords containing morse code
    
    char decode(std::string c)
    {
       
        for(int i = 0; i < codewords.size();i++)
        {
            
            if(codewords[i] == c )
            {
                return alpha[i];
            }
            
           
        }
     
        return ' ';
    } //returns the character for the codeword c.
    
};



#endif /* morse_h */
