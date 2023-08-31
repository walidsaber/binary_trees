#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
/* task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *);
/* task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* task 3 */
void binary_tree_delete(binary_tree_t *tree);
/* task 4 */
int binary_tree_is_leaf(const binary_tree_t *node);
/* task 5 */
int binary_tree_is_root(const binary_tree_t *node);
/* task 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* task 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* task 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* task 9 */
size_t binary_tree_height(const binary_tree_t *tree);
/* task 10 */
size_t binary_tree_depth(const binary_tree_t *tree);
/* task 11 */
size_t binary_tree_size(const binary_tree_t *tree);
/* task 12 */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* task 13 */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* task 14 */
int binary_tree_balance(const binary_tree_t *tree);
/* task 15 */
int binary_tree_is_full(const binary_tree_t *tree);
/* task 16 */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* task 17 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* task 18 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif

