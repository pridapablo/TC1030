// Importar datos usando std::fstream = 3 pt extras
// ifstream es una clase que permite crear la instancia fich para leer de un fichero
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "movies.h"

#define USING_MAIN
#ifdef USING_MAIN

int main()
{
    int sizePelic = 2;
    int sizeSer = 2;
    Pelicula *p[sizePelic];
    Episodio *s[sizeSer];

    p[0] = new Pelicula(1, "Yo No Fui", 120, "Comedia 2", 5);
    p[1] = new Pelicula(2, "Mi Boda", 150, "Drama", 4);
    s[0] = new Episodio(1, "Downton", 30, "Drama", 45, "Piloto", 4);
    s[1] = new Episodio(2, "Drop Dead Diva", 30, "Comedia", 5, "Piloto 2", 5);

    // Menú
    int opcion = -1;
    while (opcion != 0)
    {
        system("clear");
        std::cout << "Eliga una de las siguientes opciones: \n";
        std::cout << "1. Cargar archivo de datos\n";
        std::cout << "2. Mostrar los videos en general con una cierta calificación o de un cierto género\n";
        std::cout << "3. Mostrar los episodios de una determinada serie con una calificacion determinada\n";
        std::cout << "4. Mostrar las películas con cierta calificacion\n";
        std::cout << "5. Calificar un video\n";
        std::cout << "0. Salir\n";

        std::cin >> opcion;

        if (opcion == 1)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "1. Cargar archivo de datos\n";
            std::cout << "----------------------------------------------\n";
            std::cout << "Esta funcionalidad aún no ha sido implementada\n";
            std::cout << "----------------------------------------------\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
        else if (opcion == 2)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "2. Mostrar los videos en general con una cierta calificación o de un cierto género\n";
            std::cout << "-----------------------------\n";
            int opcion2 = -1;
            while (opcion2 != 0)
            {
                system("clear");
                std::cout << "Eliga una de las siguientes opciones: \n";
                std::cout << "1. Mostrar videos en general con una cierta calificación\n";
                std::cout << "2. Mostrar videos en general de un cierto género\n";
                std::cout << "0. Menú anterior\n";
                std::cin >> opcion2;
                if (opcion2 == 1)
                {
                    system("clear");
                    std::cout << "Ha elegido: \n";
                    std::cout << "1. Mostrar videos en general con una cierta calificación\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Ingrese una calificación del 1 al 5 \n";
                    int cali;
                    std::cin >> cali;

                    // CICLOS PARA VER VIDEOS CON CALIFICACIÓN cali
                    for (int i = 0; i < sizePelic; i++)
                    {
                        Pelicula *current = p[i];
                        int cal = current->getCalif();
                        std::string nom = current->getName();
                        if (cal == cali)
                        {
                            std::cout << "La película " << nom << " tiene calificación " << cal << std::endl;
                        }
                    }
                    for (int i = 0; i < sizeSer; i++)
                    {
                        Episodio *current = s[i];
                        int cal = current->getCalif();
                        std::string nom = current->getName();
                        std::string epi = current->getNameEp();
                        int temp = current->getSeason();
                        if (cal == cali)
                        {
                            std::cout << "El episodio " << epi << " de la temporada " << temp << " de la serie " << nom << " tiene calificación " << cal << std::endl;
                        }
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                }
                else if (opcion2 == 2)
                {
                    system("clear");
                    std::cout << "Ha elegido: \n";
                    std::cout << "2. Mostrar videos en general de un cierto género\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Ingrese un género \n";
                    std::string gen;
                    std::cin.ignore();
                    std::getline(std::cin, gen);

                    // CICLO PARA VER VIDEOS CON GÉNERO gen
                    for (int i = 0; i < sizePelic; i++)
                    {
                        Pelicula *current = p[i];
                        std::string gene = current->getGen();
                        std::string nom = current->getName();
                        if (gen == gene)
                        {
                            std::cout << "La película " << nom << " es de género " << gene << std::endl;
                        }
                    }
                    for (int i = 0; i < sizeSer; i++)
                    {
                        Episodio *current = s[i];
                        std::string gene = current->getGen();
                        std::string nom = current->getName();
                        if (gen == gene)
                        {
                            std::cout << "La serie " << nom << " es de género " << gene << std::endl;
                        }
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    break;
                }
                else if (opcion2 == 0)
                {
                    system("clear");
                    std::cout << "Regresando al menú anterior\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    break;
                }
                else
                {
                    system("clear");
                    std::cout << "Opción inválida... reiniciando menú\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    break;
                }
            }
        }
        else if (opcion == 3)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "3. Mostrar los episodios de una determinada serie con una calificacion determinada\n";
            std::cout << "-----------------------------\n";
            std::cout << "Ingrese una serie \n";
            std::string ser;
            std::cin.ignore();
            std::getline(std::cin, ser);

            std::cout << "Ingrese una calificación del 1 al 5 \n";
            int cali;
            std::cin >> cali;

            // CICLO PARA VER EPISODIOS DE SERIE ser CON CALIFICACIÓN cali
            for (int i = 0; i < sizeSer; i++)
            {
                Episodio *current = s[i];
                std::string nomEp = current->getNameEp();
                std::string nom = current->getName();
                int cal = current->getCalif();
                if (cal == cali && nom == ser)
                {
                    std::cout << "El episodio " << nomEp << " de la serie " << nom << " tiene calificación " << cal << std::endl;
                }
            }
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
        else if (opcion == 4)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "4. Mostrar las películas con cierta calificacion\n";
            std::cout << "-----------------------------\n";
            std::cout << "Ingrese una calificación del 1 al 5 \n";
            int cali;
            std::cin >> cali;

            // CICLO PARA VER PELÍCULAS CON CALIFICACIÓN cali
            for (int i = 0; i < sizePelic; i++)
            {
                Pelicula *current = p[i];
                std::string nom = current->getName();
                int cal = current->getCalif();
                if (cal == cali)
                {
                    std::cout << "La película " << nom << " tiene calificación " << cal << std::endl;
                }
            }
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
        else if (opcion == 5)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "5. Calificar un video\n";
            std::cout << "-----------------------------\n";

            int opcion3 = -1;
            while (opcion3 != 0)
            {
                system("clear");
                std::cout << "Eliga una de las siguientes opciones: \n";
                std::cout << "1. Calificar una película\n";
                std::cout << "2. Calificar un episodio de una serie\n";
                std::cout << "0. Menú anterior\n";
                std::cin >> opcion3;
                if (opcion3 == 1)
                {
                    system("clear");
                    std::cout << "Ha elegido calificar una película\n";
                    std::cout << "Eliga el título a calificar\n";
                    std::string titu;
                    std::cin.ignore();
                    std::getline(std::cin, titu);
                    std::cout << "Ingrese una calificación del 1 al 5 \n";
                    int calii;
                    std::cin >> calii;
                    for (int i = 0; i < sizePelic; i++)
                    {
                        Pelicula *current = p[i];
                        std::string nome = current->getName();
                        if (nome == titu)
                        {
                            (*current) % calii; //sobrecarga del setter
                            std::cout << "La calificacion de la película " << nome << " ahora es " << current->getCalif() << std::endl;
                        }
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    break;
                }
                else if (opcion3 == 2)
                {
                    system("clear");
                    std::cout << "Ha elegido calificar un episodio de una serie\n";
                    std::cout << "Eliga el nombre de la serie\n";
                    std::string tit;
                    std::cin.ignore();
                    std::getline(std::cin, tit);

                    std::cout << "Eliga el episodio a calificar\n";
                    std::string ep;
                    std::getline(std::cin, ep);

                    std::cout << "Ingrese una calificación del 1 al 5 \n";
                    int cali;
                    std::cin >> cali;
                    for (int i = 0; i < sizePelic; i++)
                    {
                        Episodio *current = s[i];
                        std::string nom = current->getName();
                        std::string epi = current->getNameEp();
                        if (nom == tit && epi == ep)
                        {
                            (*current) % cali; //sobrecarga del setter
                            std::cout << "La calificacion del episodio " << epi << " ahora es " << current->getCalif() << std::endl;
                        }
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    break;
                }
                else if (opcion3 == 0)
                {
                    system("clear");
                    std::cout << "Regresando al menú anterior\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    break;
                }
                else
                {
                    std::cout << opcion3 << "\n";
                    // system("clear");
                    std::cout << "Opción inválida... reiniciando menú\n";
                    // std::this_thread::sleep_for(std::chrono::seconds(2));
                    // break;
                }
            }
        }
        else if (opcion == 0)
        {
            system("clear");
            std::cout << "Ha elegido salir, gracias por usar nuestro servicio.\n";
            break;
        }
        else
        {
            system("clear");
            std::cout << "Opción inválida... Hasta luego\n";
            break;
        }
    }
}
#endif