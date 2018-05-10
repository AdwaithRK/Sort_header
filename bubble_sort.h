//bubble_sort.h file
#ifndef bubble_sort_h
#define bubble_sort_h

   
  #include<iostream>
using namespace std;
 template <typename T>

void bubble_sort(T *a,int n)
{
  T temp;
  bool sorted=false;

  for(int i=0;(i<n-1&&!sorted);i++)
   {
    sorted=true;

    for(int j=n-1;j>i;j--)
     {


      if(a[j-1]>a[j])
      {
        temp=a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
        sorted=false;
      }


    }


   }


}

#endif
