#include <string>

class TipodeDato{
public:
    void print(int a){
        std::cout << "Este es un entero \n";
    }
    void print(double b){
        std::cout << "Este es un double \n";
    }
    void print(std::string c){
        std::cout << "Esta es una cadena de caracteres \n";
    }
};

class Promedio{
public:
    double calcular(int n1, int n2){
        return (n1+n2)/2;
    }
    double calcular(int n1, int n2, int n3){
        return (n1+n2+n3)/3;
    }
};