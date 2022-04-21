class Shape{
public:
    virtual double area() = 0;
    virtual double perimetro() = 0;
};

class Circulo : public Shape {
//private:
    int r;
public:
    Circulo(){
        r = 0;
    }
    Circulo(int ValR) {
        r = ValR;
    } 
    double area() {
        return 3.14*r*r;
    }
    double perimetro() {
        return 2*3.14*r;
    }
};

class Rectangulo : public Shape{
//private:
    int base;
    int altura;
public:
    Rectangulo(){
        base = 0;
        altura = 0;
    }
    Rectangulo(int Base, int Altura) {
        base = Base;
        altura = Altura;
    }
    double area() {
        return base*altura;
    }
    double perimetro() {
        return base*2+altura*2;
    }
};

/*
class Triangle : public Shape {
private:
    int base;
    int height;
    std::string type;
public:
    Triangle(){
        base = 0;
        height = 0;
        type = " ";
    }
    Triangle(int ValX, int ValY, int Base, int Height, std::string Type) : Shape(ValX, ValY){
        base = Base;
        height = Height;
        type = Type;
    }
    std::string getType(){
        return type;
    }
    int getHeight(){
        return height;
    }
    int getBase(){
        return base;
    }
    std::string draw(){
        return "Soy un triangulo";
    }
};
*/