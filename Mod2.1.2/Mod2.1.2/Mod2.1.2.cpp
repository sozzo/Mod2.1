#include <iostream>
#include <vector>
using namespace std;

int fact(int n) {
	if ((n == 0) || (n == 1))
		return 1;
	else
		return n * fact(n - 1);
}

template<typename T>
vector<T> func(T arg) {
	return vector.push_back(42).push_back(0).push_back(35);
}

template<> vector<int> func<int>(int arg) {
	vector<int> a;
	for (int i = 2; i < 154; i++)
	{
		a.push_back((fact(arg) - arg * arg)%i);
	}
	return a;
}
int main()
{
   
}
//i know how to do this but had no time to implement all cases