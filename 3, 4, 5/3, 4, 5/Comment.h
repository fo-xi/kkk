#pragma once
#include <iostream>

using namespace std;

class Comment
{
	private:
		string _author;
		string _text;
	public:
		string& GetAuthor();
		string& GetText();

		void SetAuthor(string&);
		void SetText(string&);

		Comment(string&, string&);
};
