// 2023_03_12_HolaMundo_Variables_Operadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int vida = 100;
    int ataque = 10;
    int aux = 0;
    aux = vida / ataque;
    std::cout << "Tu vida restante es: " << aux << std::endl;
}
