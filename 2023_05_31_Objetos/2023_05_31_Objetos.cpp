// 2023_05_31_Objetos.cpp : 
// Mau Cabrera
// Syntaxis de Objetos
// ENUM - STRUCT

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

//Tipo de dato estructura - Nombre del tipo de dato.
struct Juego_Mesa
{
	std::string Nombre;
	std::string Autor;
	int num_jug=0;
}Guardados[10];

enum Armas {shorty = 100, knife, shutgun, sniper};
enum Charizard {Envite_Igneo = 150, Vuelo=80, Terremoto=100, Lanzallamas=100};

int main()
{
	
	Juego_Mesa Guardados[10];
	Guardados[0].Nombre = "Dodos Riding Dinos";
	Guardados[0].Autor = "Caravana GameLab";
	Guardados[0].num_jug = 6;
	std::cout << Guardados[0].Nombre << std::endl;
	std::cout << Guardados[0].num_jug << std::endl;
	std::cout << Guardados[0].Autor << std::endl;
	
	Armas Arma1 = shorty;
	std::cout << Arma1 << std::endl;
	Charizard Ataque1 = Envite_Igneo;
	Charizard Ataque2 = Vuelo;
	Charizard Ataque3 = Terremoto;
	Charizard Ataque4 = Lanzallamas;
	std::cout << Ataque1 << std::endl;
	std::cout << Ataque2 << std::endl;
	std::cout << Ataque3 << std::endl;
	std::cout << Ataque4 << std::endl;
}

