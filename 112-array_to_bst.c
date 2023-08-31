#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t c, d;

	if (array == NULL)
		return (NULL);

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < c; d++)
		{
			if (array[d] == array[c])
				break;
		}
		if (d == c)
		{
			if (bst_insert(&tree, array[c]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

