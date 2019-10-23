#include<iostream.h>
#include<conio.h>

int fibonacci(int n)
{
  if ((n==1)||(n==0))
  {
    return (n);
  }
  else
  {
   return(fibonacci(n-1)+fibonacci(n-2));
  }
}

int main()
  
  
  
#include<iostream.h>

#include<conio.h>



int arr[10]={0};

void swapNo(int x,int y);

void printArray(int length);

void permute(int k,int length);



void swapNo(int x,int y)

{

  int temp=arr[x];

  arr[x]=arr[y];

  arr[y]=temp;

}



void printArray(int length)

{

  for(int i=0;i<length;i++)

  cout<<arr[i]<<" ";
#include<iostream.h>

#include<conio.h>



int arr[10]={0};

void swapNo(int x,int y);

void printArray(int length);

void permute(int k,int length);



void swapNo(int x,int y)

{

  int temp=arr[x];

  arr[x]=arr[y];

  arr[y]=temp;

}



void printArray(int length)

{

  for(int i=0;i<length;i++)

  cout<<arr[i]<<" ";
{
 clrscr();
 int n,i=0;
 cout<<"Input the number of terms for Fibonacci Series:";
 cin>>n;
 cout<<"\nFibonacci Series is as follows\n";

 while (i<n)
 {
   cout<<" "<<fibonacci(i);
   i++;
 }
 getch();
 return 0;
}
