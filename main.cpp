#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main()
{
/*
  int sum=0;
  const int nmax=1000;
  int mas[nmax];
  int n=4;
  for (int i=0;i<n;i++)
  {
    std::cin>>mas[i];
   
  for (int j=2;j<=mas[i];j++)
  {
    int a=mas[i];
    if(a%j==0)
    {
      sum+=1;
      break;
    }   
  }
  }
  //std::cout<<sum<<std::endl;
  if(sum==n)
  {
    std::cout<<"11"<<std::endl;
    for(int i=0; i<n-1;i++)
    {
      for (int j=i+1;j<n;j++)
      {
        if(mas[i]<mas[j])
        {
          int tmp = mas[i];
          mas[i]=mas[j];
          mas[j]=tmp;
        }   

        }
    }
    for (int i=0;i<n;i++)
    std::cout<<mas[i]<<std::endl;
  }
  if(sum!=n)
    std::cout<<"10"<<std::endl;
    /*/
//"2 пунктик"
  const int nmax=1000;
  int mas[nmax];
  int n=4;
  for (int i=0;i<n;i++)
  {
    std::cin>>mas[i];
  }
// std::cout<<mas[2]<<std::endl;  
int amin=10;
int bmin=10;    
for(int i=0; i<n-1;i++)
    {
      for (int j=i+1;j<n;j++)
      {
        int a=mas[i],b=mas[j];
        int a1=mas[i],b1=mas[j];
        while(a1!=0)
        {
          int aproc=a1%10;
          if(aproc<amin)
          {
            amin=aproc;
          }
          a1=a1/10; 
        } 
        while(b1!=0)
        {
          int bproc=b1%10;
          if(bproc<bmin)
          {
            bmin=bproc;
          }
          b1=b1/10; 
        } 
        while(a>9) a/=10;
        while(b>9) b/=10;

        if((a>b)||(a==b && amin>bmin )||( a==b && amin==bmin && mas[i]>mas[j] ))
        {
          int tmp = mas[i];
          mas[i]=mas[j];
          mas[j]=tmp;
        }   

      }
    }
  for (int i=0;i<n;i++)
    std::cout<<mas[i]<<std::endl;



}
    














