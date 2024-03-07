#include <iostream>
#include "ex1.h"
#include <vector>
using std::vector;
using namespace std;

int main()
{
	vector <int> binary;
	int decimal = 10;

	dec2bin(decimal, binary);
	disp(binary);

	moveL(1,binary);
	disp(binary);
	cout << bin2dec(binary) << "\n";

	moveR(20,binary);
	disp(binary);
	bin2dec(binary);
	cout << bin2dec(binary) << "\n";
	

	return 0;
}
