#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
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
			if (avl_insert(&tree, array[c]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

