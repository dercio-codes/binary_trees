#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if ((new_node = malloc(sizeof(binary_tree_t))) == NULL)
        return NULL;

    new_node->parent = parent;
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
