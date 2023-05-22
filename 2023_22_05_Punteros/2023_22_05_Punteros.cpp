// 2023_22_05_Punteros.cpp : 
// Mau Cabrera
// Punteros
//

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>

int main()
{
    std::cout << "Hola chavales\n";
    //Repaso de funciones de control.
    system("pause");
    system("CLS");
    Sleep(100);

    //Punteros
    int Edad = 0;
    int* apuntador = &Edad;

    std::cout << "El valor de la edad: " << Edad
        << std::endl;
    std::cout << "El valor del puntero: " << apuntador
        << std::endl;
    std::cout << "El valor de la variable apuntada: " << *apuntador
        << std::endl;
    std::cout << "El valor de la dirección apuntada: " << &apuntador
        << std::endl;
    //borrar apuntador
    apuntador = NULL;
}
