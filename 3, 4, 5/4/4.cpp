#include <iostream>
#include "User.h"
#include "PasswordGeneretor.h"

int main()
{
	int userCount = 3;
	string password1 = "password1";
	string password2 = "password2";
	string password3 = "password3";
	User** user = new User * [userCount]
	{
		new User("login1", password1),
		new User("login2", password2),
		new User("login3", password3),
	};
	for (int i = 0; i < userCount; i++)
	{
		cout << "Login: " << user[i]->GetLogin() << "\t"
			<< "Password: " << user[i]->GerPassword() << endl;
	}
	PasswordGeneretor::ResetPassword(user, userCount);
}
