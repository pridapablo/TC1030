// Solo declaro las clases

class CoordRec{
private:
    double x, y;
public:
    CoordRec();
    CoordRec(double, double); //sin inicializar Variables
    double getX();
    double getY();
    CoordRec suma(const CoordRec&);
    CoordRec operator+(const CoordRec&); // SOBRECARGA DE OPERADORES
};

class CoordPol{
    CoordPol();
    CoordPol();
    double getR();
    double getT();
}