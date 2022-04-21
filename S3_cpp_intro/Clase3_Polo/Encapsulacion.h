//
//  Encapsulación.h
//  Class March 6th
//
//  Created by Jesus Llano García on 06/04/22.
//

#ifndef Encapsulacio_n_h
#define Encapsulacio_n_h

class Empleado{
    
    private:
        int salary;
    
    public:
    
        void setSalary(int s) {
            salary = s;
        }
    
        int getSalary(){
            return salary;
        }
};

#endif /* Encapsulacio_n_h */
