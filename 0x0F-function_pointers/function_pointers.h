#ifndef PROJECT_0x0F_FUNCTION_POINTERS_PROJECT_HEADER_FILE
#define PROJECT_0x0F_FUNCTION_POINTERS_PROJECT_HEADER_FILE
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
