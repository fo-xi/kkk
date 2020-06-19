#pragma once
#include <iostream>
#include "User.h"

using namespace std;

static class PasswordGeneretor
{
	private:
		static string& GeneratePassword();
	public:
		static void ResetPassword(User**, int);
};