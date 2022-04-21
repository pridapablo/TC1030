// Headder file

class myFirstClass {
    public: // Especificador de acceso (si no se especifica, es privada)
    int Num; // Declaración de variable tipo número (atributo de instancia)
    std::string String; // // Declaración de variable tipo string (atributo de instancia)

    myFirstClass(int x, std::string s){ // Método constructor (debe llevar el mismo nombre de la clase). Es un constructor parametrizado
        Num = x; // Defino el número con el parámetro x
        String = s; // Defino la cadena con el parámetro s
    }

}; //; al final de la clase