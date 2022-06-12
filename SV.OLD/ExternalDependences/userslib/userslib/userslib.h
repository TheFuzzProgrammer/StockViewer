#pragma once
//#include <string>
#include <iostream>

#ifndef SVUSERS_EXPORTS
#define SVUSERS _declspec(dllexport)
#else
#define SVUSERS _declspec(dllexport)
#endif

using namespace std;

namespace users {
	class SVUSERS Person {
		/// <summary>
		/// this.gendre
		/// this.name
		/// this.surname
		/// this.birth
		/// this.document
		/// 
		/// SETTERS 4 ALL CALLED AS <THIS>.set_<atttr>(<VALUE>)
		/// 
		/// this.set_gendre() receives an int value and <int == 1> this.gendre -> male
		///					 <int == 2> this.gendre -> female <else> this.gendre -> not bin
		/// 
		/// </summary>
	private:
		int object_id;
	public:
		string gendre;
		string name;
		string surname;
		string birth;
		string document;

		Person(string, string, string, int);

	public:

	void set_document(string _doc);

	void set_gendre(int _gendre);

	void set_name(string _name);

	void set_surname(string _surmane);

	void set_birth(string _birth);
	string get_name() {
			return this->name;
		}
	string get_surname() {
			return this->surname;

		}
	string get_birth() {
			return	this->birth;
		}
	string get_gendre() {
			return this->gendre;
		}
	string get_document() {
			return this->document;
		}
	};
	/*
			CONSTRUCTOR AREA
	*/
	Person::Person(string _name, string _surname, string _birth, int _const_id) {
		name = _name;
		surname = _surname;
		birth = _birth;
		object_id = _const_id;
	}

}