//merge_sort.h file
#ifndef merge_sort_h
#define merge_sort_h

    
    #include<iostream>
#include <cmath>

using namespace std;


template <typename T>

void merge(T *a,int p,int q,int r)
{

  int n1=q-p+1;
  int n2=r-q;


  T *left=new int[n1+1];
  T *right=new int[n2+1];

  int i,j,k;


  /*
  if(n1-n2 >0)
  k=n2;
  else
  k=n1;



  for(i=0;i<k;i++)
   {
     left[i]=a[p+i];
    
       cout<<a[p+i]<<"is the left"<<i<<"is the"<<left[i]<<"\n";

     right[i]=a[q+i];

      cout<<a[q+i]<<"is the left"<<i<<"is the"<<right[i]<<"\n";
   }


   
   if(k==n2)
     {
      while(i<n1)
        {
         left[i]=a[p+i];
         i++;
        }
     }
   else
     {
        while(i<n2)
          {
            right[i]=a[q+i]; 
            i++;
          }
     }
*/

     int l=0;
       int re=0;

   
    
    for(i=0;i<n1;i++)
     {
       left[i]=a[p+i];
     }
     left[n1]=999999;
      
     for(j=0;j<n2;j++)
      {
          right[j]=a[q+j+1];
      }
      right[n2]=9999999;


   for(int i=p;i<=r;i++)
     {
        if(left[l]>right[re])
         {
             a[i]=right[re];
             re++;
         }
         else
         { 
            a[i]=left[l];
            l++;
          } 
     
      }


       /*for(int i=p;i<=r;i++)cout<<a[i]<<" ";
       cout<<"now";*/
}


template <typename T>


void merge_sort_i(T *a,int p,int r)
{
   int q;

     if(p<r)
      {
        q=floor( (p+r)/2 );
        merge_sort_i(a,p,q);
        merge_sort_i(a,q+1,r);
        merge(a,p,q,r);
      }

}

template <typename T>


void merge_sort(T *a,int n)
{
merge_sort_i(a,0,n-1);
}














#endif
