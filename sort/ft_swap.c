#include "sort.h"
#include "../memory/memory.h"

void	ft_swap(void *a, void *b, int size)
{
	char temp[size];

	ft_memcpy(temp, a, size);
	ft_memcpy(a, b, size);
	ft_memcpy(b, temp, size);
}