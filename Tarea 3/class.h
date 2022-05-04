class Envio{ // Se declara la clase Envio
private:
    // Se declaran los atributos de la clase Envio  
    std::string nomRem;
    std::string dirRem;
    std::string cdRem;
    std::string edoRem;
    int cpRem;
    std::string nomDest;
    std::string dirDest;
    std::string cdDest;
    std::string edoDest;
    int cpDest;

protected:
    double costo; 

public:
    // Se declaran los métodos de la clase Envio   
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

    virtual double calculaCosto(){ // Envio declara al método CalculaCosto como virtual  
        return costo;
    }

    std::string getDirRem(){            
        return "Nombre Remitente: " + nomRem + "\n"
            "Calle: " + dirRem + "\n"
            "Ciudad: " + cdRem + "\n"
            "Estado: " + edoRem + "\n"
            "C.P.: " + std::to_string(cpRem) + "\n";
    }

    std::string getDirDest(){            
        return "Nombre Destinatario: " + nomDest + "\n"
            "Calle: " + dirDest + "\n"
            "Ciudad: " + cdDest + "\n"
            "Estado: " + edoDest + "\n"
            "C.P.: " + std::to_string(cpDest) + "\n";
    }
};

class Paquete : public Envio { // Se declara la clase Paquete y hereda de Envio
private:
    // Se declaran los atributos de la clase Paquete 
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoXkg;

public:
    // Se declaran los métodos de la clase Paquete   
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
    double calculaCosto(){ // Paquete declara el método CalculaCosto con exactamente la misma firma que Envio   

        costo += (peso*costoXkg);
        return costo;
        }
};

class Sobre : public Envio { // Se declara la clase Sobre y hereda de Envio
private:
    // Se declaran los atributos de la clase Sobre 
    double cargoAdicional;
    double ancho;
    double largo;
public:
    // Se declaran los métodos de la clase Sobre
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

    double calculaCosto(){ // Sobre declara el método CalculaCosto con exactamente la misma firma que Envio  

        if (std::max(largo,ancho) > 30 || std::min(largo,ancho) > 25) {
            costo += cargoAdicional;
        }
        return costo;
    }
};
