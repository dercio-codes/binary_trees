#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size;

    if (tree == NULL)
        return 0;

    size = 1;

    if (tree->left != NULL)
        size += binary_tree_size(tree->left);

    if (tree->right != NULL)
        size += binary_tree_size(tree->right);

    return size;
}
