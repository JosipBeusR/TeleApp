#pragma once
#include <iostream>
#include "Address.h"
class ContactInfo
{
public:
	ContactInfo();
	~ContactInfo();

private:
	std::string _telephone;
	std::string _mobile;
	std::string _email;
	Address* _address;
};

