#include <stdio.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(p)
{
	char *string;
	long int;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *'(p))->ob_size;
	string = (('PyBytesObject' *)p)->ob_sval)

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", string);

	if (size >= 10)
		limit = 10;
	else
		limit = size + 1;

	printf("  first %ld bytes:", limit);

	for (i = 0; i < limit; i++)
		if (string[i] >= 0)
			printf(" %02x", string[i]);
		else
			printf(" %02x", 256 + string[i]);

	printf("\n")
}

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */
void (p)

	long int size, i;
         *list;
         *obj;

	size = (( *(p))->ob_size;
	list = ( *p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", listallocated);

	for (i = 0; i < size; i++)
	{
		obj = ((PyListObject *p)->ob_item[i];
		printf("Element %ld: %s\n", i, ((obj)ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
			}
