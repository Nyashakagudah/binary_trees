#include "binary_trees.h"

/**
 * binary_tree_size - Measure size of binary tree
 * @tree: Pointer to  root node of the tree to measure the size
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}