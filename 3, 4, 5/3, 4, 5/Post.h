#pragma once
#include "Comment.h"

class Post
{
	private:
		string _title;
		string _text;
		Comment** _comments;
		int _commentsCount;
	public:
		string& GetTitle();
		string& GetText();
		Comment** GetComments();
		int GetCommentsCount();

		void SetTitle(string&);
		void SetText(string&);
		void SetComments(Comment**);
		void SetCommentsCount(int);

		Post(string&, string&, Comment**, int);
};