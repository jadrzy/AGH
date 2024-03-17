#include <cstdlib>

class Table
{
private:
	int arrSize;
	int * arrPtr;
public:
	Table(int arrSize);
	~Table();

	void show();
	void insertSort();
};
