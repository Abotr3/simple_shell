73% of storage used … If you run out, you won't have enough storage to create, edit, and upload files. Get 100 GB of storage for GH₵9.00 GH₵2.25/month for 3 months.
memory.c
#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
