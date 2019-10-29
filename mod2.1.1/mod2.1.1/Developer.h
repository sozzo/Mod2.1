#pragma once
#include <vector>
#include <string>
#include "Tech.h"
#include "Project.h"
class Developer
{
private:
	int efficiency;
	std::vector<Tech*> knownTechs;
	Project* busyAt;
public:
	int getEfficiency() {
		return this->efficiency;
	}
	void setEfficiency(int efficiency) {
		this->efficiency = efficiency;
	}
	Project* getBusyAt() {
		return this->busyAt;
	}
	void setBusyAt(Project* proj) {
		this->busyAt = proj;
	}
	std::vector<Tech*> getKnownTechs() {
		return knownTechs;
	}
	void addKnownTech(Tech* toAdd) {
		knownTechs.push_back(toAdd);
	}

};

