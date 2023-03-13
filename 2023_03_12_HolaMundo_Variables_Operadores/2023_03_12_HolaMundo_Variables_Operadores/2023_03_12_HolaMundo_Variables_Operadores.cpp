// 2023_03_12_HolaMundo_Variables_Operadores.cpp 
// Mauricio Cabrera
// Este archivo contiene las bases de declaracón de variables y operadores
// char, short, int, long, que representan enteros de distintos tamaños (los caracteres son enteros de 8 bits).
// float, double y long double, que representan números reales (en coma flotante).
// Sobre los tipos elementales se pueden emplear los siguientes operadores aritméticos:
// +(más, como signo o como operación suma)
// - (menos, como signo o como operación resta)
// * (multiplicación)
// / (división)
// % (resto)
// Y los siguientes operadores relacionales :
// == (igual)
// != (distinto)
// < (menor que)
// > (mayor que)
// <= (menor o igual que)
// >= (mayor o igual que)
// 

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int vida = 100;
    int ataque = 10;
    int aux = 0;
    aux = vida - ataque;
    std::cout << "Tu vida restante es: " << aux << std::endl;
}
