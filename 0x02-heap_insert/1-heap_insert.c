#include "binary_trees.h"

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *node, *parent;

	/* For an empty tree, create nodes and return tree pointer to tree */
	if (*root == NULL)
	{
		node = binary_tree_node(*root, value);
		*root = node;
		return (*root);
	}
	node = *root;

	/* Traverse tree */
	while (node != NULL)
	{
		parent = node;
		/* Ignore duplicates */
		if (node->n == value){
            	while (node && node->parent)
                    {
                        while (node->n > node->parent->n)
                        {
                            node = node->parent;
                            node->n += node->parent->n;
                            node->parent->n -= node->n;
                            node->parent->n = node->n - node->parent->n;
                        }
                    }
        }
			

		/* Sort tree into BST formation */
		if (value > node->n)
			node = parent->left;
		else
			node = node->right;
	}

	/* Sort parent nodes */
	if (value > parent->n)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
}
