#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the another node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the another node.
 *
 * Description: If parent already has a left-child, the another node
 *              takes its place and the old left-child is set as
 *              the left-child of the another node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *another;

	if (parent == NULL)
		return (NULL);

	another = binary_tree_node(parent, value);
	if (another == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		another->left = parent->left;
		parent->left->parent = another;
	}
	parent->left = another;

	return (another);
}

