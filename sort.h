//sort.h file
#ifndef sort_h
#define sort_h

    
    template <typename T>
    void insertion_sort(T* a,int n);

    
    template <typename T>
    void merge_sort(T* a,int n);

    template <typename T>
    void quick_sort(T* a,int n);

    template <typename T>
    void selection_sort(T* a,int n);

    template <typename T>
    void bubble_sort(T* a,int n);

    template <typename T>
    void heap_sort(T* a,int n);

#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "selection_sort.h"
#include "bubble_sort.h"
#include "heap_sort.h"

#endif
