
#include <stdio.h>

void kernel_main(void)
{
	int i;
	asm("\t movl %%cr0,%0" : "=r"(i));
	terminal_initialize();
	update_cursor(0, 0);
	printf(" ___ _,_ _, _  _, __,  _,  _,\n\
  |  | | |\\ | / _ |_  / \\ (_ \n\
  |  | | | \\| \\ / |   \\ / , )\n\
  ~  `~' ~  ~  ~  ~~~  ~   ~   \n\
	");
}
