#include "binary_trees.h"

/**
* binary_tree_insert_left-Inserts new node as left child of another node
* @parent: Pointer to the parent node where the new node will be inserted
* @value: Value to initialize in the new node
*
* Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
