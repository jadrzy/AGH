#include <iostream>

class Substance
{
	std::string	name;
	double		ro;

	public:
		Substance(std::string name, double ro);

		std::string		get_name();
		double			get_ro();
};
