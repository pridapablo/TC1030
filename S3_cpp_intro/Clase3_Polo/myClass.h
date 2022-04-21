//
//  myClass.h
//  Class March 6th
//
//  Created by Jesus Llano García on 06/04/22.
//

#include <string>

#ifndef myClass_h
#define myClass_h

class myFirstClass {
    
    public: // Especificador de acceso
    
        int Num;
        std::string String;
        
        myFirstClass(int x, std::string s);
    
};

myFirstClass::myFirstClass(int x, std::string s){
    Num = x;
    String = s;
}

#endif /* myClass_h */
