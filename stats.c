/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file for the C-programming code.
 *
 * This stats.c file is used for the implementation of the following functions:
 * 	1. main() - The main entry point for the program.
 * 	2. print_statistics() - A function that prints the statistics of an array incl. min., max., mean and median values.
 * 	3. print_array() - Given an array of data and a length, prints the array to the screen
 * 	4. find_median() - Given an array of data and a length, returns the median value
 * 	5. find_mean() - Given an array of data and a length, returns the mean value 
 * 	6. find_maximum() - Given an array of data and a length, returns the maximum value
 * 	7. find_minimum() - Given an array of data and a length, returns the minimum value
 * 	8. sort_array() - Given an array of data and a length, sorts the array from largest to smallest value;
 *  and the declaration as well as documentation is provided in the stats.h file.
 *
 * @author Moritz Knieling
 * @date 2020.04.13
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations*/
  /* Statistics and Printing Functions*/

  void print_statistics(unsigned char array_min, unsigned char array_max, unsigned char array_mean, unsigned char array_median){
    // function code
  }

  void print_array(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

  unsigned char find_median(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

  unsigned char find_mean(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

  unsigned char find_maximum(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

  unsigned char find_minimum(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

  unsigned char sort_array(unsigned char * ptr_array, unsigned int array_size){
    // function code
  }

}

/* Add other Implementation File Code Here */
