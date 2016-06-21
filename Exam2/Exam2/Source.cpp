//I affirm that all code given below was written solely by me, Andrew McNeill, and that any help I received adhered to the rules stated for this exam.
//Andrew McNeill
//CS172
//Exam 2

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Runner.h"
using namespace std;

void swapRunners(Runner &a, Runner &b);

int main()
{
	//Finds the registrants list from the specified location
	string file_location = "C:\\Users\\Andrew\\Desktop\\College\\";
	fstream file(file_location + "registrants.txt", ios::in);

	if (!file) 
	{
		cout << "ERROR. you typed in the file wrong\n";
		return 0;
	}

	//Creates a vector for the registrants
	vector<Runner> registrants;
	string currentFirst, currentLast;
	int currentPace;

	//Creates a "currentRunner" from the three variables in the registrants list which is then added to the vector
	while (!file.eof())
	{
		file >> currentFirst;
		file >> currentLast;
		file >> currentPace;
		Runner currentRunner(currentFirst, currentLast, currentPace);
		registrants.push_back(currentRunner);
	}
	file.clear();
	file.close();

	//Series of for loops that compares the pace and then calls on the swap function
	for (int i = 0; i < registrants.size(); i++) 
	{
		for (int j = i + 1; j < registrants.size(); j++) 
		{
			if (registrants[j].get_pace() < registrants[i].get_pace())
				swapRunners(registrants[i], registrants[j]);
		}
	}

	//Creates text files for the different colors
	ofstream white(file_location + "white.txt");
	ofstream yellow(file_location + "yellow.txt");
	ofstream green(file_location + "green.txt");
	ofstream orange(file_location + "orange.txt");
	ofstream blue(file_location + "blue.txt");
	ofstream lilac(file_location + "lilac.txt");
	ofstream red(file_location + "red.txt");

	//For loop controls the sorting of the runners
	//If the pace exceeds the max of one group, it moves on until it fits into its propper group
	for (int r = 0; r < registrants.size(); r++) 
	{
		if (registrants[r].get_pace() <= 360) 
		{
			white << registrants[r];
		}
		else if (registrants[r].get_pace() <= 420)
		{
			yellow << registrants[r];
		}
		else if (registrants[r].get_pace() <= 480)
		{
			green << registrants[r];
		}
		else if (registrants[r].get_pace() <= 540) 
		{
			orange << registrants[r];
		}
		else if (registrants[r].get_pace() <= 600)
		{
			blue << registrants[r];
		}
		else if (registrants[r].get_pace() <= 720) 
		{
			lilac << registrants[r];
		}
		else if (registrants[r].get_pace() <= 1200)
			red << registrants[r];
	}
	//Always have to clear and close
	white.clear();
	white.close();

	yellow.clear();
	yellow.close();

	green.clear();
	green.close();

	orange.clear();
	orange.close();

	blue.clear();
	blue.close();

	lilac.clear();
	lilac.close();

	red.clear();
	red.close();
}
//Classic swap function
void swapRunners(Runner &a, Runner &b) 
{
	Runner temp = a;
	a = b;
	b = temp;
}