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
   }
  
  std::cout<<mas[0]<<std::endl;
  if(sum!=0)
  {
    for(int i=0; i<n-1;i++)
      for (int j=i+1;j<n;j++)
        if(mas[i]<mas[j])
        {
          int tmp = mas[i];
          mas[i]=mas[j];
          mas[j]=tmp;

        }
    for (int i=0;i<n;i++)
    std::cin>>mas[i];
  }
  if(sum==0)
    std::cout<<"10"<<std::endl;
}
    














