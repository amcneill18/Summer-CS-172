#include <iostream>
#include <string>
#ifndef MOVIE_H_
#define MOVIE_H_
using namespace std;

class Movie
{
private:
	static string Title;
	static string Genre;
	static int ShowTime;
public:
	Movie() 
	{
		Title = "Brides Maids";
		Genre = "Comedy";
		ShowTime = 5;
	}

	Movie(string title, string genre, int showtime) 
	{
		Title = title;
		Genre = genre;
		ShowTime = showtime;
	}

	static string GetTitle();
	static string GetGenre();
	static int GetShowTime();
};

#endif