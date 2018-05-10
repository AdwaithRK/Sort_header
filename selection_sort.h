//selection_sort.h file
#ifndef selection_sort_h
#define selection_sort_h

   
    #include<iostream>
using namespace std;

 template <typename T>
void selection_sort(T *a,int n)
{
  T temp,min;
 for(int i=0;i<n-1;i++)
   {

     min=i;
    
    for(int j=i+1;j<n;j++)
     {
      if(a[j]<a[min])
       {
        min=j;
       }

     }

   if(min!=i)
    {
     temp=a[min];
     a[min]=a[i];
     a[i]=temp;
    }


   }


}





#endif
