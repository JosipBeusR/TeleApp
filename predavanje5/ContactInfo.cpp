#include "ContactInfo.h"


ContactInfo::ContactInfo()
{
}

ContactInfo::~ContactInfo()
{
	if (_address != nullptr)
	{
		delete _address;
		_address = nullptr;
	}
}