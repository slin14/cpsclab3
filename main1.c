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


int main(void)
{
  node* my_empty_list = NULL;
  node* node1;
  node* node2;
  node* node3;
  node* node4;
  node* result;
  node* my_list;
  node* my_list_shortened = NULL;
  node* one_node_list;
  
  airplane myplane = {.flight_number = 1, 
                      .city_origin = "Vancouver",
                      .city_destination = "Singapore",
                      .priority = 10,
                      .maximum_speed_kph = 1000,
                      .cruising_altitude = 20000,
                      .capacity = 30 };

  node1 = create_node(myplane);

  airplane plane2 = {.flight_number = 2, 
                      .city_origin = "Calgary",
                      .city_destination = "Toronto",
                      .priority = 2,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 35 };
  
  node2 = create_node(plane2);

  airplane plane3 = {.flight_number = 3, 
                      .city_origin = "New Brunswick",
                      .city_destination = "Halifax",
                      .priority = 3,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 40 };
  node3 = create_node(plane3);

  airplane plane4 = {.flight_number = 4, 
                      .city_origin = "Taipei",
                      .city_destination = "Hong Kong",
                      .priority = 4,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 56 };
  node4 = create_node(plane4);


  delete_node(node1);
  delete_node(node2);
  delete_node(node3);
  delete_node(node4);

  // // TEST PREPEND

  // // printf("\n\n\n prepending to a node...\n\n\n");
  // my_list = prepend_node(node2, my_node);
  // // print_list(my_list);
  // printf("\n");

  // // printf("\n\n\n prepending to a list...\n\n\n");
  // result = prepend_node(my_list, node3);
  // // print_list(result);
  // printf("\n");

  // my_list = result;

  // // // TESTING DELETE_NODE
  // // print_list(my_list);
  // // printf("\n\n\ndeleting my node...\n\n\n");
  // // my_list_shortened = NULL;
  // // my_list_shortened = delete_node(my_list);
  // // printf("\n");
  // // print_list(my_list_shortened);

  // // printf("\n");
  // // printf("\n");
  // // printf("\n");

  // // print_list(one_node_list);
  // // printf("\n\n\ndeleting node of a list with 1 node...\n\n\n");
  // // one_node_list = node1;
  // // my_list_shortened = delete_node(one_node_list); // TODO
  // // printf("\n");
  // // print_list(my_list_shortened);

  // // printf("\n\n\ndeleting node from an empty list.\n\n\n");
  // // create_linked_list(my_empty_list);
  // // result = NULL;
  // // result = delete_node(my_empty_list);
  // // print_list(result);

  // // // TESTING COUNT NUM NODES
  // // int len;
  // // len = get_length(my_list);
  // // print_my_list(my_list);
  // // printf("my_list length = %d\n", len);

  // // len = get_length(my_empty_list);
  // // printf("empty_list length = %d\n", len);
  // // printf("\n");

  
  
  // // print_list(my_list);


  // // // TEST DELETE_LIST

  // // printf("\n\n\ndeleting an empty list...\n\n\n");
  // // my_list = delete_list(NULL);
  // // print_list(my_list);

  // print_list(my_list);
  // printf("\n\n\ndeleting my list...\n\n\n");
  // my_list_shortened = NULL;
  // my_list_shortened = delete_list(my_list);
  // printf("\n");
  // print_list(my_list_shortened);

  // printf("\n");
  // printf("\n");
  // printf("\n");

  // one_node_list = node1;
  // print_list(one_node_list);
  // printf("\n\n\ndeleting my 1 node list...\n\n\n");
  // one_node_list = node1;
  // result = delete_list(one_node_list); // TODO
  // printf("\n");
  // printf("result = %p\n", result);
  // print_list(result);



  // // TEST swap


  // // // TEST RETRIEVE
  // // result = retrieve_nth(my_list, 2);
  // // print_node(result);
  // // printf("\n");

  // // result = retrieve_nth(NULL, 2);
  // // print_node(result);

  // // // TEST INSERT NTH
  // // my_list = prepend_node(node4, node3); 
  // // my_list = prepend_node(my_list, node2); // 2,3,4
  // // printf("\n\n\n inserting at 1...\n\n\n");
  // // result = insert_nth(my_list, node1, 1);
  // // print_list(result); // 1,2,3,4

  // // my_list = prepend_node(node4, node3); 
  // // print_list(my_list);
  // // my_list = prepend_node(my_list, node1); // 1,3,4
  // // printf("\n\n\n inserting at 2...\n\n\n");
  // // result = insert_nth(my_list, node2, 2);
  // // print_list(result);

  // // my_list = prepend_node(node3, node2);
  // // my_list = prepend_node(my_list, node1); // 1,2,3
  // // printf("\n\n\n inserting at 4...\n\n\n");
  // // result = insert_nth(my_list, node4, 4);
  // // print_list(result);

  // /* The system command forces the system to pause */
  // // system("pause");


  // delete_list(my_node);
  // delete_list(my_empty_list);
  // // delete_list(node1);
  // // delete_list(node2);
  // // delete_list(node3);
  // // delete_list(result);
  // // delete_list(my_list);
  // // delete_list(my_list_shortened);
  return 0;
}