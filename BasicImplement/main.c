#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "linklist.h"

int main() {
    /*array_ arr;
    int len;
    printf("input array length:");
    scanf("%d", &len);
    initArray(&arr, len);
    printf("append data(end with -1):");
    int data;
    while(scanf("%d",&data) == 1) {
        if(data == -1) {
            break;
        }
        append(&arr, data);
    }
    printArray(&arr);
    printf("------------------------------\n");

    insertElement(&arr, 4, 8);
    printArray(&arr);
    insertElement(&arr, 10, 10);
    printArray(&arr);
    printf("------------------------------\n");

    int val;
    deleteElement(&arr, 4, &val);
    printf("the element of being deleted is:%d.\n", val);
    printArray(&arr);

    deleteElement(&arr, 9, &val);
    printArray(&arr);
    printf("------------------------------\n");

    printArray(&arr);
    reverseArray(&arr);
    printArray(&arr);
    printf("------------------------------\n");

    reverseArray(&arr);
    printArray(&arr);
    clearArray(&arr);
    printArray(&arr);
    printf("------------test is end.------\n");*/


    int e;
    LinkList llist = initLinkList();
    if(createLinkList(llist, 4)){
        linkListPrint(llist);
    }

    //llist = clearLinkList(llist);
    //linkListPrint(llist);

   //getElement(llist, 5, &e);
   //printf("e:%d", e);

  // e = 10;
  // linkListInsert(llist, 3, e);
  // linkListPrint(llist);

  linkListDelete(llist, 3, &e);
  printf("e:%d\n",e);
  linkListPrint(llist);





    return 0;
}
