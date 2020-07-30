#include<iostream>
void insert_sort(int a[],int n)
{
  int i,j,value,hole;
  for(i=1;i<n;i++)
  {
    value=a[i];
    hole=i;
    while(hole>0&&a[hole-1]>value)
    {
      a[hole]=a[hole-1];
      hole=hole-1;

    }
    a[hole]=value;

  }
}
int main()
{
  int a[]={5,4,3,2,1},n=5;
  insert_sort(a,n);
  int i;
  for(i=0;i<n;i++)
  std::cout<<a[i]<<" ";
  return 0;
}
