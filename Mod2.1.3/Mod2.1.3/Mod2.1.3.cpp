#include <iostream>
#include "Base.h"
#include "Alpha.h"
#include "Beta.h"
#include "Gamma.h"
int S;
int main()
{

	Base* a = new Base();
	Base* b = new Base();
	Base* c = new Base();
	Gamma* d = new Gamma();
	Alpha* e = new Alpha(); Alpha* f = new Alpha(); Alpha* g = new Alpha(); Alpha* h = new Alpha();
	delete a; delete b; delete c; delete e; delete g; delete d;
	std::cout << S << std::endl;
}