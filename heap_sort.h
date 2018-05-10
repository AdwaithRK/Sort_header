

//heap_sort.h file
#ifndef heap_sort_h
#define heap_sort_h



    


#include<iostream>
#include<cmath>
using namespace std;


int left(int i)
{
  return 2*i+1;
}


int right(int i)
{
  return 2*i+2;
}


template <typename T>

void max_heapify(T *a,int i,int n)
{
  int l=left(i);
  int r=right(i);
  T temp;
  int largest;

  if(l<n && a[i]<a[l]  )
   {
     largest=l;
     
   }
  else
   {
     largest=i;
   }
    


  if(r<n && a[largest]<a[r]   )
   {
     largest=r;

   }
 
  if(largest!=i)
  {
    temp=a[i];
    a[i]=a[largest];
    a[largest]=temp;
  
    max_heapify(a,largest,n);
  }

}


template <typename T>

void build_max_heap(T *a,int n)
{
int k=n-1;

for(int i=k/2;i>=0;i--)
{
  max_heapify(a,i,n);
}  
  
  
  
}

template <typename T>

void heap_sort(T *a,int n)
{
  build_max_heap(a,n);


  T temp;
  for(int i=n-1;i>=1;i--)
   { 
      temp=a[i];
      a[i]=a[0];
      a[0]=temp;
      max_heapify(a,0,i);

   }


 
}




#endif



