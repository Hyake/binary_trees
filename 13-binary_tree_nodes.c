#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nod with at least 1 child in a binary tree.
 * @tree: A pointer to the root nod of the tree to count the number of nod.
 *
 * Return: If tree is NULL, the function must return 0, else return nod count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nod = 0;

	if (tree)
	{
		nod += (tree->left || tree->right) ? 1 : 0;
		nod += binary_tree_nodes(tree->left);
		nod += binary_tree_nodes(tree->right);
	}
	return (nod);
}

