#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as right child of given parent
 * @parent: Pointer to parent node to insert right child under
 * @value: Value to store in new node
 *
 * Description: Creates a new binary tree node with the given value and
 * inserts it as the right child of the parent node. Updates pointers
 * accordingly to maintain tree structure.
 *
 * Return: Pointer to new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
