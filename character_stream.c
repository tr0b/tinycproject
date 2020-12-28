#include <stdio.h>

/* Copy input to output; Second version*/

main(){

	int c;
	/* We can assign values to variables during a while call, and at the same time, compare its (while) condition in order to
	 * break the loop. */
	while ((c=getchar())!=EOF) {

		putchar(c);
		/* Print 1 or 0 depending on c and EOF equality*/
		putchar((c==EOF?'1':'0'));
		/* Print value of EOF */
		printf("Value of EOF is: %d", EOF);
	}

}
