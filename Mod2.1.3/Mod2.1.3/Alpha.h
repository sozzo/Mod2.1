#pragma once
#include "Base.h"
class Alpha :
	public Base
{
public:
	~Alpha() {
		N = N - 2 * n + 11;
	}
};

