#pragma once
#include <iostream>

using namespace std;

class User
{
	private:
		string _login;
		string _password;
	public:
		const string& GetLogin();
		string& GerPassword();

		void SetLogin(const string&);
		void SetPassword(string&);

		User(const string&, string&);
};