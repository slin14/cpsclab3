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

// gcc main.c linkedlist.c linkedlist.h -o lab3
// valgrind ./lab3 --leak-check=full
// valgrind ./lab3 --leak-check=full > valgrind.rpt 2>&1

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

// void print_my_list(node* list) {
//   if (list == NULL) {
//     return;
//   }

//   node* temp = list;
//   printf("flight_num = %d\n", temp->plane.flight_number);
//   printf("city_dest = %s\n", temp->plane.city_destination);
//   printf("city_orig = %s\n", temp->plane.city_origin);
//   printf("\n");
  
//   while(temp->next != NULL) {
//     temp = temp->next;
//     printf("flight_num = %d\n", temp->plane.flight_number);
//     printf("city_dest = %s\n", temp->plane.city_destination);
//     printf("city_orig = %s\n", temp->plane.city_origin);
//     printf("\n");
//   }
//   printf("\n\n");
// }

// swaps the nodes from the front to the node just before node x with node x
// eg. 1 2 3 X 4 5
// result: node x, followed by the nodes originally at the front to the node just before node x
// return: the new front of the list
// eg. X 1 2 3 4 5
// returns 
// node* swap (node* front, node* x) {
//   // find the node just before node x (OR just let node y equal the node after node x and pass in node y)
// }

int main(void)
{
  // airplane test_airplane_one = { 100, "Vancouver", "Toronto", 1, 900, 36000, 350 };
	// 		airplane test_airplane_two = { 200, "Toronto", "Halifax", 2, 800, 26000, 280 };
	// 		airplane test_airplane_three = { 300, "Calgary", "Halifax", 3, 700, 30000, 200 };
	// 		node* test_node_one = create_node(test_airplane_one);
	// 		node* test_node_two = create_node(test_airplane_two);
	// 		node* test_node_three = create_node(test_airplane_three);
	// 		node* test_list = create_linked_list();
	// 		test_list = prepend_node(test_list, test_node_one);
	// 		test_list = prepend_node(test_list, test_node_two);
	// 		test_list = prepend_node(test_list, test_node_three);
  //     printf("before reverse\n");
  //     print_list(test_list);
	// 		test_list = reverse(test_list);
  //     printf("\n\nafter reverse\n");
  //     print_list(test_list);
  //     printf("100? %d\n", test_list->plane.flight_number);
  //     printf("0? %d\n", strcmp("Vancouver", test_list->plane.city_origin));
	// 		printf("0? %d\n", strcmp("Toronto", test_list->plane.city_destination));
	// 		printf("1? %d\n", test_list->plane.priority);
	// 		printf("900? %d\n", test_list->plane.maximum_speed_kph);
	// 		printf("36000? %d\n", test_list->plane.cruising_altitude);
	// 		printf("350? %d\n", test_list->plane.capacity);
	// 		printf("%d? %d\n", (int)test_node_two, (int)test_list->next); // TODO: fix
  
  node* node1;
  node* node2;
  node* node3;
  node* node4;
  node* result;
  
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

  result = prepend_node(node4, node3);
  result = prepend_node(result, node2);
  result = prepend_node(result, node1);

  result = reverse(result);
  print_list(result);

  // delete_node(node1);
  // delete_node(node2);
  // delete_node(node3);
  // delete_node(node4);
  
  delete_list(result);

  return 0;
}