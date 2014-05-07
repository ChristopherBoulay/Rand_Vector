#ifndef VECTOR_H

/* create vector of random positive integers of length n */
int *createRandomVector(int size, int range)
{
	printf("createRandomVector() called...\n");

	int *output = malloc(sizeof(int[size]));
	for (int i = 0; i < size; i++)
		output[i] = rand() % range;/**/
	
	return output;
}

/* print components of vector to command line */
void stepThroughVector(int *vector, int size)
{
	printf("Stepping through vector...\n");
	for (int i = 0; i < size; i++)
		printf("%i\n", vector[i]);
}

#endif
