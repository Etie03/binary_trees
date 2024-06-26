#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: input array
 * @size: size of array
 * Return: pointer to the root node of the created Binary Heap,
 * or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t m = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (m < size)
	{
		heap_insert(&root, array[m]);
		m++;
	}
	return (root);
}
