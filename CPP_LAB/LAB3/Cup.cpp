#include "Cup.h"
using namespace std;

void Cup::add(Substance substance, double volume_in_ml)
{
	substances.push_back(substance);
	volumes.push_back(volume_in_ml/ 1e6);
}

void Cup::show()
{
	int count = substances.size();
	for (int i = 0; i < count; i++)
	{
		double mass = substances[i].get_ro() * volumes[i] * 1000;
		cout << substances[i].get_name()
			<< "; volume: " << volumes[i] * 1e6 << " ml"
			<< "; mass: " << mass << " g" << endl;
	}
}
