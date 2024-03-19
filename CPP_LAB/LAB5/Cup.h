#ifndef Included_Cup_h
#define Included_Cup_h

#include <vector>
#include "Substance.h"

class Cup
{
private:
	std::vector<Substance>	substances;
	std::vector<double>		volumes;
	int get_substance_id(std::string name);

public:
	void add(Substance substance, double volume_in_ml);
	void add(std::string name, double volume_in_ml);
	void show();
};

#endif
