#include "Blog.h"

void Blog::SetUser(string& user)
{
	this->_user = user;
}

void Blog::SetPostsCount(int postCount)
{
	if (postCount < 0)
	{
		throw exception("Value cannot be negative");
	}
	this->_postCount = postCount;
}

void Blog::SetPosts(Post** posts)
{
	this->_post = posts;
}

string& Blog::GetUser()
{
	return this->_user;
}

int Blog::GetPostsCount()
{
	return this->_postCount;
}

Post** Blog::GetPosts()
{
	return this->_post;
}

Blog::Blog(string& user, Post** posts, int countPost)
{
	this->SetUser(user);
	this->SetPosts(posts);
	this->SetPostsCount(countPost);
}