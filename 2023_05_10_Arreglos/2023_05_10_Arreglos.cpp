// 2023_05_10_Arreglos.cpp : 
// Mau Cabrera
// Arreglos

#include <iostream>
#include <string>

int main()
{
	int cont = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << cont << " ";
				cont++;
		}
		std::cout << std::endl;
	}
}
