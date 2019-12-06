#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_nodes - Counts nodes that have at least 1 child
 * @tree: Binary tree to count
 * Return: Number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}

	return (0);
=======
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: node pointer of root
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (0);

	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
>>>>>>> e3a71521067ea65e2124a6b2e796d48472677d7a
}
