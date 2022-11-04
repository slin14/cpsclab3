/*
 File:         linkedlist.c
 Purpose:      Implements the linked list functions whose prototypes
               are declared in the linked_list.h header file
 Author:       Sophie Lin
 Student #s:   70196886
 CWLs:         slin14
 Date:         Oct. 16, 2022
 */

#define _CRT_SECURE_NO_WARNINGS

 /* Preprocessor directives */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

/******************************************************************
 PLEASE EDIT THIS FILE

 Comments that start with // should be replaced with code
 Comments that are surrounded by * are hints
 ******************************************************************/

 /*
  Returns a pointer to a new, empty linked list of struct node.
  PRE:       NULL (no pre-conditions)
  POST:      NULL (no side-effects)
  RETURN:    A pointer to a new, empty linked list of struct node (NULL)
  */
node* create_linked_list()
{
  // Insert your code here
  return NULL;
}

/*
 Returns a dynamically allocated struct node that contains the specified
 struct airplane. Note that the string attributes of the newly created
 node's struct airplane must be specially copied (refer to lab 2).
 The node's next pointer doesn't point to anything
 PARAM:     plane, a struct airplane
 PRE:       NULL (no pre-conditions)
 POST:      NULL (no side-effects)
 RETURN:    A pointer to a dynamically allocated struct node a) that contains
            the specified struct airplane, and b) whose next pointer points to NULL
 */
node* create_node(airplane plane)
{
  struct node* newnode = (struct node*) malloc(sizeof(struct node));
  newnode->next = NULL;
  newnode->plane = plane;
  return newnode;
}

/*
 Prepends a struct node passed as a parameter to the list passed as a
 parameter, and returns a pointer to the result.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PARAM:     new_node is a pointer to a struct node
 PRE:       new_mode is not null
 POST:      The specified struct node is added to the beginning of the list
            and its next pointer points to the node that used to be first
 RETURN:    A pointer to a linked list which contains all of the nodes
            of the list passed as a parameter, plus a prepended node
 */
node* prepend_node(node* list, node* new_node)
{
  if (list == NULL) {
    return new_node;
  }

  new_node->next = list;
  return new_node;
}

/*
 Deletes the first struct node in the specified list, and returns a pointer to
 the shortened list. Be aware of nested allocations!
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PRE:       NULL
 POST:      The list passed as a parameter has one fewer node, and the dynamically
            allocated memory which contained that removed node has been freed
 RETURN:    IF the list is empty
            THEN NULL
            ELSE a pointer to the shortened list
 */
node* delete_node(node* list)
{
  if (list == NULL) { // empty list
    return NULL;
  }
  node* temp = list;
  list = list->next;
  free(temp);
  return list;
}

/*
 Returns the number of nodes in the specified linked list of struct node.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PRE:       NULL (no pre-conditions)
 POST:      NULL (no side-effects)
 RETURN:    The length of the specified list, an int
 */
