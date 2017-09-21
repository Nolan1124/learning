#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <stdbool.h>


typedef struct arr{
    int len;//max element number
    int cNum;//current element number
    int *pBase;//base pointer
}*arr;

//init array
 void initArray(arr *pArray, int len);
//is empty or not
 bool isEmpty(arr *pArray);
//is full or not

//print array's element

//append element

//insert element

//delete element

//reverse output


#endif // ARRAY_H_INCLUDED
