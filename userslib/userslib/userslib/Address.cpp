#include "pch.h"

namespace userslib {

#pragma region OBJECT_SET

    Address::Address(char _country[], char _state[], char _zipCode[], char _streetAndNumber[], char _personPointerId[]) {
        this->country = _country;
        this->state = _state;
        this->zipCode = _zipCode;
        this->streetAndNumber = _streetAndNumber;
        this->personPointerId = _personPointerId;
    }

    char Address::ToCstr() {
        return *this->country;
    }
    void Address::SetCountry(char* _newCountry) {
        return;
    }
    void Address::SetState(char* _newState) {
        return;
    }
    void Address::SetZipCode(char* _newZC) {
        return;
    }
    void Address::SetStreetAndNumber(char* _newStreetNum) {
        return;
    }

#pragma endregion
}