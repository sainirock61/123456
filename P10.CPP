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
  cout<<endl;
}

void permute(int k,int length)
{
  if(k==0)
Mike Swift , CEO & Co-Founder of MLH (Major League Hacking) with us, who'll be addressing  the audience on the morning of 19th!  🤩
He would be speaking on "Stories about hackers and other superheroes " cool isn't it ? 😌

This would be followed by a keynote from Akrodyuti Saha (aka Arko 😎) , Cloud Advocate Program Manager, Microsoft U.S.A on Modern Developer Psychology: Read, Write, Code

Hold on! as  We also have various interesting hands-on workshops for you ..

Starting with Microsoft ( Topic to be updated soon 😉 )

followed by HackerOne workshop by Sandeep Singh (aka Geekboy ;) on Bug Bounty
and  
a workshop from ZIET by Amandeep Singh on Next.JS framework


You name it, we have it!

So hurry up as we are officially accepting registrations only till 15th October!

    printArray(length);
  else
   {
     for(int i=k-1;i>=0;i--)
     {
       swapNo(i,k-1);
       permute(k-1, length);
       swapNo(i,k-1);
     }
   }
}




void main()
{
  clrscr();
  cout<<"Enter the no. of Elements:"<<endl;
  int n;
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  permute(n,n);
  getch();
  return;
}
