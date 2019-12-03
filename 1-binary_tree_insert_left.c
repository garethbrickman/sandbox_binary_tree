#include "binary_trees.h"
/**
 *  binary_tree_insert_left - Function inserts a node as left-child
 *
 * @parent: ptr to parent node
 * @value: value for node
 *
 * Return: ptr to new node, or NULL on failure or NULL parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	while (parent)
	{
		binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
		binary_tree_t *oldnode = malloc(sizeof(binary_tree_t));

		if (newnode == NULL)
			return (NULL);

		newnode->n = value;

		if (parent->left)
		{
			oldnode = parent->left;
			newnode->parent = oldnode->parent;
			oldnode->parent->left = newnode;
			newnode->left = oldnode;
			oldnode->parent = newnode;
			newnode->right = NULL;
			return (newnode);
		}
		else
		{
			parent->left = newnode;
			newnode->parent = parent;
			newnode->right = NULL;
			newnode->left = NULL;
			return (newnode);
		}
	}
	return (NULL);
}
