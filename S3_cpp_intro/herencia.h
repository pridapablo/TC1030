class Animales{
    protected:
    std::string nombre;
    int edad;

    public:
    std::string Habla(std::string h){
        return h + "\n";
    }
};

class Gatito: public Animales{ //Herencia
    protected:
    std::string especie;

    public:
    Gatito(std::string x, int y, std::string z);
    std::string Datos()
}

Gatito::Gatitio(std::string x, int y, std::string z){
    nombre = x;
    edad = y;
    especie = z;
}

std::string Gatito::Datos(){
    std::string edad2;
    edad2 = std::to_string(edad);
    return nombre + " es un " + especie + " y tiene " + edad2 + "años \n";
}

