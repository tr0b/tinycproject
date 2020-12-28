#include <stdio.h>

#define LOWER 0 /* LOWER LIMIT */

#define UPPER 300 /* UPPER LIMIT */

#define STEP 20 /* increment size*/

/* Prints Fahrenheit-Celsius conversion table*/

main(){

	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{

		printf("%3d   %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}
