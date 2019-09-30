#include "Person.h"

Person::Person()
{
}

Person::~Person()
{
	if (_dob != nullptr)
	{
		delete _dob;
		_dob = nullptr;
	}
	if (_info != nullptr)
	{
		delete _info;
		_info = nullptr;
	}
	if (_contract != nullptr)
	{
		delete _contract;
		_contract = nullptr;
	}
}
