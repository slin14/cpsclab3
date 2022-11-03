/*
 File:         main.c
 Purpose:      Contains the main function for driving the program.
               You may add your own testing code here in the main
               function, but this file will not be submitted for
               credit.
 Author:       Your names
 Student #s:   12345678 and 12345678
 CWLs:         cwl1 and cwl2
 Date:         Add the date here
 */

 /* Preprocessor directives */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

/*
 Main function drives the program.  Every C program must have one
 main function.  A project will not compile without one.

 In our program, the main function does nothing.  That's because
 our program doesn't do anything.  We're just implementing a linked
 list and testing it using our unit tests.

 You may add your own code for testing if you wish.

 PRE:    NULL (no pre-conditions)
 POST:	 NULL (no side-effects)
 RETURN: IF the program exits correctly
     THEN 0 ELSE 1
 */


// gcc main.c linkedlist.c linkedlist.h -o lab3

void print_my_list(node* list) {
  if (list == NULL) {
    return;
  }

  node* temp = list;
  printf("flight_num = %d\n", temp->plane.flight_number);
  printf("city_dest = %s\n", temp->plane.city_destination);
  printf("city_orig = %s\n", temp->plane.city_origin);
  printf("\n");
  
  while(temp->next != NULL) {
    temp = temp->next;
    printf("flight_num = %d\n", temp->plane.flight_number);
    printf("city_dest = %s\n", temp->plane.city_destination);
    printf("city_orig = %s\n", temp->plane.city_origin);
    printf("\n");
  }
  printf("\n\n");
}

// swaps the nodes from the front to the node just before node x with node x
// eg. 1 2 3 X 4 5
// result: node x, followed by the nodes originally at the front to the node just before node x
// return: the new front of the list
// eg. X 1 2 3 4 5
// returns 
node* swap (node* front, node* x) {
  // find the node just before node x (OR just let node y equal the node after node x and pass in node y)
}

