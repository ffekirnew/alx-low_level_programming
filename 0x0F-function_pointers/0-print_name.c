/**
 * print_name - prints a string by using
 * the inclosed function's capabilities
 * @name: the string
 * @f: the function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
