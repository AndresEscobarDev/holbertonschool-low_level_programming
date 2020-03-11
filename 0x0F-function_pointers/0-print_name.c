/**
 * print_name - function that prints a name.
 * @name: String of the name.
 * @f: Functions.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