int main(void)
{
  node* my_node;
  node* test;
  node* my_empty_list = NULL;
  node* node1;
  node* node2;
  node* node3;
  node* result;
  node* my_list;
  node* my_list_shortened = NULL;
  node* one_node_list;
  
  my_node = create_linked_list();
  // printf("flight_number = %d\n", my_node->plane.flight_number);
  // printf("next = %p\n", my_node->next);

  airplane myplane = {.flight_number = 1, 
                      .city_origin = "Vancouver",
                      .city_destination = "Singapore",
                      .priority = 10,
                      .maximum_speed_kph = 1000,
                      .cruising_altitude = 20000,
                      .capacity = 30 };

  // printf("myplane.flight_number = %d\n", myplane.flight_number);
  // printf("myplane.city_dest = %s\n", myplane.city_destination);
  // printf("myplane.city_orig = %s\n", myplane.city_origin);
  // printf("strlen(dest) = %d\n", strlen(myplane.city_destination));

  my_node = create_node(myplane);
  node1 = create_node(myplane);
  // printf("origin = %s\n", my_node->plane.city_destination);

  // printf("\n");
  // printf("before prepend...\n");
  // printf("my_node->plane.city_destination = %s\n", my_node->plane.city_destination);
  // printf("my_node->plane.flight_number = %d\n", my_node->plane.flight_number);

  // print_my_list(my_node);

  airplane plane2 = {.flight_number = 2, 
                      .city_origin = "Calgary",
                      .city_destination = "Toronto",
                      .priority = 2,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 35 };
  
  node2 = create_node(plane2);
  // printf("node2->plane.city_destination = %s\n", node2->plane.city_destination);
  // printf("node2->plane.flight_number = %d\n", node2->plane.flight_number);


  airplane plane3 = {.flight_number = 3, 
                      .city_origin = "New Brunswick",
                      .city_destination = "Halifax",
                      .priority = 3,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 40 };
  node3 = create_node(plane3);
  // print_node(node3);

  airplane plane4 = {.flight_number = 4, 
                      .city_origin = "Taipei",
                      .city_destination = "Hong Kong",
                      .priority = 4,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 56 };
  node* node4 = create_node(plane4);

  // TEST PREPEND
  // printf("\n\ntrying stuff\n\n");
  // my_list = node1;
  // node1->next = node2;
  // print_list(my_list);

  // printf("\n\n\n prepending to a node...\n\n\n");
  my_list = prepend_node(node2, my_node);
  // print_list(my_list);
  printf("\n");

  // printf("\n\n\n prepending to a list...\n\n\n");
  result = prepend_node(my_list, node3);
  // print_list(result);
  printf("\n");

  my_list = result;

  
  // printf("after prepend\n");

  // // TESTING DELETE_NODE
  // print_list(my_list);
  // printf("\n\n\ndeleting my node...\n\n\n");
  // my_list_shortened = NULL;
  // my_list_shortened = delete_node(my_list);
  // printf("\n");
  // print_list(my_list_shortened);

  // printf("\n");
  // printf("\n");
  // printf("\n");

  // print_list(one_node_list);
  // printf("\n\n\ndeleting node of a list with 1 node...\n\n\n");
  // one_node_list = node1;
  // my_list_shortened = delete_node(one_node_list); // TODO
  // printf("\n");
  // print_list(my_list_shortened);

  // printf("\n\n\ndeleting node from an empty list.\n\n\n");
  // create_linked_list(my_empty_list);
  // result = NULL;
  // result = delete_node(my_empty_list);
  // print_list(result);

  // // TESTING COUNT NUM NODES
  // int len;
  // len = get_length(my_list);
  // print_my_list(my_list);
  // printf("my_list length = %d\n", len);

  // len = get_length(my_empty_list);
  // printf("empty_list length = %d\n", len);
  // printf("\n");

  
  
  // print_list(my_list);


  // // TEST DELETE_LIST
  // printf("\n\n\ndeleting my list...\n\n\n");
  // test=delete_list(my_list);
  // print_list(test);

  // printf("\n\n\ndeleting an empty list...\n\n\n");
  // my_list = delete_list(NULL);
  // print_list(my_list);

  print_list(my_list);
  printf("\n\n\ndeleting my list...\n\n\n");
  my_list_shortened = NULL;
  my_list_shortened = delete_list(my_list);
  printf("\n");
  print_list(my_list_shortened);

  printf("\n");
  printf("\n");
  printf("\n");

  print_list(one_node_list);
  printf("\n\n\ndeleting my 1 node list...\n\n\n");
  one_node_list = node1;
  result = delete_list(one_node_list); // TODO
  printf("\n");
  printf("result = %p\n", result);
  print_list(result);



  // TEST swap


  // // TEST RETRIEVE
  // result = retrieve_nth(my_list, 2);
  // print_node(result);
  // printf("\n");

  // result = retrieve_nth(NULL, 2);
  // print_node(result);

  // // TEST INSERT NTH
  // my_list = prepend_node(node4, node3); 
  // my_list = prepend_node(my_list, node2); // 2,3,4
  // printf("\n\n\n inserting at 1...\n\n\n");
  // result = insert_nth(my_list, node1, 1);
  // print_list(result); // 1,2,3,4

  // my_list = prepend_node(node4, node3); 
  // print_list(my_list);
  // my_list = prepend_node(my_list, node1); // 1,3,4
  // printf("\n\n\n inserting at 2...\n\n\n");
  // result = insert_nth(my_list, node2, 2);
  // print_list(result);

  // my_list = prepend_node(node3, node2);
  // my_list = prepend_node(my_list, node1); // 1,2,3
  // printf("\n\n\n inserting at 4...\n\n\n");
  // result = insert_nth(my_list, node4, 4);
  // print_list(result);

  /* The system command forces the system to pause */
  // system("pause");
  return 0;
}