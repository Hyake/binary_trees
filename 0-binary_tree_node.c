#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the another node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the another node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *another;

	another = malloc(sizeof(binary_tree_t));
	if (another == NULL)
		return (NULL);

	another->n = value;
	another->parent = parent;
	another->left = NULL;
	another->right = NULL;

	return (another);
}

