#include <iostream>
#include <vector>
#include "Substance.h"
#include "Cup.h"

using namespace std;

vector<Substance> substancje = 
{
	Substance("woda", 3123.2),
	Substance("ziemia", 44441.2),
	Substance("hemoglobina", 1.3)
};

int main()
{
	Cup kubek1;
	kubek1.add(substancje[0], 100);
	kubek1.add(substancje[1], 50);
	kubek1.show();
	return 0;
}
