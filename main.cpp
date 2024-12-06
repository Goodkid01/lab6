#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main()
{
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
}
    














