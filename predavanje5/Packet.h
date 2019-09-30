#pragma once
#include <iostream>
class Packet
{
public:
	Packet();
	~Packet();

private:
	bool _telephone;
	bool _internet;
	bool _television;
	bool _mobile;
	float _price;

	std::string _specialOfferName;
	float _discount;
};

