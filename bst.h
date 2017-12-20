/*
 * Simple example of binary search tree creation and verification using C.
 *
 * Author: Christopher W. Schankula
 * Last updated: December 19th, 2017
 * Code is licensed under the CC BY 4.0 license.
 *
 * THE CODE PROVIDED HEREIN IS PROVIDED "AS-IS"
 * THE AUTHOR ASSUMES NO RESPONSBILITY OR WARRANTY
 * FOR USE OF THE CODE PROVIDED HEREIN
 * EXTENSIVE TESTING OF THIS CODE IS REQUIRED
 * TO ENSURE ITS CORRECTNESS AS PART OF THE INTENDED
 * APPLICATION THEREOF
 */

struct tree_node {
	int data;
	struct tree_node *left;
	struct tree_node *right;
};

typedef struct tree_node *TreeNodePtr;
TreeNodePtr create_node(int n);
TreeNodePtr insert_node(TreeNodePtr root, int n);
void print_bst(TreeNodePtr root);
int verify_bst(TreeNodePtr root, int low, int high);