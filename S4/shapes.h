class Shape{
private:
    int x;
    int y;

public:
    Shape(){ //Constructor default
        x = 0;
        y = 0;
    }

    Shape(int ValX, int ValY){//Polimorfismo y sobrecarga de funciones: constructor parametrizado
        x = ValX;
        y = ValY;
    } 
    virtual std::string draw(){
        return "Soy una figura";
    }
    int getValueX(){
        return x;
    }

    int getValueY(){
        return y;
    }
};

class Circle : public Shape { //herencia pública de la clase Shape
private:
    int r;
public:
    Circle(){ // No es necesario llamar al padre porque ya está parametrizado
        r = 0;
    }
    Circle(int ValX, int ValY, int ValR) : Shape(ValX, ValY){//Llamado al constructor de la clase base
        r = ValR; // Extiendo la funcionalidad
    } 

    int getValueR(){
        return r;
    }

    std::string draw(){
        return "Soy un círulo";
    }
};

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

class Rectangle : public Shape{
private:
    int base;
    int height;
public:
    Rectangle(){
        base = 0;
        height = 0;
    }
    Rectangle(int ValX, int ValY, int Base, int Height) : Shape(ValX, ValY){
        base = Base;
        height = Height;
    }
    int getHeight(){
        return height;
    }
    int getBase(){
        return base;
    }
    std::string draw(){
        return "Soy un rectángulo";
    }
};