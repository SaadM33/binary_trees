#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
*
* @parent: A pointer to the parent of the node.
* @value: The value to be puted on the new node.
*
* Return: If it fails - NULL,  else - a pointer to the new node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;
	return (new_node);

}
