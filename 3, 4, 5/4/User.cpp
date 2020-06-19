#include "User.h"

void User::SetLogin(const string& login)
{
	this->_login = login;
}

void User::SetPassword(string& password)
{
	this->_password = password;
}

const string& User::GetLogin()
{
	return this->_login;
}

string& User::GerPassword()
{
	return this->_password;
}

User::User(const string& login, string& password)
{
	this->SetLogin(login);
	this->SetPassword(password);
}