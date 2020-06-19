#include "Comment.h"

void Comment::SetAuthor(string& author)
{
	this->_author = author;
}

void Comment::SetText(string& text)
{
	this->_text = text;
}

string& Comment::GetAuthor()
{
	return this->_author;
}

string& Comment::GetText()
{
	return this->_text;
}

Comment::Comment(string& author, string& text)
{
	this->SetAuthor(author);
	this->SetText(text);
}