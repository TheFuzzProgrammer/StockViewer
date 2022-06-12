#pragma once
#include "userslib.h"
#include "address.h"

namespace userslib{

	class __declspec(dllexport) User{

	protected:
		char* name;
		char* surname;
		const char* uniqueId;
		Gendre gendre;
		Address* address;
		int document;
	public:
		User(char _name[], char _surname[], char _uniqueId[], int _gendre, Address* _address, int _document);
		char* GetName();
		char* GetSurname();
		int GetDocument();
		const char* GetId();
		char ToStringArray();
		void SetName(char _name[]);
		void SetSurname(char _surname[]);
		void SetAddres(Address* _newAddress);
		int GetAge();

	protected:
		int CalculateAge();
	};

}