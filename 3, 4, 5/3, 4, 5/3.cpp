#include <iostream>
#include "Blog.h"

int main()
{
	int postCount = 5;
	Post** posts = new Post * [postCount];
	for(int i = 0; i < postCount; i++)
	{
		int commentCount = 3;
		Comment** comments = new Comment * [commentCount];
		for (int k = 0; k < commentCount; k++)
		{
			string commentAuthor;
			cout << "Comment author\t";
			cin >> commentAuthor;
			cout << endl;
			string comment;
			cout << "Comment\t";
			cin >> comment;
			cout << endl;

			comments[i] = new Comment(commentAuthor, comment);
		}

		string titlePost;
		cout << "The title of the post\t";
		cin >> titlePost;
		cout << endl;
		string textPost;
		cout << "Text\t";
		cin >> textPost;

		posts[i] = new Post(titlePost, textPost, comments, commentCount);
	}
	string user;
	cout << "User\t";
	cin >> user;
	Blog* blog = new Blog(user, posts, postCount);
}


