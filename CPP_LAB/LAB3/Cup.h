#include <iostream>
#include <vector>
#include "Substance.h"

class Cup
{
	std::vector<Substance>	substances;
	std::vector<double>		volumes;

public:
	void add(Substance substance, double volume_in_ml);
	void show();
};
