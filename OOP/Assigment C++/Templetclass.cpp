#include <iostream>
using namespace std;

template<class t>

void swapme(t &x, t &y)
{
	t temp = x;
	x = y;
	y = temp;
}
int main()
{
	double a, b;
	cout<<"Enter your values: ";
	cin>>a>>b;
	swapme(a, b);
	cout<<"After swap = "<<a<< " " <<b;
	return 0;
}
