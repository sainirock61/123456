
#include<iostream>
using namespace std;
void conjunc(int x,int y)
{
if(x*y==0)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
}
void disjunc(int x,int y)
{
if(x+y==0)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
}
void exnor(int x,int y)
{
if(x==y)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
}
void conditional(int x,int y)
{
if(x==1 && y==0)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
}
void biconditional(int x,int y)
{
if(x==y)
cout<<"1"<<endl;
else
cout<<"0"<<endl;
}
void xnor(int x,int y)
{
if(x==y)
cout<<"1"<<endl;
else
cout<<"0"<<endl;
}
void nand(int x,int y)
{
if(x+y>1)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
}
void nor(int x,int y)
{
if(x+y==0)
cout<<"1"<<endl;
else
cout<<"0"<<endl;
}
int main()
{
int x,y;
cout<<"Enter  values in 0 and 1 to print truth tables"<<endl;
cin>>x>>y;
cout<<"choose one of the following options"<<endl;
cout<<"1.CONJUCTION"<<endl;
cout<<"2.DISJUNCTION"<<endl;
cout<<"3.EXCLUSIVE OR(XOR)"<<endl;
cout<<"4.CONDITIONAL"<<endl;
cout<<"5.BI-CONDITIONAL"<<endl;
cout<<"6.EXCLUSIVE NOR"<<endl;
cout<<"7.NAND "<<endl;
cout<<"8.NOR"<<endl;
int n;
cin>>n;
cout<<"x"<<" "<<"y"<<endl;
cout<<x<<" "<<y<<" ";
switch(n)
{
case 1: conjunc(x,y);
        break;
case 2: disjunc(x,y);
        break;
case 3: exnor(x,y);
        break;
case 4: conditional(x,y);
        break;
case 5: biconditional(x,y);
        break;
case 6: xnor(x,y);
        break;
case 7: nand(x,y);
        break;
case 8: nor(x,y);
        break;
}
return 0;
}
