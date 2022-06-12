#pragma once

namespace userslib {
	class __declspec(dllexport) Address {
		char* country;
		char* state;
		char* zipCode;
		char* streetAndNumber;
		char* personPointerId;

	public:
		Address(char _country[], char _state[], char _zipCode[], char _streetAndNumber[], char _personPointerId[]);
		char ToCstr();
		void SetCountry(char* _newCountry);
		void SetState(char* _newState);
		void SetZipCode(char* _newZC);
		void SetStreetAndNumber(char* _newStreetNum);
	};
}
