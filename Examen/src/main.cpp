#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "animals.h"

#define USING_MAIN
#ifdef USING_MAIN

int main()
{
    int sizePerro = 2;
    Perro *perros[sizePerro];
    perros[0] = new Perro("Baxter", 4, "Canis lupus familiaris", "Pug", "Woof");
    perros[1] = new Perro("Mike", 10, "Canis lupus familiaris", "Labrador", "Woof, Woof");

    int sizeGato = 2;
    Gato *gatos[sizeGato];
    gatos[0] = new Gato("Miguel", 1, "Felidae", "Blanco", "Miau");
    gatos[1] = new Gato("Juan", 5, "Felidae", "Negro", "Miauuuuu");

    int opcion = -1;
    while (opcion != 0)
    {
        system("clear");
        std::cout << "¿En qué opción está interesad@? \n";
        std::cout << "1. Adoptar un perro\n";
        std::cout << "2. Adoptar un gato\n";
        std::cout << "3. ¡Quiero escuchar a todos los animalitos hablar!\n";

        std::cin >> opcion;

        if (opcion == 1)
        {
            system("clear");
            std::cout << "¿Perros menores a qué edad? (ingrese '0' para cualquier edad) \n";
            int ed = -1;
            std::cin >> ed;
            if (ed == 0)
            {
                for (int i = 0; i < sizePerro; i++)
                {
                    Perro *instancia = perros[i];
                    std::cout << "------ Perro #" << i + 1 << " ------\n";
                    instancia->printInfo();
                }
            }
            else
            {
                for (int i = 0; i < sizePerro; i++)
                {
                    Perro *instancia = perros[i];
                    if (instancia->getEdad() < ed)
                    {
                        std::cout << "------ Perro #" << i + 1 << " ------\n";
                        instancia->printInfo();
                    }
                }
            }
        }

        else if (opcion == 2)
        {
            system("clear");
            std::cout << "Gatos menores a qué edad? (ingrese '0' para cualquier edad) \n";
            int ed = -1;
            std::cin >> ed;
            if (ed == 0)
            {
                for (int i = 0; i < sizeGato; i++)
                {
                    Gato *instancia = gatos[i];
                    std::cout << "------ Gato #" << i + 1 << " ------\n";
                    instancia->printInfo();
                }
            }
            else
            {
                for (int i = 0; i < sizeGato; i++)
                {
                    Gato *instancia = gatos[i];
                    if (instancia->getEdad() < ed)
                    {
                        std::cout << "------ Gato #" << i + 1 << " ------\n";
                        instancia->printInfo();
                    }
                }
            }
        }

        else if (opcion == 3)
        {
            std::cout << "--------- Gatitos ---------\n";
            for (int j = 0; j < sizeGato; j++)
            {
                Gato *g = gatos[j];
                g->hablar();
            }
            std::cout << "---------------------------\n";
            std::cout << "--------- Perritos ---------\n";
            for (int x = 0; x < sizePerro; x++)
            {
                Perro *p = perros[x];
                p->hablar();
            }
            std::cout << "---------------------------\n";
        }
        return 0;
    }
}

#endif