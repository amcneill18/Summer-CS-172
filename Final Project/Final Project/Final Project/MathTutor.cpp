#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "MathTutor.h"
using namespace std;

//Opening title
void Title()
{
	cout << "\n \t Welome to my math tutor final project!\n"
		<< "\t This program is designed to help with many aspects of math\n"
		<< "\t and then will create a document to record your results\n" << endl;
}

//User menu
void Menu()
{
	cout
		<< "1)  Addition" << endl
		<< "2)  Substraction" << endl
		<< "3)  Multiplication" << endl
		<< "4)  Integer division" << endl
		<< "5)  Real division " << endl
		<< "6)  Modulus (%)" << endl
		<< "7)  Addition and Substraction" << endl
		<< "8)  Addition, Substraction and Multiplication" << endl
		<< "9)  Addition, Substraction, Multiplication and Integer division" << endl
		<< "10) All Subjects" << endl
		<< "11) End the program" << endl
		<< endl;
}

//Function to clear the screen
void clearScreen()
{
	system("cls");
}

//function takes in the user input number of problems 
double multipleSubjects(int numOfProblems, int numOfSubjects, int subject)
{
	int i, correct = 0, partiallyCorrect = 0;
	double totalScore = 0, score = 0;
	unsigned seed = (time(NULL));

	// Seeding using srand();
	srand(seed);

	for (i = 1; i <= numOfProblems; i++)
	{
		cout << endl << "Question " << i << " of " << numOfProblems << ":" << endl;
		if (numOfSubjects != 1)
			subject = randIntGenerator(1, numOfSubjects);
		score = singleSubject(subject);
		if (score == 1)
			correct++;
		else if (score == 0.5)
			partiallyCorrect++;
		totalScore += score;
		score = 0;


		system("pause");
		clearScreen();
	}

	ofstream file("C:\\Users\\Andrew\\Desktop\\College\\7Summer Term 2016\\Summer-CS-172\\StudySession.txt");

	file << "You got " << correct << " correct answer" << (correct > 1 ? "s" : "")
		<< " and " << partiallyCorrect << " partially correct answer"
		<< (partiallyCorrect > 1 ? "s" : "") << "out of " << numOfProblems << " question"
		<< (numOfProblems > 1 ? "s" : "") << " asked.";
	file.close();

	return totalScore;
}

//changes the cases for each subect into there respective symbol to be used later
char subjectChar(int operation)
{
	switch (operation)
	{
	case ADD: return '+';
	case SUB: return '-';
	case MULT: return 'x';
	case INT_DIV:
	case DIV: return '/';
	default: return '%';
	}
}

//Displays the problem referring back to the case the user selected previously
void subjectType(int n1, int n2, int operation)
{
	//in the case that the user selects division questions, a hint is displayed
	if (operation == DIV)
		cout
		<< endl
		<< "Hint:" << endl
		<< "Two decimal places" << endl << endl
		<< "\nREAL division:" << endl;

	cout
		//each problem has the same format but the subjects symbol changes, so i made the function earlier to be the variable that changes
		<< "\n   " << (n1 < 10 ? " " : "") << n1 << endl
		<< " " << subjectChar(operation)
		<< " " << (n2 < 10 ? " " : "") << n2 << endl
		<< " ------\n"
		<< "  ";
}

//random number generator used for numbers for the problems and for mixing problem subjects
int randIntGenerator(int Min, int Max)
{
	return (rand() % (Max - Min + 1)) + Min;
}


//// Operation between two randomly generated numbers and returns the score /////////
//function that does the most work in the program
double singleSubject(int subject)
{
	int attempts = 0, n1, n2;
	double userAnswer, correctAnswer, score = 0;

	//calls on the random number generator to get values for n1 and n2
	srand(time(NULL));
	n1 = randIntGenerator(1, 99);
	n2 = randIntGenerator(1, 99);
	//gets the subject type for the problem
	subjectType(n1, n2, subject);
	//asks for the users answer and logs it
	cin >> userAnswer;
	//after every attempt, this variable is increminted to help with feed back
	attempts++;
	//depending on the subject, the answer is checked using these cases
	switch (subject)
	{
	case ADD: correctAnswer = n1 + n2;	break;
	case SUB: correctAnswer = n1 - n2;	break;
	case MULT: correctAnswer = n1 * n2;	break;
	case INT_DIV: correctAnswer = n1 / n2;	break;
	case MOD: correctAnswer = n1 % n2;	break;
	case DIV: correctAnswer = n1 / double(n2);
		correctAnswer *= 1000;
		correctAnswer = int(correctAnswer) / 10;
		correctAnswer /= 100;
	}

	//in the previous code, if the correct answer is not the same as the users answer than this dialog displays
	if (userAnswer != correctAnswer)
	{
		cout << "\nIncorrect, try again. \n";
		subjectType(n1, n2, subject);
		cin >> userAnswer;
		attempts++;
	}

	if (userAnswer == correctAnswer)
	{
		cout << "\nCorrect!\n";
		score = attempts == 1 ? 1 : 0.5;
	}
	else
		cout << "\nIncorrect. The answer is " << correctAnswer << "\n\n";
	return score;
}