#include "binary_tree.h"

/**
 * @binary_tree_node - creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: if an error occurs - NULL
 *         otherwise - a pointer to the new node.
 */
 binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
    return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;

return (new);
}