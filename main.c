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
  node* my_node;
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

  printf("myplane.flight_number = %d\n", myplane.flight_number);
  printf("myplane.city_dest = %s\n", myplane.city_destination);
  printf("myplane.city_orig = %s\n", myplane.city_origin);
  printf("strlen(dest) = %d\n", strlen(myplane.city_destination));

  my_node = create_node(myplane);
  // printf("flight_number = %d\n", my_node->plane.flight_number);
  printf("origin = %s\n", my_node->plane.city_destination);
  // // printf("dest = %s\n", my_node->plane.city_destination);
  // // printf("next = %p\n", my_node->next);

  printf("\n");
  printf("before prepend...\n");
  printf("my_node->plane.city_destination = %s\n", my_node->plane.city_destination);
  printf("my_node->plane.flight_number = %d\n", my_node->plane.flight_number);

  airplane plane2 = {.flight_number = 2, 
                      .city_origin = "Calgary",
                      .city_destination = "Toronto",
                      .priority = 2,
                      .maximum_speed_kph = 2000,
                      .cruising_altitude = 40000,
                      .capacity = 40 };
  node* node2;
  node2 = create_node(plane2);
  printf("node2->plane.city_destination = %s\n", node2->plane.city_destination);
  printf("node2->plane.flight_number = %d\n", node2->plane.flight_number);

  node* my_list = prepend_node(my_node, node2);
  printf("after prepend\n");
  printf("first node dest = %s\n", my_list->plane.city_destination);
  printf("2nd node dest = %s\n", my_list->next->plane.city_destination);

  /* The system command forces the system to pause */
  // system("pause");
  return 0;
}