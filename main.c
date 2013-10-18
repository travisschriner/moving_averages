#include <msp430.h> 
#include "avg.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    int sampleArray[] = {45, 42, 41, 40, 43, 45, 46, 47, 49, 45};

    int arrayLength = 10;

    int array[2];
    int i;
    array[0] = 0;

    for (i=0; i <arrayLength; i++){
    	array[1] = sampleArray[i];

    	getAverage(array, 2);

    	array[0] = array[1];

    }

	return 0;
}
