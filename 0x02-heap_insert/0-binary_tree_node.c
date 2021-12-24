#include "binary_trees.h"

/**
 * heap_insert - Creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * 
 * @value:  Value to put in the new node
 * 
 * Return: A tree with max heap ordering
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}