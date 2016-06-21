//I affirm that all code given below was written solely by me, Andrew McNeill, and that any help I received adhered to the rules stated for this exam.
//Andrew McNeill
//CS172
//Exam 2
#include "Runner.h"
#include <iostream>
Runner::Runner() {}
//standard class operators
Runner::Runner(string firstname, string lastname, int pace) 
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->pace = pace;
}

string Runner::get_firstname() const
{
	return firstname;
}

string Runner::get_lastname()const 
{
	return lastname;
}

int Runner::get_pace()const 
{
	return pace;
}

ostream& operator<< (ostream& out, Runner& run) 
{
	out << run.get_firstname() << " " << run.get_lastname() << " " << run.get_pace() << endl;
	return out;
}