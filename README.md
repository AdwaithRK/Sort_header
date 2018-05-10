# A Cpp Header for sorting


Have included 6 sorting algorithms-
1.Selection sort 
2.Merge sort 
3.Quick sort 
4.Heap sort 
5.Bubble sort
6.Insertion sort

# Specifics

The headers can be added by

 #include"sort.h"  
 #include<sort.h> --->if sort is copied to system header directories


Header sort.h will include all the sorting algorithms specified

sorting algorithms can be called as shown below

bubble_sort(a,n);
insertion_sort(a,n);
heap_sort(a,n);
merge_sort(a,n);
quick_sort(a,n);
selection_sort(a,n); 


# compilation

g++ main.cpp  --->if sort.h and main.cpp are in the same folder
g++ -I /path/to/sort main.cpp   --->if main.cpp and sort.h are in different folders

#future work

Planning to add Radix sort. 
Other are welcome to suggest and add. If a bug arises please inform and correct 
