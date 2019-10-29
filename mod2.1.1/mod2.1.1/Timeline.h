#pragma once
#include "developer.h"
class Timeline
{
public:
	std::vector<Project*> toDoProjects;
	std::vector<Developer*> employees;
	std::vector<Tech> usableTechs;
	std::vector<Project*> currentProjects;
};