int get_length(node* list)
{
  if (list == NULL) {
    return 0;
  }

  int count = 1;
  node* temp = list;
  while(temp->next != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

/*
 Deletes an entire list.  This function iterates along a list and deallocates the
 memory containing each struct node.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PRE:       NULL (no pre-conditions)
 POST:      The memory containing all of the nodes in the list has been freed
 RETURN:    an empty list (NULL)
 */
node* delete_list(node* list)
{
  if (list == NULL) {
    return list;
  }
  
  while (list->next != NULL) {
    list = delete_node(list);
  }
  return delete_node(list);
}

/*
 Prints the data stored in a node.  For the struct airplane in the node,
 prints the fields on separate lines.  For each field, prints the field name
 and the field value.  For the pointer, prints "Link = NULL\n" if the pointer points
 to null, else prints "Link points to address xxx\n", where xxx is the pointer address
 in hexademical.
 If node_to_print is NULL, prints "The node is empty\n".
 PARAM:     node_to_print is a pointer to a (possibly null) struct node
 PRE:       NULL (no pre-conditions)
 POST:      Information about node_to_print has been printed to standard output
 RETURN:    NULL
 */
void print_node(node* node_to_print)
{
  if (node_to_print == NULL) {
    printf("The node is empty\n");
    return;
  }
  // print plane
  printf("flight_number = %d\n", node_to_print->plane.flight_number);
  printf("city_orgin = %s\n", node_to_print->plane.city_origin);
  printf("city_destination = %s\n", node_to_print->plane.city_destination);
  printf("priority = %d\n", node_to_print->plane.priority);
  printf("maximum_speed_kph = %d\n", node_to_print->plane.maximum_speed_kph);
  printf("cruising_altitude = %d\n", node_to_print->plane.cruising_altitude);
  printf("capacity = %d\n", node_to_print->plane.capacity);
  // print link
  if (node_to_print->next == NULL) {
    printf("Link = NULL\n");
  } 
  else {
    printf("Link points to address %p\n", node_to_print->next);
  }
  return;
}

/*
 Prints the data stored in all nodes in the specified list to print.
 For each node, prints the data inside the node the same way that it
 is printed by print_node.  If the list is empty, a suitable message
 is printed to standard output.
 PARAM:     node_to_print is a pointer to a (possibly empty) linked list of
            struct node
 PRE:       NULL (no pre-conditions)
 POST:      Information about list_to_print has been printed to standard output
 RETURN:    NULL
 */
void print_list(node* list_to_print)
{
  if (list_to_print == NULL) {
    printf("The list is empty\n");
    return;
  }
  // print first node
  node* temp = list_to_print;
  print_node(temp);
  // print following nodes (if any)
  while(temp->next != NULL) {
    temp = temp->next;
    print_node(temp);
  }
}

/*
 Reverses a list.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PRE:       NULL (no pre-conditions)
 POST:      The order of the nodes in the list passed as a parameter has been
            reversed
 RETURN:    a list of struct node that is the reverse of the list passed as a
            parameter
 */
node* reverse(node* list) // TODO
{
  if (list == NULL) { // no node list (trivial)
    return list;
  }
  if (list->next == NULL) { // 1 node list (trivial)
    return list;
  }
  node* prev = list;
  node* curr = list->next;
  node* next = NULL;
  while(curr->next != NULL) {
    next = curr->next;
    prev->next = next;
    curr->next = list;
    list = curr;
    curr = next;
  }
  curr->next = list;
  prev->next = NULL;
  list = curr;
  return list;
}

/*
 Removes every node from the list which contains an airplane destined for
 the city name passed in the second parameter.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PARAM:     destination_city is a pointer to a null-terminated array of char
 PRE:       NULL (no pre-conditions)
 POST:      Any struct node in the list which contains an airplane struct
            destined for the destination_city is removed from the list, and
            the memory deallocated
 RETURN:    a list of struct node that does not contain any struct node that
            has an airplane destined for the destination_city
 */
node* remove_from_list(node* list, char* destination_city) // TODO
{
  if (list == NULL) {
    return list;
  }
  if (list->next == NULL) { // list only has 1 node
    if (strcmp(destination_city, list->plane.city_destination) == 0) {
      return delete_node(list);
    } else {
      return list;
    }
  }
  // deal with the first node
  node* temp = list;
  node* prev_node = NULL;
  if (strcmp(destination_city, temp->plane.city_destination) == 0) {
    temp = delete_node(temp);
    list = temp;
  } else {
    prev_node = list;
  }
  // deal with the following nodes
  node* next_node = list->next;
  while(temp->next != NULL) {
    next_node = temp->next;
    if (strcmp(destination_city, temp->plane.city_destination) == 0) {
      temp = delete_node(temp); // temp becomes the next node
      if (prev_node == NULL) { // removed first node in list
        list = temp;
      } else {
        prev_node->next = temp; // re-link list
      }
      if (temp == NULL) { // removed last node in list
        if (prev_node == NULL) { // set next in the node before to NULl
          return NULL;
        } else {
          prev_node->next = NULL;
          return list;
        }
      }
    } else {
      if (prev_node == NULL) {
        prev_node = list;
      } else {
        prev_node = temp;
      }
      temp = temp->next;
    }
  }
  // deal with the last node
  if (strcmp(destination_city, temp->plane.city_destination) == 0) {
    temp = delete_node(temp);
    if (prev_node == NULL) {
      return NULL;
    } 
    else {
      prev_node->next = NULL;
      return list;
    }
  }
  return list;
}

/*
 Returns a reference to the nth node (but does not remove it ) in the
 specified list.  If the list is too short, returns NULL.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PARAM:     ordinality is an integer
 PRE:       ordinality > 0
 POST:      NULL (no side-effects)
 RETURN:    IF ordinality <= length of list
            THEN a pointer to the nth node
            ELSE NULL
 */
node* retrieve_nth(node* list, int ordinality)
{
  if (list == NULL) { // list has at least 1 node
    return NULL;
  }

  if (ordinality == 1) { // return 1st node
    return list;
  }

  int length = get_length(list);
  if (ordinality <= length) { // return nth node
    node* nth = list;
    for (int i = 1; (nth->next != NULL)&&(i<ordinality); i++) {
      nth=nth->next;
    }
    return nth;
  }
  return NULL; // ordinality > length of list
}

/*
 Inserts the specified node into the specified list of nodes at the specified
 ordinality.  For example, if ordinality = 1, this is a simple prepend_node
 operation.  If ordinality = 3, then when this function is finished, the third
 node in the list will be the node_to_insert.  If the ordinality = the length
 of the list + 1, then the node_to_insert is appended to the end of the list.
 If the ordinality > 1 + length of the list, the function returns a pointer
 to the unchanged list.
 PARAM:     list is a pointer to a (possibly empty) linked list of struct node
 PARAM:     ordinality is an integer
 PRE:       ordinality > 0
 PRE:       node_to_insert is NEVER a null (it is always a correct node pointer)
 POST:      NULL (no side-effects)
 RETURN:    IF ordinality <= length of list + 1
            THEN a pointer to the list which contains the node_to_insert in the
      correct location
            ELSE a pointer to the unchanged list
 */
node* insert_nth(node* list, node* node_to_insert, int ordinality)
{
  int length = get_length(list);
  if (ordinality > length + 1) {
    return list;
  }

  // ordinality <= length of list + 1
  if (list == NULL) {
    return node_to_insert;
  }
  if (ordinality == 1) { // simple prepend_node operation
    return prepend_node(list, node_to_insert);
  }

  node* nth_minus_1 = retrieve_nth(list, ordinality-1);
  if (nth_minus_1 == NULL) { // ordinality > length of list + 1
    return list;
  }
  node* nth = prepend_node(nth_minus_1->next, node_to_insert);
  nth_minus_1->next = nth;
  return list;
}