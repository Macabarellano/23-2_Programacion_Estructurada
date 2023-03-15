// 2023_03_15_002_HMOPVAR_V1.cpp :
// Mauricio Cabrera
// Hola Mundo, Variables, Operadores Aritmeticos
// 
// 
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";//Comunicarnos con el usuario
    //con Cout me comunico con el usuario
    //Con \n y con std::endl doy un salto de linea
    std::cout << "Hola \nchiquitines " << std::endl;
    //Tipos de variables bool, int, float, char, string
    //Sintaxys para nombrar variables
    //Tipo de variable - Nombre de la variable - Inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Mau123";
    std::string namertag = "Champsad";
    //<< es concatenar o sumar textos
    std::cout << "Hola " << nombre << " Bienvenido al mundo de " << namertag 
        <<std::endl;
    std::cout << std::endl;
    //Operadores Aritmeticos
    //+ - * / ^2 raiz
    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida_Aux restante es: " << Vida_Aux << std::endl;

}
