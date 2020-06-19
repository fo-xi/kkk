#include "PasswordGeneretor.h"
#include <string>

string& PasswordGeneretor::GeneratePassword()
{
	string password = "";
	int countCharacters = 8;
	for (int i = 0; i < countCharacters; i++)
	{
		int randomNumbers = -10 + rand() % 21;
		char randomCharacters = (char)('a' + rand() % ('a' - 'z'));
		password += to_string(randomNumbers)
			+ to_string(randomCharacters);
	}
	return password;
}

void PasswordGeneretor::ResetPassword(User** users, int usersCount)
{
	for (int i = 0; i < usersCount; i++)
	{
		users[i]->SetPassword(GeneratePassword());
	}
}
