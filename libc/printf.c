#include <stdio.h>
#include <stdarg.h>

int strlen(const char* str) 
{
	int len = 0;
	while (str[len]) {
		len++;
	}
	return len;
}

char *vprintf(char *restrict format, va_list args) {

}
