//
//  Shapes.h
//  Tarea 3
//
//  Created by Jesus Llano García on 27/04/22.
//

#ifndef Shapes_h
#define Shapes_h

class Shape{
private:
    int x;
    int y;
    
public:
    Shape(){
        x = 0;
        y = 0;
    }
    
    Shape(int ValX, int ValY){
        x = ValX;
        y = ValY;
    }
    
    virtual std::string draw(){
        return "Soy una Figura";
    }
    
    int getValueX(){
        return x;
    }
    int getValueY(){
        return y;
    }
};

class Circle : public Shape {
    
    private:
        int r;
    
    public:
        Circle(){
            r = 0;
        }
        Circle(int ValX, int ValY, int ValR) : Shape(ValX, ValY){
            r = ValR;
        }
    
        int getValueR(){
            return r;
        }
    
        std::string draw(){
            return "soy un circulo";
        }
};

class Rectangle : public Shape {
    
    private:
        int b;
        int h;
    
    public:
        Rectangle(){
            b = 0;
            h = 0;
        }
        Rectangle(int ValX, int ValY, int ValB, int ValH) : Shape(ValX, ValY){
            b = ValB;
            h = ValH;
        }
    
        int getValueB(){
            return b;
        }
        
        int getValueH(){
            return h;
        }
        std::string draw(){
            return "soy un rectángulo";
        }
};


#endif /* Shapes_h */
