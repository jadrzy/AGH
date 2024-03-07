#include <iostream>
#include <cmath>
#include "ex1.h"
using namespace std;

void dec2bin(int num, std::vector<int> & bin)
{
	while (num > 0)
	{
		bin.insert(bin.begin(), num % 2);
		num = (num - num % 2) / 2;
	}
}

void moveL(int m, std::vector<int> & bin)
{
	for (int i = 0; i < m; i++)
		bin.insert(bin.end(), 0);
}

void moveR(int m, std::vector<int> & bin)
{
	for (int i = 0; i < m; i++)
		bin.insert(bin.begin(), 0);
}

void disp(std::vector<int> & bin)
{
	for (unsigned char i = 0; i < bin.size(); i++)
		cout << bin[i];
	cout << "\n";
}

int bin2dec(std::vector<int> & bin)
{
	int number = 0;
	for (unsigned char	i = bin.size(); i > 0; i--)
	{
		number += bin[i-1]*pow(2, bin.size() - i);  
	}
	return number;
}
