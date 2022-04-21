class ClaseBase { // Es una interfaz con 4 métodos virtuales puros
public:
    virtual void metodo1() = 0;
    virtual void metodo2() = 0;
    virtual void metodo3() = 0;
    virtual void metodo4() = 0;
};

class Subclase1 : public ClaseBase { // clase concreta
public:
    void metodo1(){
        //Algoritmo1 de la subclase 1
    }
    void metodo2(){
        //Algoritmo2 de la subclase 1
    }
    void metodo3(){
        //Algoritmo3 de la subclase 1
    }
    void metodo4(){
        //Algoritmo4 de la subclase 1
    }
};