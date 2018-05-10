//quick_sort.h file
#ifndef quick_sort_h
#define quick_sort_h

   
   #include<iostream>
using namespace std;

template <typename T>
void quick_sort(T *a,int n);


template <typename T>
void quick_sort_i(T *a,int p,int r);


 template <typename T>
int partition(T *a,int p,int r)
{
   int i=p-1;
   int temp;
   for(int j=p;j<=r-1;j++)
    {
 
        if(a[j] < a[r])
         {
           i++;
        
           temp=a[j];
           a[j]=a[i];
           a[i]=temp;
         }

    }

    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    
    return i+1;
}

 template <typename T>

void quick_sort_i(T *a,int p,int r)
{
  int q;
  if(p<r)
    {
       q=partition(a,p,r);
       quick_sort_i(a,p,q-1);
       quick_sort_i(a,q+1,r);
    }

}

 template <typename T>


void quick_sort(T *a,int n)
{
  quick_sort_i(a,0,n-1);

}









#endif
