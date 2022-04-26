int main (){
    CoordRec r1(1,2);
    CoordRec r2(2,4);

    //MAL HECHO
    int x = r1.getX()+r2.getX();
    int y = r1.getY()+r2.getY();

    std::cout << "(" << x << "," << y << ")\n";

    //BIEN HECHO

    //IDEAL - SOBRECARGA DE OPERADORES


    CoordPol polar1(7,20);
    CoordPol polar2(3,160);

    CoordPol polar3 = polar1 * polar2;
}