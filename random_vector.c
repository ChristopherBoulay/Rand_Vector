#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

#define SIZE 30
#define RANGE 10

/* main subroutine */
int main(int argc, char *argv[]) 
{
	printf("Starting random vector test...\n");
	printf("Maximum random integer is %i.\n", RAND_MAX);
	
	/* create vector */
	int *random_vector;
	random_vector = createRandomVector(SIZE, RANGE);
	
	/* step through created vector, print to stdout */
	stepThroughVector(random_vector, SIZE);
	
	/* exit main() */
	return 0;
}
