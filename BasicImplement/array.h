#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <stdbool.h>


typedef struct arr {
    int len;//max element number
    int cNum;//current element number
    int *pBase;//base pointer
}array_;

//init array
bool initArray(array_ *pArray, int len);
//is empty or not
bool isEmpty(array_ *pArray);
//is full or not
bool isFull(array_ *pArray);
//print array's element
void printArray(array_ *pArray);
//append element
bool append(array_ *pArray, int val);
//insert element
bool insertElement(array_ *pArray, int pos, int val);
//delete element
bool deleteElement(array_ *pArray, int pos,int *val);
//reverse output
bool reverseArray(array_ *pArray);
//clear
void clearArray(array_ *pArray);

#endif // ARRAY_H_INCLUDED
