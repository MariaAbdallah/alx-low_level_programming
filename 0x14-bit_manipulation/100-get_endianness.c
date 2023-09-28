#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 big, or 1 little
 */
int get_endianness(void)
{
	int no;

	no = 1;
	if (*(char *)&no == 1)
		return (1);
	else
		return (0);
}
