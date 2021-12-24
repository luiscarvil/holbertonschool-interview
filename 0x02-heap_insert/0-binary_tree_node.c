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
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){

    binary_tree_t *new = NULL;

    new = malloc(sizeof(binary_tree_t));
    if (!new){
    return (NULL);
    }
    new->parent = parent;
    new->n = value;
    new->left = NULL;
    new->right = NULL;

    return(new);
}