#pragma once
#include "Post.h"

class Blog
{
	private:
		string _user;
		Post** _post;
		int _postCount;
	public:
		string& GetUser();
		Post** GetPosts();
		int GetPostsCount();

		void SetUser(string&);
		void SetPosts(Post**);
		void SetPostsCount(int);

		Blog(string&, Post**, int);
};