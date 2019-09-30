#pragma once
#include <iostream>
class Date
{
public:
	Date();
	~Date();

	friend std::ostream & operator <<(std::ostream &output, const Date& value);
	friend std::istream & operator >>(std::istream& input, Date& value);


private:
	unsigned int _day;
	unsigned int _month;
	unsigned int _year;
	bool _checkDate();
	bool _checkDay();
	bool _checkMonth();
	bool _checkYear();
	bool _checkInput(std::string name, unsigned int &value); //zamijeniti za ona 3 whilea u overloadu input streama

	bool _processInput(std::string name, std::istream &input, unsigned int &value);
	 

};
