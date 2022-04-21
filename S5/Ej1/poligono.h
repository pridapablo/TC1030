class Poligono {
//privado (por default)
    int num_lados;
public:
    void setNumLados(int n) { //método concreto
        num_lados = n;
    }
    virtual double calcularArea() = 0; //método virtual puro
    virtual double calcularPerimetro() = 0;
};

class Triangulo : public Poligono {
    // int base;
    // int altura;
    
public:
    double calcularArea() {
        //estoy sobreescribiendo el método virtual puro (lo estoy haciendo concreto)
        // area = base * altura / 2;
    }

    double calcularPerimetro(){
        // lado * 3
    }
};