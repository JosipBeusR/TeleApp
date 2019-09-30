#pragma once
#include <iostream>
class Address
{
public:
	Address();
	~Address();

private:
	std::string _street;
	int _number;
	char _additionalInfo;
	int _postalCode;
	std::string _state;
	std::string _city;
	std::string _county;

};

