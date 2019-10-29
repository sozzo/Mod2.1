#pragma once
#include <string>
class Tech
{
private:
	std::string name;
	double efficiencyMultiplier;
public:
	std::string getName() {
		return this->name;
	}
	void setName(std::string name) {
		this->name = name;
	}
	void setEfficiencyMultiplier(double multi) {
		this->efficiencyMultiplier = multi;
	}

};

