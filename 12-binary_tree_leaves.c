#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the lves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the lves of.
 *
 * Return: The number of lves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lves = 0;

	if (tree)
	{
		lves += (!tree->left && !tree->right) ? 1 : 0;
		lves += binary_tree_leaves(tree->left);
		lves += binary_tree_leaves(tree->right);
	}
	return (lves);
}

