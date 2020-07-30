#include<iostream>
void selsort(int a[],int n)
{
  int i,j,imin,temp;
  for(i=0;i<n;i++)
  {
    imin=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[imin])
      {
        imin=j;
      }
      temp=a[i];
      a[i]=a[imin];
      a[imin]=temp;

    }
  }
}
int main()
{
  int n,i,a[100];
  std::cin>>n;
  for(i=0;i<n;i++)
  std::cin>>a[i];
  selsort(a,n);
  for(i=0;i<n;i++)
  std::cout<<a[i]<<" ";
  return 0;
}
