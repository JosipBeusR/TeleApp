#include "Date.h"
#include <string>


Date::Date()
{
}

Date::~Date()
{
}

bool Date::_checkDate()
{
	return _checkYear() && _checkMonth() && _checkDay();
}

bool Date::_checkDay()
{
	if (_day > 31)
	{
		return false;
	}
	else if (_month == 2 && _day <= 28 ||
		_month == 2 && _day <= 29 && _year % 4 == 0)
	{
		return true;
	}
	else if ((_month == 4 || _month == 6 || _month == 9 || _month == 11) &&
		_day > 30)
	{
		return false;
	}
	return true;
}

bool Date::_checkMonth()
{
	return _month > 0 && _month < 13;
}

bool Date::_checkYear()
{
	return true;
}

bool Date::_processInput(std::string name, std::istream &input, unsigned int &value)
{
	std::cout << "Enter " << name <<": ";
	if (!(input >> value))
	{
		std::cout << std::endl;
		input.clear();
		input.ignore(10000, '\n');
		return false;
	}
	else
	{
		std::cout << std::endl;
		input.clear();
		input.ignore(10000, '\n');
		return true;
	}

}

bool Date::_checkInput(std::string name, unsigned int &value)
{
	return false;
}


std::ostream & operator <<(std::ostream &output, const Date &value)
{
	output << value._day << "/" << value._month << "/" << value._year << ".";
	return output;
}


std::istream & operator >>(std::istream &input, Date &value)
{
	
	do 
	{
		bool noerror = false;
		while (!noerror)
		{
			noerror = value._processInput("day", input, value._day);
			noerror = value._processInput("month", input, value._month);
			noerror = value._processInput("year", input, value._year);
		}
	} while (!value._checkDate());
	return input;
}
