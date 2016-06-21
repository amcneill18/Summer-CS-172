//Andrew McNeill
//CS172
//EX06

//EX06_01

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream file("C:\\Users\\Andrew\\Desktop\\College\\7Summer Term 2016\\Summer-CS-172\\EX06Exercise13_1.txt", ios::out | ios::in);
	srand(time(NULL));
	if (!file) {
		file.open("C:\\Users\\Andrew\\Desktop\\College\\7Summer Term 2016\\Summer-CS-172\\EX06Exercise13_1.txt");
	}

	for (int i = 0; i < 100; i++) {
		int r = rand() % 100 + 1;
		file << r << " ";
	}
	file.close();
}

//EXo6_02

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int characters = 0;
	char space = ' ';
	string filename;
	cout << "Enter filename: ";
	cin >> filename;
	fstream file(filename.c_str(), ios::in | ios::out);

	if (!file) {
		cout << "ERROR" << endl;
	}

	else {
		while (file >> space)
			characters++;
		cout << "Number if characters: " << characters << endl;
	}
	file.close();
}

//EXo6_03

//couldnt get to work

//EX06_04

#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;


int main() {
	Circle C1(11);
	Circle C2(11);

	cout << (C1 != C2 ? "True" : "False") << endl;

	Circle C3(15);
	Circle C4(25);

	cout << (C4 > C3 ? "True" : "False") << endl;
}
//EX06_05

//couldnt get it