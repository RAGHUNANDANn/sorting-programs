#include<iostream>
void bubble(int a[],int n)
{
  int i,j,temp,k,flag;
  for(k=0;k<n;k++)
  {
    flag=0;
  for(i=0;i<n-k-1;i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i+1];
      a[i+1]=a[i];
      a[i]=temp;
      flag=1;
    }
  }
  if(flag==0)
  break;
}
}
int main()
{
  int n,a[100],i;
  std::cin>>n;
  for(i=0;i<n;i++)
  std::cin>>a[i];
  bubble(a,n);
  for(i=0;i<n;i++)
  std::cout<<a[i]<<" ";
return 0;
}
