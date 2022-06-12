#include <iostream>
#include <User.h>
#include <Address.h>
#include <userslib.h>
#include <ctime>

using namespace std;
using namespace userslib;

int main() {

#pragma region USERSLIB

	/// <summary>
	/// 
	/// TESTING userslib.dll
	/// 
	/// </summary>
	/// <returns></returns>
	/// 
	char nombre[5] = "Raul";
	char apellido[11] = "programmer";
	char id[11] = "documentid";
	int genero = 1;
	int codigo = 666;
	char _country[] = "Argentina";
	char _state[] = "Cordoba";
	char _zipCode[] = "5003";
	char _streetAndNumber[] = "STREET NUMBER";
	char _personPointerId[] = "ADMIN1";
	
	///OBS1 **CONVERTIR ARGUMENTOS A CONST CHAR**

	Address * direccion = new Address(_country, _state, _zipCode, _streetAndNumber, _personPointerId);

	User* usuario = new User(nombre, apellido, id, genero, direccion, codigo);

	cout << usuario->GetName() << "\n";
	cout << usuario->GetSurname() << "\n";
	cout << usuario->GetId() << "\n";
	cout << usuario->GetDocument() << "\n";


	

#pragma endregion

	return 0;
}