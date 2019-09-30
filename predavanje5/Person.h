#pragma once
#include <iostream>
#include "Date.h"
#include "ContactInfo.h"
#include "Contract.h"

class Person
{
public:
	Person();
	~Person();

private:
	std::string _name;
	std::string _lastName;
	char _gender;
	std::string _ssn;
	Date* _dob;
	ContactInfo* _info;
	Contract* _contract;
};

