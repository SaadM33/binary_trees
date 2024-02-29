#include "binary_trees.h"

/**
* binary_tree_nodes - Counts nodes with at least one child in a binary tree.
*
* @tree: A pointer to the root node of the tree to count.
*
* Return: The number of nodes with at least one child, or 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t total_nodes = binary_tree_size(tree);

	size_t leaf_nodes = binary_tree_leaves(tree);

	return (total_nodes - leaf_nodes);
}
