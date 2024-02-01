#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: the calculated size. If tree is NULL, 0 is returned
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size;

	if (tree == NULL)
		return (0);

	t_size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (t_size);
}
