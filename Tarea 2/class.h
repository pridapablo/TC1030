class Envio{
private:
    // Datos del Remitente
    std::string nomRem;
    std::string dirRem;
    std::string cdRem;
    std::string edoRem;
    int cpRem;

    // Datos del Destinatario
    std::string nomDest;
    std::string dirDest;
    std::string cdDest;
    std::string edoDest;
    int cpDest;

protected:
    double costo; 

public:
    Envio() {
        costo = 100;

        nomRem = "";
        dirRem = "";
        cdRem = "";
        edoRem = "";
        cpRem = 0;

        nomDest = "";
        dirDest = "";
        cdDest = "";
        edoDest = "";
        cpDest = 0;
        }
    Envio(std::string nomRemP, std::string dirRemP, std::string cdRemP, std::string edoRemP, int cpRemP, std::string nomDestP, std::string dirDestP, std::string cdDestP, std::string edoDestP, int cpDestP){
        costo = 100;
        nomRem = nomRemP;
        dirRem = dirRemP;
        cdRem = cdRemP;
        edoRem = edoRemP;
        cpRem = cpRemP;

        nomDest = nomDestP;
        dirDest = dirDestP;
        cdDest = cdDestP;
        edoDest = edoDestP;
        cpRem = cpRemP;
    }

    virtual double calculaCosto(){
        return costo;
    }
};

class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoXkg;

public:
    Paquete(){
        largo = 0;
        ancho = 0;
        profundidad = 0;
        peso = 0;
        costoXkg = 0;
    }
    Paquete(std::string nomRemP, std::string dirRemP, std::string cdRemP, std::string edoRemP, int cpRemP, std::string nomDestP, std::string dirDestP, std::string cdDestP, std::string edoDestP, int cpDestP, double largoP, double anchoP, double profundidadP, double pesoP, double costoXkgP) : Envio(nomRemP,dirRemP,cdRemP,edoRemP,cpRemP,nomDestP,dirDestP,cdDestP,edoDestP,cpDestP){
        largo = largoP;
        ancho = anchoP;
        profundidad = profundidadP;
        peso = std::abs(pesoP);
        costoXkg = std::abs(costoXkgP);
    }
    double calculaCosto(){
        costo += (peso*costoXkg);
        return costo;
        }
};


class Sobre : public Envio {
private:
    double cargoAdicional;
    double ancho;
    double largo;
public:
    Sobre(){
        cargoAdicional = 200.13;
        ancho = 0;
        largo = 0;
    }
    Sobre(std::string nomRemP, std::string dirRemP, std::string cdRemP, std::string edoRemP, int cpRemP, std::string nomDestP, std::string dirDestP, std::string cdDestP, std::string edoDestP, int cpDestP, double anchoP, double largoP) : Envio(nomRemP,dirRemP,cdRemP,edoRemP,cpRemP,nomDestP,dirDestP,cdDestP,edoDestP,cpDestP){
        cargoAdicional = 200.13;
        ancho = anchoP;
        largo = largoP;
    }

    double calculaCosto(){
        if (std::max(largo,ancho) > 30 || std::min(largo,ancho) > 25) {
            costo += cargoAdicional;
        }
        return costo;
    }
};
