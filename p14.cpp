#include<iostream>
using namespace std;

int f(int x)
{
int p=(4*(x*x*x))+(2*x)+9;
return p;
}

int main()
{
cout<<"THE POLYNOMIAL IS 4x^3+2x+9 "<<endl;
cout<<"ENTER THE VALUE OF x TO CALCULATE THE FUNCTION"<<endl;
int x;
cin>>x;
int r;
r=f(x);
cout<<"THE VALUE OF FUNCTION IS "<<r;
return 0;
}
