// 2023_05_17_Matriz.cpp : 
// Mauricio Cabrera
// Matrices

#include <iostream>
#include <random>

int main()
{
	srand(time(NULL)); // Semillero - Toma el reloj para generar un #aleatorio
	/*
	int edades[100][100];
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << "Filas: "<<filas <<std::endl;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << "Columnas: " << columnas;
// Imprimir el apendice de cada sizeof
	//Sizeof edades, edades[], edades[][]
	*/
	//Declarar la matriz
	int mat[3][3];
	//Ingresar datos aleatorios a la matriz
	for (int i = 0; i < 3; i++)//ciclo para acceder a filas
	{
		for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
		{
			mat[i][j] = rand() % 10;
		}
	}
	//Imprimir toda la matriz 
	for (int i = 0; i < 3; i++)//ciclo para acceder a filas
	{
		for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
		{
			std::cout <<mat[i][j]<< " ";
		}
		std::cout << std::endl;
	}
}
