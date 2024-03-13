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

static char* itoa(int i) {
    if(i == 0) {
        return "0";
    }
    static char output[24];  // 64-bit MAX_INT is 20 digits
    char* p = &output[23];
    for(*p--=0;i;i/=10) *p--=i%10+0x30; 
    return ++p;    
}
static char* ltoa(long i) {
    if(i == 0) {
        return "0";
    }
    static char output[24];  // 64-bit MAX_INT is 20 digits
    char* p = &output[23];
    for(*p--=0;i;i/=10) *p--=i%10+0x30; 
    return ++p;    
}

int printf(const char *restrict format, ...) {
	va_list ap;
	va_start(format, ap);
	for (int i = 0; i < strlen(format); i++) {
		if (format[i] == '%') {
			if (format[i+1] == 'd') {
				puts(itoa(va_arg(ap, int)));
			}
		} else {
			puts((const char *)format[i]);
		}
	}
	return 0;
}