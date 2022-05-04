class ServicioDeStreaming
{
    // private:
};

class Video
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
    // virtuales los métodos que no se compartan
    //  virtual std::string getNameEp() = 0;
    //  virtual int getSeason() = 0;
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

// exception::typeid