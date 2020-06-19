#include "Post.h"
#include <exception>

void Post::SetTitle(string& title)
{
	this->_title = title;
}

void Post::SetText(string& text)
{
	this->_text = text;
}

void Post::SetCommentsCount(int commentCount)
{
	if (commentCount < 0)
	{
		throw exception("Value cannot be negative");
	}
	this->_commentsCount = commentCount;
}

void Post::SetComments(Comment** comments)
{
	this->_comments = comments;
}

string& Post::GetTitle()
{
	return this->_title;
}

string& Post::GetText()
{
	return this->_text;
}

int Post::GetCommentsCount()
{
	return this->_commentsCount;
}

Comment** Post::GetComments()
{
	return this->_comments;
}

Post::Post(string& title, string& text,
	Comment** comments, int commentCount)
{
	this->SetTitle(title);
	this->SetText(text);
	this->SetCommentsCount(commentCount);
	this->SetComments(comments);
}
