// Importar datos usando std::fstream = 3 pt extras
// ifstream es una clase que permite crear la instancia fich para leer de un fichero
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include "movies.h"

#define USING_MAIN
#ifdef USING_MAIN

int main()
{

    int size = 2;
    Video *lib[size];
    lib[0] = new Pelicula(1, "Peli1", 20, "Genero1", 10);
    lib[1] = new Episodio(2, "Peli2", 30, "Genero2", 10, "Ep1", 2);

    for (int i = 0; i < size; i++)
    {
        Video *current = lib[i];
    }

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
            std::cout << "-----------------------------\n";
            break;
        }
        else if (opcion == 2)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "2. Mostrar los videos en general con una cierta calificación o de un cierto género\n";
            int opcion2 = -1;
            while (opcion2 != 0)
            {
                system("clear");
                std::cout << "Eliga una de las siguientes opciones: \n";
                std::cout << "1. Mostrar videos en general con una cierta calificación\n";
                std::cout << "2. Mostrar videos en general de un cierto género\n";
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

                    // CICLO PARA VER VIDEOS CON CALIFICACIÓN cali
                    for (int i = 0; i < size; i++)
                    {
                        Video *current = lib[i];
                        int cal = current->getCalif();
                        std::string nom = current->getName();
                        if (cal == cali)
                        {
                            std::cout << "El video " << nom << " tiene calificación " << cal << std::endl;
                        }
                        else
                        {
                            break;
                            std::cout << "Error: parámetros incorrectos, no se encontraron coincidencias \n";
                        }
                    }
                    break;
                }
                else if (opcion2 == 2)
                {
                    system("clear");
                    std::cout << "Ha elegido: \n";
                    std::cout << "2. Mostrar videos en general de un cierto género\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Ingrese un género \n";
                    std::string gen;
                    std::cin >> gen;

                    // CICLO PARA VER VIDEOS CON GÉNERO gen
                    for (int i = 0; i < size; i++)
                    {
                        Video *current = lib[i];
                        std::string gene = current->getGen();
                        std::string nom = current->getName();
                        if (gen == gene)
                        {
                            std::cout << "El video " << nom << " tiene como género " << gene << std::endl;
                        }
                        else
                        {
                            break;
                            std::cout << "Error: parámetros incorrectos, no se encontraron coincidencias \n";
                        }
                    }
                    break;
                }
                else
                {
                    system("clear");
                    std::cout << "Opción inválida... reiniciando menú\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                }
            }
            break;
        }
        else if (opcion == 3)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "3. Mostrar los episodios de una determinada serie con una calificacion determinada\n";
            std::cout << "-----------------------------\n";
            std::cout << "Ingrese una serie \n";
            std::string ser;
            std::cin >> ser;
            std::cout << "Ingrese una calificación del 1 al 5 \n";
            int cali;
            std::cin >> cali;
            break;

            // CICLO PARA VER EPISODIOS DE SERIE ser CON CALIFICACIÓN cali

            // for (int i = 0; i < size; i++){
            //     Video *current = lib[i];
            //     std::string nomEp = current->getNameEp();
            //     std::string nom = current->getName();
            //     int cal = current->getCalif();
            //     if(cal == cali){
            //         std::cout << "El episodio " << nomEp << "de la serie " << nom << " tiene calificación " << cal << std::endl;
            //     }
            // }
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
            for (int i = 0; i < size; i++)
            {
                Video *current = lib[i];
                std::string nom = current->getName();
                int cal = current->getCalif();
                if (cal == cali)
                {
                    // ESTO IMPRIME TAMBIÉN SERIES!!!! ARREGLAR PARA QUE SOLO SEAN PELÍCULAS
                    std::cout << "La película " << nom << " tiene calificación " << cal << std::endl;
                }
                else
                {
                    break;
                    std::cout << "Error: parámetros incorrectos, no se encontraron coincidencias \n";
                }
            }
            break;
        }
        else if (opcion == 5)
        {
            system("clear");
            std::cout << "Ha elegido: \n";
            std::cout << "5. Calificar un video\n";
            std::cout << "-----------------------------\n";
            std::cout << "Eliga el título a calificar\n";
            std::string tit;
            std::cin >> tit;
            std::cout << "Ingrese una calificación del 1 al 5 \n";
            int cali;
            std::cin >> cali;

            // CICLO PARA CALIFICAR EL TÍTULO tit CON CALIFICACIÓN cali
            for (int i = 0; i < size; i++)
            {
                Video *current = lib[i];
                std::string nom = current->getName();
                if (nom == tit)
                {
                    current->setCalif(cali);
                    std::cout << "La calificacion del Video " << nom << " ahora es " << current->getCalif() << std::endl;
                }
            }

            break;
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
            std::cout << "Opción inválida... reiniciando menú\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    }
}
#endif
