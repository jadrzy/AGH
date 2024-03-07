#include <iostream>
using namespace std;
#include <vector>
#include "ex1.h"
#define SIZE 4

// FUNCTION DECIMAL TO BINARY
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
// FUNCTION DECIMAL TO BINARY USING TABLE
void print_binary_table(int num)
{
	short int bint[SIZE];
	short int bin;
	char iteration = 1;
	cout << "Result - table:\n";
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
// FUNCTION DECIMAL TO BINARY USING VECTOR
void print_binary_vector(int num)
{
	vector < int > bin;

	cout << "Result - vector:\n";

	while (num > 0)
	{
		bin.insert(bin.begin(), num % 2);
		num = (num - num % 2) / 2;
	}
	for (unsigned int i = 0 ; i < bin.size(); i++)
		cout << bin[i];

	cout << "\n";
}
