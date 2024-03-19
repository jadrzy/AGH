#include <iostream>
#include "Cup.h"

using namespace std;

void Cup::add(Substance substance, double volume_in_ml)
{
	int flag = 1;
	for (int i = 0; i < substances.size(); i++)
	{
		if (substances[i].get_name() == substance.get_name())
		{
			volumes[i] += (volume_in_ml / 1e6);
			flag = 0;
			cout << "Dodano więcej substancji " << substance.get_name() << endl;
			break;
		}
	}
	if (flag == 1)
	{
		substances.push_back(substance);
		volumes.push_back(volume_in_ml/ 1e6);
		cout << "Dodano nową substancję o nazwie " << substance.get_name() << endl;
	}

}

int Cup::get_substance_id(string name)
{
	string sub_name;
	int id = -1;
	for (int i = 0; i < substancje.size(); i++)
	{
		sub_name = substancje[i].get_name();
		if (sub_name == name)
		{
			id = i;
			break;
		}
	}
	if (id == -1)
	{
		cout << "Nie znaleziono płynu o nazwie: \"" << name << "\"" << endl;	
	}
	return id;
}

void Cup::add(std::string name, double volume_in_ml)
{
	int id = get_substance_id(name);
	if (id != -1)
	{
		add(substancje[id], volume_in_ml);
	}
}

void Cup::show()
{
	int count = substances.size();
	double total_mass = 0,
		   total_volume = 0;
	cout << endl;
	cout << "--------------------------------------------------------" << endl;
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
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
}
