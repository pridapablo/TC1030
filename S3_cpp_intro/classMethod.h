// Voy a crear dos clases (una con métodos internos y otra con métodos externos)

class MetodosInternos{
    public:
    void myMethod(){ // Forma típica de crear un método
        // Algoritmo que define el comportamiento de este método
        std::cout << "Este método está definido adentro de la clase\n";
    }
};

class MetodosExternos{ // Forma de crear un método (siguiendo los estándares)
    public:
    void myMethod(); //Defino el método sin parámetros
};

void MetodosExternos::myMethod(){
    // Construyo el método fuera de la clase
    std::cout << "Este método está definido fuera de la clase\n";
    }