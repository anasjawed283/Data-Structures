#include<stdio.h>
void merge(int *a, int *b, int low, int pivot, int high)
{ 
  int h,i,j,k;
  h=low;
  i=low;
  j=pivot+1;   
  while((h<=pivot)&&(j<=high))
  { 
    if(a[h]<=a[j])
    {
        b[i]=a[h];
        h++;
    } 
    else
    {
        b[i]=a[j];
        j++;
    } 
    i++;
  }

    if(h>pivot)
    { 
      for(k=j; k<=high; k++)
      { 
        b[i]=a[k];
        i++;
      }
    } 
    else
    { 
      for(k=h; k<=pivot; k++)
      { 
        b[i]=a[k];
        i++;
      }
    } 
    for(k=low; k<=high; k++)
    {
        a[k]=b[k];
    }
} 

void mergesort(int *a, int*b, int low, int high) {
  int pivot; 
  if(low<high) { 
     pivot=(low+high)/2; 
     mergesort(a,b,low,pivot);     
     mergesort(a,b,pivot+1,high); 
     merge(a,b,low,pivot,high); 
   } 
}


int main()
{ 
  int n;
    scanf("%d",&n);
    int arr[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  mergesort(arr,b,0,n-1); 
  for(int i=0; i<n; i++)
  {
    printf("%d\t",arr[i]);
  }
}
