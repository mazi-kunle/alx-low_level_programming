#include "lists.h"
#include <stdio.h>
/**
 * before_main- a function that runs before the main function.
 *
*/

void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
