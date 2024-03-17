#include <iostream>
#include <cstdlib>
#include "Table.h"

using namespace std;

Table::Table(int arrSize)
{	
	this->arrPtr = (int*) malloc(arrSize * sizeof(int));
	this->arrSize = arrSize;
	for (int i = 0; i < arrSize; i++)
		*(arrPtr + i) = rand() % 10;
}

Table::~Table()
{
	free(this->arrPtr);
}

void Table::show()
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << i + 1 << ". " << arrPtr[i] << endl;
	}
}

void Table::insertSort()
{
	int index,
		value,
		temp;
	for (int i = 0; i < arrSize; i++)
	{	
		value = arrPtr[i];
		index = i;
		for (int j = i; j > 0; j--)
		{
			if (value >= arrPtr[index - 1])
				break;
			index--;
		
		}
		cout << index << endl;
		for (int j = i; j > index; j--)
		{
			temp = arrPtr[j - 1];
			arrPtr[j - 1] = arrPtr[j];
			arrPtr[j] = temp;
		}
	}
}

