#include "Login.h"

bool Login:: verify(std::string inputName, std::string inputPass)
{
	if (inputName != username)
	{
		//output wrong username
		return false;
	}
	if (inputPass != password)
	{
		//output wrong password
		return false;
	}

	return true;
}
void Login::changeUserName(std::string newUserName){ username = newUserName; }
void Login::changePassword(std::string newPassword) { password = newPassword; }