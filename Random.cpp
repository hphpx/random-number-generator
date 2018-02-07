#include"Random.h"
#include<cmath>

Random::Random()
{
   a=16807; b=0; m=2147483647; I=100;
}

void Random::seed(int I)
{
   this->I=I;
}

void Random::setpara(int a, int b)
{
   this->a=a; this->b=b;
}

double Random::next()
{
    
  t2=fmod(b,m); q=floor(m/a);  r=fmod(m,a); 
 
  g1=fmod(I,q); g2=floor(I/q);
  t1=a*g1-r*g2;
  n=t1+t2;
  if(n<m)
   {  if(n>=0) I=n;
      else  {I=n+m; while(I<0) I=I+m;}
   }
  else I=fmod(n,m); 
 
  return 1.0*I/m;
} 

  

   
