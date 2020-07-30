#include<iostream>
void merge(int a[], int low, int mid, int high)
{
int b[10000];
int i = low, j = mid + 1, k = low;

while (i <= mid && j <= high) {
    if (a[i] <= a[j])
        b[k++] = a[i++];
    else
        b[k++] = a[j++];
}
while (i <= mid)
    b[k++] = a[i++];

while (j <= high)
    b[k++] = a[j++];

for(i=low;i<=high;i++)
    a[i]=b[i];
}


void mergesort(int a[], int low, int high)
{
if (low < high)
{
int m = (high + low)/2;
mergesort(a, low, m);
mergesort(a, m + 1, high);
merge(a, low, m, high);
}
}


int main()
{
  int a[]={5,4,3,2,1},n=5;
  mergesort(a,0,5);
  int i;
  for(i=0;i<n;i++)
  std::cout<<a[i]<<" ";
  return 0;
}
