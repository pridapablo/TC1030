/*
Pablo Banzo Prida -- A0172031
TC1030.201 -- POO -- Jesús Leopoldo Llano García
*/

class Servicio{
    virtual std::string getName() = 0;
    virtual std::string getGen() = 0;
    virtual int getID() = 0;
    virtual int getRuntime() = 0;
    virtual int getCalif() = 0;
    virtual void setCalif(int cal) = 0;
};

class Video : public Servicio
{
protected:
    int ID;
    std::string nombre;
    int duracionMin;
    std::string genero;
    int calif;

    Video()
    {
        ID = -1;
        nombre = "";
        duracionMin = -1;
        genero = "";
        calif = -1;
    }

    Video(int ID_, std::string nombre_, int duracionMin_, std::string genero_, int calif_)
    {
        ID = ID_;
        nombre = nombre_;
        duracionMin = duracionMin_;
        genero = genero_;
        calif = calif_;
    }

public:
    std::string getName()
    {
        return nombre;
    }
    std::string getGen()
    {
        return genero;
    }
    int getID()
    {
        return ID;
    }
    int getRuntime()
    {
        return duracionMin;
    }
    int getCalif()
    {
        return calif;
    }
    void setCalif(int cal)
    {
        calif = cal;
    }
    void operator%(int c)
    {
        this->setCalif(c);
    }
};

class Pelicula : public Video
{
public:
    Pelicula() {}
    Pelicula(int ID_, std::string nombre_, int duracionMin_, std::string genero_, int calif_) : Video(ID_, nombre_, duracionMin_, genero_, calif_) {}
};

class Episodio : public Video
{
    // private:
    std::string nomEpisodio;
    int temporada;

public:
    Episodio() {}
    Episodio(int ID_, std::string nombre_, int duracionMin_, std::string genero_, int calif_, std::string nomEpisodio_, int temporada_) : Video(ID_, nombre_, duracionMin_, genero_, calif_)
    {
        nomEpisodio = nomEpisodio_;
        temporada = temporada_;
    }
    std::string getNameEp()
    {
        return nomEpisodio;
    }
    int getSeason()
    {
        return temporada;
    }
};