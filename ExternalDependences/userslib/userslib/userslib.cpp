// userslib.cpp - Defines the exported elements for the dll
#include "pch.h"
using namespace std;
#include "userslib.h"

namespace users {
	void Person::set_name(string _name)
		{
			this->name = _name;
		}
	void Person::set_gendre(int _gendre) {
		if (_gendre == 1) {
			this->gendre = "MALE";
		}
		else if (_gendre == 2) {
			this->gendre = "FEMALE";
		}
		else {
			this->gendre = "NON BIN";
		}
	}
	void Person::set_surname(string _surmane) {
		this->surname = _surmane;
	}
	void Person::set_birth(string _birth) {
		this->birth = _birth;
	}
	void Person::set_document(string _doc) {
		this->document = _doc;
	}
}