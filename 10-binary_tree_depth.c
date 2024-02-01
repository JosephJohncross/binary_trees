#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a
 * binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: the calculated depth, if tree is NULL function returns 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
		return (depth);
	}
	return (0);
}
