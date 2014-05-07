#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

#define SIZE 10
#define RANGE 10

int main(int argc, char *argv[]) 
{
	/* create vector */
	int *random_vector;
	random_vector = createRandomVector(SIZE, RANGE);
	
	/* step through created vector, print to stdout */
	stepThroughVector(random_vector, SIZE);
	
	return 0;
}
