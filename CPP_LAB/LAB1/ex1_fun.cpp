#include <iostream>
using namespace std;
#include "ex1.h"
#define SIZE 4

void print_binary(int num)
{
	short int bin;
	cout << "Result - simple:\n";
	while (num > 0)
	{
		bin = num % 2;
		cout << bin;

		num = (num - bin) / 2;
	}

	cout << "\n";
}





void print_binary_table(int num)
{
	short int bint[SIZE];
	short int bin;
	char iteration = 1;
	cout << "Result:\n";
	
	while (num > 0)
	{
		bin = num % 2;
		bint[SIZE - iteration] = bin;
		num = (num - bin) / 2;
		iteration++;
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << bint[i];
	}
	
	cout << "\n";
}
