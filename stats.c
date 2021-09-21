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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Pawel Kania
 * @date 21.09.2021 
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)

int main(void) {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /*_______________ Other Variable Declarations Go Here_________________*/

  int length;

  /*_____________Statistics and Printing Functions Go Here_____________*/
 
  printf("Enter array length:");
  scanf("%d", &length);
 
  void swap_elements(unsigned char  *a, unsigned char *b) //swapping function based on the same type as array
  {
	int  n;
	n = *a;
	*a = *b;
	*b = n;
  }
 
  void sort_array(unsigned char test[], int length)
  {
	for(int i = 0; i < length-1; i++)
	{	
		for(int j = 0; j < length - i - 1; j++) 
		{	
			if(test[j] > test[j+1])
			{
				swap_elements(&test[j], &test[j+1]);
			}
		}	
	}
  }

  void find_median()
  {
	  int c = test[0];
	  int d = test[length];
	  int n = (c+d)/2;
	
	printf("Median of array: %d \n", n);
  }

  void  find_mean()
  {
	int sum = 0;
  	int i;
      	for(i=0; i < length; i++)
	{
		sum += test[i];
	}
	int mean = sum/i;

	printf("Mean of array: %d \n", mean);

  }

  void  find_minimum()
  {
	sort_array(test, length);
	int minimum = test[0];
	printf("Minimum of array: %d \n", minimum);

  }

  void find_maximum(unsigned char test[], int length)
  {
	  int i, maximum = test[0];
	for(i = 0; i < length; i++)
	{
		if(test[i]>maximum)
		{
			maximum = test[i];
		}
	}
	printf("Maximum of array: %d \n", maximum);
  }

  void  print_array()
  {

	for(int i=0; i<length; i++)
	{
		printf("%d ", test[i]);
	}
	printf("\n");
  }


  void  print_statistics()
  {
	printf("This is your selected array:\n");
	print_array();
	printf("This is your array sorted:\n");
	sort_array(test, length);
	print_array();
	find_median();
	find_mean();
 	find_minimum();
	find_maximum(test, length);
  }

print_statistics();


}







/* Add other Implementation File Code Here */
