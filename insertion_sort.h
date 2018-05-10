//insertion_sort.h file
#ifndef insertion_sort_h
#define insertion_sort_h

    
 #include<iostream>

using namespace std;
template <typename T>

void insertion_sort(T *a,int n)
{
	T key;
        int i;
	  for(int j=1;j<n;j++)
            {
              key=a[j];
              i=j-1;   
                while( a[i]>key && i>=0 )
                  {
                     a[i+1]=a[i];
                     i--;             
                  }
               a[i+1]=key;

            }

      

}


#endif
