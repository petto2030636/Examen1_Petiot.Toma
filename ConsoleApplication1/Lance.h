#pragma once
#include "Arme.h"

class Lance : public Arme
{
public:
	Lance();
	~Lance();

	virtual std::string to_string();
};

