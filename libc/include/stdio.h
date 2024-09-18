
#ifndef STDIO_H
#define STDIO_H
void puts(const char *string);
void putc(const char string);
void printf(const char *restrict format, ...);
void terminal_initialize();
#endif
