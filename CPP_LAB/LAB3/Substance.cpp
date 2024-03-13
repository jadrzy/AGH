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
