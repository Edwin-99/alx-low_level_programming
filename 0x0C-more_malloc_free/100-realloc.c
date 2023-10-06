#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: If new_size > old_size, initializes the new memory to 0.
 *         If new_size == old_size, returns ptr.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If new_size == 0 and ptr is not NULL, equivalent to free(ptr).
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *nptr;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
    {
        nptr = malloc(new_size);

        if (nptr == NULL)
            return (NULL);

        return (nptr);
    }
    else
    {
        if (new_size == 0)
        {
            free(ptr);
            return (NULL);
        }
    }

    nptr = malloc(new_size);

    if (nptr == NULL)
        return (NULL);

    for (i = 0; i < old_size && i < new_size; i++)
    {
        nptr[i] = ((char *)ptr)[i];
    }

    free(ptr);
    return (nptr);
}
