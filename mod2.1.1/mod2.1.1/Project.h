#pragma once
#include <vector>
#include "Tech.h"
class Project
{
private:
	int complexity;
	std::vector<Tech*> requiredTechs;
	std::vector<Project*> dependencies;
public:
	int getComplexity() {
		return this->complexity;
	}
	void setComplexity(int complexity) {
		this->complexity = complexity;
	}
	std::vector<Tech*> getTechs() {
		return requiredTechs;
	}
	void addRequiredTech(Tech* tech) {
		this->requiredTechs.push_back(tech);
	}
	std::vector<Project*>
};

