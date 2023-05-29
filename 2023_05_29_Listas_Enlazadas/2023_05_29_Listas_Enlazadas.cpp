// 2023_05_29_Listas_Enlazadas.cpp :
// Mau Cabrera
// Syntaxis para nodos -> Realizar el complemento para las propiedades

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo
{
public:
	std::string nombre;
	int vida;
	int ataque;
	int edad;
	nodo* next;
};

int main()
{
	nodo* Cabeza = NULL;
	nodo* Cuello = NULL;
	nodo* Pecho = NULL;
	nodo* Abdomen = NULL;
	nodo* Brazos = NULL;
	nodo* Piernas = NULL;
	nodo* Pies = NULL;

	Cabeza = new nodo();
	Cuello = new nodo();
	Pecho = new nodo();
	Abdomen = new nodo();
	Brazos = new nodo();
	Piernas = new nodo();
	Pies = new nodo();

	Cabeza->nombre = "Juan";
	Cabeza->vida = 110;
	Cabeza->ataque = 50;
	Cabeza->edad = 15;
	Cabeza->next = Cuello;

	Cuello->edad = 10;
	Cuello->next = Pecho;

	Pecho->edad = 7;
	Pecho->next = Abdomen;

	Abdomen->edad = 20;
	Abdomen->next = Brazos;

	Brazos->edad = 30;
	Brazos->next = Piernas;

	Piernas->edad = 45;
	Piernas->next = Pies;

	Pies->edad = 150;
	Pies->next = NULL;

	//Imprimir la lista enlazada.
	while (Cabeza != NULL)
	{
		std::cout << "Nombre: "<< Cabeza->nombre << std::endl;
		std::cout << Cabeza->edad << " " << std::endl;

		Cabeza = Cabeza->next;
	}
}
