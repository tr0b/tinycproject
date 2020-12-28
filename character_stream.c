#include <stdio.h>

/* Copy input to output; Second version*/

main(){

	int c;
	/* We can assign values to variables during a while call, and at the same time, compare its (while) condition in order to
	 * break the loop. */
	while ((c=getchar())!=EOF) {

		putchar(c);
	}
}
