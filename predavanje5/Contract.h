#pragma once
#include <iostream>
#include "Date.h"
#include "Packet.h"


class Contract
{
public:
	Contract();
	~Contract();

	/*friend std::ostream& operator <<(std::ostream& output, const Contract &value);
	friend std::istream& operator >>(std::istream& input, Contract &value);*/
	

private:
	std::string _name;
	int lenght;
	Date* _startDate;
	Date* _endDate;

	Packet* _packet;
};



