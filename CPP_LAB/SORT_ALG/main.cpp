#include <iostream>
#include "Table.h"

using namespace std;

Table tab1(15);

int main(void)
{
	tab1.show();
	cout << endl;	
	tab1.insertSort();
	tab1.show();
	return 0;
}
