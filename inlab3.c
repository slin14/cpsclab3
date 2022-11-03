#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <stdlib.h>
// #include "linkedlist-v2.h"

typedef struct node {
    int data;
    struct node* next;
} node;

/*
 *  Rearranges the elements of a null-terminated, singly-linked list
 *  so that elements whose data value is > the pivot appear towards
 *  the front of the list, and elements whose data value is <= the pivot
 *  appear towards the back of the list.
 *  This must be achieved by reassigning/relinking the next attribute
 *  of the list nodes. You may NOT overwrite the data attribute of
 *  existing nodes.
 *
 *  Assume that the list does not contain duplicate values.
 *
 *  @param list - pointer to the first node in the linked list.
 *  @param pivot - value around which the elements of the list will be partitioned.
 *                 This value may or may not be contained in the list.
 *  @return - pointer to the front of the partitioned/rearranged list.
 */
struct node* PartitionBigSmall(struct node* list, int pivot) {
  if(list->next == NULL) {
    return list; // list is empty
  }
  if(list->next->next == NULL) {
    return list; // list only has 1 node
  }  
  
  node* i = list;
  node* temp = list;
  node* i_next = NULL;
  node* i_prev = NULL;
  node* i_prev_nxt = NULL;
// process starting with 2nd node
  i_prev = i;
  i = i->next;
  while(i->next != NULL) {
    // printf("FUNC pricessing i->data = %d\n", i->data);
    if (i->data > pivot) {
        printf("FUNC i->data = > pivot %d\n", i->data);
        // move to front of list
        temp = list;
        i_next = i->next;
        i_prev_nxt = i;

        list = i;
        i->next = temp;
        // temp->next = i->next;
        i_prev->next = i_next;

        printf("FUNC list->data = %d\n",list->data);
        printf("FUNC i->data = %d\n",i->data);
        printf("FUNC i->next->data = %d\n",i->next->data);
        printf("FUNC i_prev->next = %d\n",i_prev->next->data);
        
        i_prev = i_prev_nxt;
        i = i_next;
    } else {
        i_prev = i;
        i = i->next;
    }
    // 
  }

  // replace the line below with your implementation
  return list;
}

int main(void)
{
//   node node1 = {43, NULL};
//   node node2 = {26, &node1};
//   node node3 = {3, &node2};
//   node node4 = {35, &node3};
//   node node5 = {10, &node4};
//   node node6 = {84, &node5};
//   node* front = &node6;

  node node1 = {43, NULL};
  node node2 = {26, &node1};
  node node3 = {3, &node2};
  node node4 = {45, &node3};
  node node5 = {10, &node4};
  node node6 = {84, &node5};
  node* front = &node6;


  node* i = front;
  while(i->next!= NULL) {
    printf("i->data = %d\n", i->data);
    i = i->next;
  }

  printf("\n");

  node* result = PartitionBigSmall(front,20);
  i = result;
  while(i->next!= NULL) {
    printf("i->data = %d\n", i->data);
    i = i->next;
  }


//   node* result = PartitionBigSmall(front,40);
//   i = result;
//   while(i->next!= NULL) {
//     printf("result->data = %d\n", result->data);
//     i = i->next;
//   }


  return 0;
}