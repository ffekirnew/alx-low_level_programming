#!/usr/bin/python3

file_names = {
"_putchar": "int _putchar(char c){}",
"_islower": "int _islower(int c){}",
"_isalpha": "int _isalpha(int c){}",
"_abs": "int _abs(int n){}",
"_isupper": "int _isupper(int c){}",
"_isdigit": "int _isdigit(int c){}",
"_strlen": "int _strlen(char *s){}",
"_puts": "void _puts(char *s){}",
"_strcpy": "char *_strcpy(char *dest, char *src){}",
"_atoi": "int _atoi(char *s){}",
"_strcat": "char *_strcat(char *dest, char *src){}",
"_strncat": "char *_strncat(char *dest, char *src, int n){}",
"_strncpy": "char *_strncpy(char *dest, char *src, int n){}",
"_strcmp": "int _strcmp(char *s1, char *s2){}",
"_memset": "char *_memset(char *s, char b, unsigned int n){}",
"_memcpy": "char *_memcpy(char *dest, char *src, unsigned int n){}",
"_strchr": "char *_strchr(char *s, char c){}",
"_strspn": "unsigned int _strspn(char *s, char *accept){}",
"_strpbrk": "char *_strpbrk(char *s, char *accept){}",
"_strstr": "char *_strstr(char *haystack, char *needle){}",
}

for name, function in file_names.items():
	with open(f"{name}.c", mode='w') as file:
		file.write(f'#include "main.h"\n{function}')