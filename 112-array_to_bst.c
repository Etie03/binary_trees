#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: input array
 * @size: size of array
 * Return: pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t m = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (m < size)
	{
		bst_insert(&root, array[m]);
		m++;
	}
	return (root);
}
