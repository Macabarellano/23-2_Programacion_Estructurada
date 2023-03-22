// 2023_03_22_003_INOUT_V1.cpp :
// Mauricio Cabrera
// En este programa aprenderemos a usar bibliotecas
// Reforzaremos el hablar con el usuario 
//Recibiremos datos del usuario

//Sintaxys para agregar librerias
//# obligado, palabra reservada include
//Entre <> escribir el nombre de la libreria
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool pregunta = false;
    int n_tacos = 0;
    float;
    char;
    std::string;
    std::cout << "Hola Bienvenido a tu programa...";
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche ceno tacos al pastor? 0)No 1)Si" << std::endl;
    // Recibir respuesta del usuario
    std::cin >> pregunta;
    std::cout << "Ya veo entonces es " << pregunta << " que cenaste tacos" <<
        std::endl;
    std::cout << "Cuantos tacos? "<<std::endl;
    std::cin >> n_tacos;
    std::cout << "baia baia entonces te comiste " << n_tacos << std::endl;
}
