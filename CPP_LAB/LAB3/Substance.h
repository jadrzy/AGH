#ifndef Included_Substance_h
#define Included_Substance_h

#include <string>
class Substance
{
	std::string	name;
	double		ro;

	public:
		Substance(std::string name, double ro);

		std::string		get_name();
		double			get_ro();
};

#endif
