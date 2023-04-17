// 2023_03_27_004_EControl_V1.cpp :
// Mauricio Cabrera
// En este programa haremos repaso del tema pasado In/out - Consultorio médico.
// Agregaremos la syntaxis de las estructuras de control
//

#include <iostream>
#include <string>

int main()
{	//Ejemplo string con espacios
	std::string Nombre;
	std::cout << "Hola paciente como te llamas? : \n";
	getline(std::cin, Nombre);
	//std::cin >> Nombre;
	std::cout << "Así que te llamas: " << Nombre << std::endl;

	//Ejemplo Char
	char apellido[15];
	std::cout << "Paciente puede entregar sus apellidos? : \n";
	//getline(std::cin, apellido); NO FUNCIONA
	std::cin >> apellido;
	std::cout << "Así que te apellidas: " << apellido << std::endl;

}
