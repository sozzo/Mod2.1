#pragma once
#include "Base.h"
class Beta :
	public Base
{
public:
	~Beta() {
		N = N - n;
	}
};
