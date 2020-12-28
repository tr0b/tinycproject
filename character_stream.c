#include <stdio.h>

/* Copy input to output; First version*/

main(){

	int c;
	c=getchar();
	while (c!=EOF) {

		putchar(c);
		c=getchar();
	}
}
