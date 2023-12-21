#include<iostream>
using namespace std;

class A {
public:
    int add(int n1, int n2) 
    {
       return n1+n2;
    }

    int subtract(int n1, int n2) 
    {
        return n1-n2;
    }

    int multiply(int n1, int n2) 
    {
        return n1*n2;
    }

    int divide(int n1, int n2) 
    {
        return n1/n2;
    }
};

int main()
{
  
  int num1, num2;
  
  A ar;

  cout << "Enter two Numbers : ";
  cin >> num1 >> num2;
  
  cout << "Addition = "<< ar.add(num1, num2) << endl;

  cout << "Subtraction = "<< ar.subtract(num1, num2) << endl;
  
  cout << "Multiplication = "<< ar.multiply(num1, num2) << endl;

  cout << "Division = "<< ar.divide(num1, num2) << endl;

  return 0;
}
