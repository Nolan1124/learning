#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "array.h"

//init array
bool initArray(array_ *pArray, int len) {
    pArray -> pBase = (int *)malloc(sizeof(int) * len);

    if(NULL == pArray -> pBase) {
        printf("array init failed.\n");
        return false;
    }

    pArray -> len = len;
    pArray -> cNum = 0;
    return true;
}
//is empty or not
bool isEmpty(array_ *pArray) {
    if(0 == pArray -> cNum) {
        return true;
    } else {
        return false;
    }

}
//is full or not
bool isFull(array_ *pArray) {
    if(pArray -> cNum == pArray -> len) {
        return true;
    } else {
        return false;
    }
}
//print array's element
void printArray(array_ *pArray) {
    //notice isEmpty
    if(isEmpty(pArray)) {
        printf("the Array is Empty.\n");
        return;
    }
    int i;
    for(i = 0; i < pArray -> cNum; i++) {
        printf("%d ", (pArray -> pBase)[i]);
    }
    printf("\n");
    return;
}
//append element
bool append(array_ *pArray, int val) {
    if(!isFull(pArray)) {
        pArray -> pBase[pArray -> cNum] = val;
        pArray -> cNum++;
        return true;

    } else {
        printf("the array is full.\n");
        return false;
    }

}
//insert element
bool insertElement(array_ *pArray, int pos, int val) {
    if(isFull(pArray)) {
        printf("the array is full.Insert Failed.\n");
        return false;

    }
    if(pos > 0 && pos <= pArray -> cNum) {
        int i;
        for(i = pArray -> cNum; i >= pos; i--) {
            pArray -> pBase[i] = pArray -> pBase[i - 1];
        }
        pArray -> pBase[pos - 1] = val;
        pArray -> cNum++;
        //pArray -> len++;
        return true;
    } else {
        printf("the position is overflow.\n");
        return false;
    }

}
//delete element
bool deleteElement(array_ *pArray, int pos,int *val) {
    if(pos > 0 && pos <= pArray -> cNum) {
        int i;
        *val = pArray -> pBase[pos - 1];
        for(i = pos; i < pArray -> cNum; i++) {
            pArray -> pBase[i - 1] = pArray -> pBase[i];
        }
        pArray -> cNum--;
        //pArray -> len--;
        return true;
    } else {
        printf("the position of element is not be found.\n");
        return false;
    }
}
//reverse output
bool reverseArray(array_ *pArray) {
    if(isEmpty(pArray)) {
        printf("the array is empty.\n");
        return false;
    }
    int i, j;
    for(i = 0, j = pArray ->cNum - 1; i < pArray ->cNum / 2; i++, j--) {
        int temp = pArray->pBase[i];
        pArray->pBase[i] = pArray->pBase[j];
        pArray->pBase[j] = temp;
    }
    return true;
}

void clearArray(array_ *pArray) {
    if(!isEmpty(pArray)) {
        pArray -> cNum = 0;
    }
    printf("the array was be cleared.\n");
    return;

}
