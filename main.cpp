#include"Random.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  Random gennum;
  int i,x,N=1000000;
  int a[10]={0};
  
  
  for(i=0;i<N;i++)
   {  
     x=gennum.next()/0.1;
    
     a[x]++;
   }

  for(i=0;i<10;i++)
  {  
    cout<<1.0*a[i]/N<<endl;
     
  }
 
  return 0;
}
