/*
 * avg.c
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Travis.Schriner
 */

// Moving average functions
int getAverage(int array[], unsigned int arrayLength){

	int sample = 0;
	int x;
	for(x = 0; x<arrayLength; x++){
		sample += array[x];
	}
	return sample/arrayLength;
}

// Array functions
int max(int array[], unsigned int arrayLength){
	char max;
	max = array[0];

	char x;
	for (x = 1; x < arrayLength; x++){
		if(array[x] > max){
			max = array[x];
		}
	}

	return max;
}



int min(int array[], unsigned int arrayLength){
	char min;
		min = array[0];

		char x;
		for (x = 1; x < arrayLength; x++){
			if(array[x] < min){
				min = array[x];
			}
		}

		return min;
}

unsigned int range(int array[], unsigned int arrayLength){

	int maximum;
	int minimum;

	minimum = min(array, arrayLength);

	maximum = max(array, arrayLength);

	return maximum-minimum;


}

