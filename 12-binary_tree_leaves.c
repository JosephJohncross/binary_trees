#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number
 * of leaves
 *
 * Return: the number of leaves in the binary tree
 * 0 is returned if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		leaves_count = (1 + binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
	}
	else
	{
		leaves_count = (0 + binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
	}

	return (leaves_count);
}
