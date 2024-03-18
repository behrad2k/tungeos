
#include <stdio.h>

void kernel_main(void) 
{
	terminal_initialize();
	puts("Hello, kernel World!\n test\n");
	printf("hi %s, test %d", "100", 100); // test
}
