#include<iostream>
using namespace std;

int main()
{
	int a;
	float n1, n2;
	
	cout << "Enter operater :\n1:Addition\n2:Subtraction\n3:Multipication\n4:Divicion\n";
	cin>>a;
	
	cout<<"Enter two operater:";
	cin>>n1>>n2;
	
	switch (a)
	{
		case 1:
			cout << n1 << "+" << n2 << "=" << n1 + n2;
			break;
	
		case 2:
			cout << n1 << "-" << n2 << "=" << n1 - n2;
			break;
			
		case 3:
			cout << n1 << "*" << n2 << "=" << n1 * n2;
			break;
			
		case 4:
			cout << n1 << "/" << n2 << "=" << n1 / n2;
			break;
			
		default:
			cout <<"invelid choice";
			break;
	}
	return 0;
}
