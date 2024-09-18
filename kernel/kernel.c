
#include <stdio.h>

void kernel_main(void) 
{
	terminal_initialize();
	update_cursor(0, 0);
	printf("Hello, kernel World!\n");
}
