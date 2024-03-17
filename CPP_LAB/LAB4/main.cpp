#include <iostream>
#include <vector>
#include "Substance.h"
#include "Cup.h"

using namespace std;

int main()
{
	Cup kubek1;
	kubek1.add(substancje[0], 100);
	kubek1.add(substancje[1], 50);
	kubek1.add("woda", 10);
	kubek1.show();
	return 0;
}
