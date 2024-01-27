#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 *
 * Description: Deletes a binary tree recursively using post-order traversal.
 *              If the tree is NULL, do nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);

    binary_tree_delete(tree->right);

    free(tree);
}
