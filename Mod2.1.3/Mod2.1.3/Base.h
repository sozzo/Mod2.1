#pragma once
extern int S;
class Base
{
public:
	static int N;
	int n;
	Base() {
		N++;
		n = N;
	}
	~Base() {
		S = 2 * S - n + 11;
	}
};

