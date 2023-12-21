#include<iostream>
using namespace std;


int addFun(int, int);
int subFun(int, int);
int mulFun(int, int);
int divFun(int, int);
int main()
{
    int num1, num2;
    int op;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the Operator:\n1). Addition\n2).Subtraction\n3).Multiplication\n4).Division\n ";
    cin>>op;
    if(op==1)
        cout<<endl<<"Addition Result = "<<addFun(num1, num2);
    else if(op==2)
        cout<<endl<<"Subtraction Result = "<<subFun(num1, num2);
    else if(op==3)
        cout<<endl<<"Multiplication Result = "<<mulFun(num1, num2);
    else if(op==4)
        cout<<endl<<"Division Result = "<<divFun(num1, num2);
    else
        cout<<endl<<"Wrong Operator!";
    cout<<endl;
    return 0;
}
int addFun(int a, int b)
{
    return a+b;
}
int subFun(int a, int b)
{
    return a-b;
}
int mulFun(int a, int b)
{
    return a*b;
}
int divFun(int a, int b)
{
    return a/b;
}
