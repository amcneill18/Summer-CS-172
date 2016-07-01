//Andrew McNeill
//CS 172
//Final Project Math Tutor Program

#include <iostream>
#include "MathTutor.h"
using namespace std;

void main()
{
	int pick, numOfProblems;
	double  totalScore;

	while (true)
	{
		//always displays the title and menu upon opening
		Title();
		Menu();
		//user picks a subject
		cout << "Please pick a number that coresponds to your desired subject(s): ";
		cin >> pick;
		//if the user picks 11 then the program closes
		if (pick != 11)
		{
			cout << "How many problems? ";
			cin >> numOfProblems;
		}
		switch (pick)
		{
			//the users choice corresponds to the type of problem they get
			//the score is based on their performance in solving the problems they select
		case 1: totalScore = multipleSubjects(numOfProblems, 1, ADD);		break;
		case 2: totalScore = multipleSubjects(numOfProblems, 1, SUB);		break;
		case 3: totalScore = multipleSubjects(numOfProblems, 1, MULT);		break;
		case 4: totalScore = multipleSubjects(numOfProblems, 1, INT_DIV);	break;
		case 5: totalScore = multipleSubjects(numOfProblems, 1, DIV);		break;
		case 6: totalScore = multipleSubjects(numOfProblems, 1, MOD);		break;
		case 7: totalScore = multipleSubjects(numOfProblems, 2);			break;
		case 8: totalScore = multipleSubjects(numOfProblems, 3);			break;
		case 9: totalScore = multipleSubjects(numOfProblems, 4);			break;
		case 10:totalScore = multipleSubjects(numOfProblems, 6);			break;
		case 11:cout << "\n Good bye..." << endl << endl;
			exit(0);
		}
		cout << "You got" << (totalScore / numOfProblems) * 100 << "% of the attempts correct \n\n";

		system("pause");
		clearScreen();
	}
}