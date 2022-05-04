class Animal
{
protected:
    std::string nombre;
    int edad;
    std::string especie;

public:
    Animal()
    {
        nombre = "";
        edad = -1;
        especie = "";
    }
    Animal(std::string nombre_, int edad_, std::string especie_)
    {
        nombre = nombre_;
        edad = edad_;
        especie = especie_;
    }
    virtual void hablar() = 0;
    virtual void printInfo() = 0;
    void setNombre(std::string nombre_)
    {
        nombre = nombre_;
    }
    void setEdad(int edad_)
    {
        edad = edad_;
    }
    int getEdad(){
        return edad;
    }
};

class Perro : public Animal
{
private:
    std::string raza;
    std::string ladrido;
public:
    Perro()
    {
        raza = "";
        ladrido = "";
    }
    Perro(std::string nombre_, int edad_, std::string especie_,std::string raza_, std::string ladrido_) : Animal(nombre_, edad_, especie_)
    {
        raza = raza_;
        ladrido = ladrido_;
    }
    void hablar()
    {
        std::cout << ladrido << std::endl;
    }
    void printInfo()
    {
        std::cout << "El perro " << nombre << " de especie " << especie << " tiene " << edad << " año(s) de edad." << std::endl;
        std::cout << "Su raza es " << raza << std::endl;
        std::cout << "Su ladrido es " << ladrido << std::endl;
    }
};

class Gato : public Animal
{
private:
    std::string colorPelaje;
    std::string maullido;
public:
    Gato()
    {
        colorPelaje = "";
        maullido = "";
    }
    Gato(std::string nombre_, int edad_, std::string especie_,std::string colorPelaje_, std::string maullido_) : Animal(nombre_, edad_, especie_)
    {
        colorPelaje = colorPelaje_;
        maullido = maullido_;
    }
    void hablar()
    {
        std::cout << maullido << std::endl;
    }
    void printInfo()
    {
        std::cout << "El gato " << nombre << " de especie " << especie << " tiene " << edad << " año(s) de edad." << std::endl;
        std::cout << "Su pelaje es color " << colorPelaje << std::endl;
        std::cout << "Su maullido es " << maullido << std::endl;
    }
};