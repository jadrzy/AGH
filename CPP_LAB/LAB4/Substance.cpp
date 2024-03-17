#include <iostream>
#include "Substance.h"
using namespace std;

Substance::Substance(string name, double ro)
{
	this->name = name;
	this->ro = ro;
}

string Substance::get_name()
{
	return name;
}

double Substance::get_ro()
{
	return ro;
}

vector<Substance> substancje = 
{
	Substance("woda", 222),
	Substance("ziemia", 982),
	Substance("hemoglobina", 23)
};
