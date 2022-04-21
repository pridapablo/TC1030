// Esconder el acceso a cierta información (getters y setters)
// Un getter es un método no privado que permite obtener la información de una variable
// Un setter es un método no privado que permite cambiar la información de una variable

class Empleado{ //el empleado tiene un salario que debe ser privado para que solo se cambie cuando se debe de cambiar
    private:
    int salary;
    
    public:
    void setSalary(int s){// Método para darle valor al salario (es void con parámetros)
        salary = s;
    } 
    int getSalary(){// Método para obtener valor al salario (es del mismo data type que el valor que regresa y es sin parámetros)
        return salary;
    }

};