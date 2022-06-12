#pragma once

namespace userslib {

#pragma region INTERFACE_DECL
	
	__interface IUser
	{
		char GetName();
		char GetSurname();
		int GetDocument();
		const char GetId();
		char ToStringArray();
		void SetName(char _name[]);
		void SetSurname(char _surname[]);
	};

#pragma endregion

	typedef enum class Gendre {
		Male = 1,
		Female = 2,
		Other = 3		
	};

}
