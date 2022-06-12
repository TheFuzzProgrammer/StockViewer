#include "pch.h"

namespace userslib {
#pragma region USER_SET

    User::User(char _name[], char _surname[], char _uniqueId[], int _gendre, Address* _address, int _document) {

        name = _name, surname = _surname, uniqueId = _uniqueId;
        address = _address;
        document = _document;
        this->gendre = Gendre::Other;

        switch (_gendre) {
            case 1: {
                this->gendre = Gendre::Male;
                break;
            }
            case 2: {
                this->gendre = Gendre::Female;
                break;
            }
            default: {
                this->gendre = Gendre::Other;
                break;
            }

        }
    }

    int User::GetDocument() {
        return this->document;
    }

    const char* User::GetId() {
        return this->uniqueId;
    }

    char* User::GetSurname() {
        return this->surname;
    }

    char* User::GetName() {
        return this->name;
    }

    char User::ToStringArray() {
        return *this->name;
    }

    void User::SetName(char _name[]) {
        this->name = _name;
    }

    void User::SetSurname(char _surname[]) {
        this->surname = _surname;
    }

    void User::SetAddres(Address* _newAddress) {
        this->address = _newAddress;
    }

    int User::GetAge() {
        return CalculateAge();
    }

    int User::CalculateAge() {
        return 174;
    }

#pragma endregion
}