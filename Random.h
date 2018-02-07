#ifndef RANDOM_H
#define RANDOM_H
class Random
{
   public:
     Random();
     void seed(int I);
     void setpara(int a,int b);
     double next();
   private:
     int a,b,m,I;
     int  q,r,n,g1,g2,t1,t2;
};

#endif
