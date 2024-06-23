#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node, or NULL if node is NULL or the parent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return NULL;

    if (node->parent->left == node)
        return node->parent->right;

    return node->parent->left;
}
