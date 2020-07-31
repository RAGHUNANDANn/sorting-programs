#include<iostream>
int partition(int a[],int low,int high)
{
  int i,j,pi,pivot,temp;
  pivot=a[high];
  pi=low;
  for(i=low;i<high;i++)
  {
    if(a[pi]<=pivot)
    {
      temp=a[i];
      a[i]=a[pi];
      a[pi]=temp;
      pi++;
    }
  }
  temp=a[pi];
  a[pi]=a[high];
  a[high]=temp;
  return pi;
}
void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(a,low,high);
    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
  }
}

int main()
{
  int a[]={5,4,3,2,1},n=5;
  quicksort(a,0,5);
  int i;
  for(i=0;i<n;i++)
  std::cout<<a[i]<<" ";
  return 0;
}
