#include<iostream.h>
#include<conio.h>

int numberOfLeaves(m,i){ 	//function instead of normal line of code
	
	int n = (m*i + 1);
	int leaves = ((m-1)*n + 1)/m;
	return leaves;
}//numberOfLeaves()

void main()
{ clrscr();
 
  cout<<"This program prints the number of leaves in a m-ary tree with i internal vertices"<<endl;
  int i,m,leaves;
  cout<<"Enter m:"<<endl;
  cin>>m;
  cout<<"Enter i:"<<endl;
  cin>>i;
  cout<<"Total number of vertices: "<<(m*i + 1)<<endl;
  leaves = numberOfLeaves(m,i);
  cout<<"Number of leaves: "<<leaves<<endl;

  getch();
  return;
}
