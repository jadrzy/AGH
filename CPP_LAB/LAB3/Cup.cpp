#include <iostream>
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
	double total_mass = 0,
		   total_volume = 0;
	for (int i = 0; i < count; i++)
	{
		double mass = substances[i].get_ro() * volumes[i] * 1000;
		total_mass += mass;
		total_volume += volumes[i];
		cout << i << ". " << substances[i].get_name()
			<< "; volume: " << volumes[i] * 1e6 << " ml"
			<< "; mass: " << mass << " g" << endl;
	}
	cout << "Volume coe: ";
	for (int i = 0; i < count; i++)
	{
		cout << volumes[i] / total_volume * 100 << " - ";
	}
	cout << endl << "Mass coe: ";
	for (int i = 0; i < count; i++)
	{
		cout << volumes[i] * substances[i].get_ro() * 1000 
			/ total_mass * 100 << " - ";
	}
	cout << endl;
}
