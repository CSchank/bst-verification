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

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

TreeNodePtr create_node(int n){
	TreeNodePtr root = malloc(sizeof(struct tree_node));

	root->data = n;
	root->left = NULL;
	root->right = NULL;

	return root;
}

TreeNodePtr insert_node(TreeNodePtr root, int n){
	if(n < root->data){
		if (!(root -> left)){
			root->left = create_node(n);
		}else{
			insert_node(root->left, n);
		}
	} else{
		if (!(root -> right)){
			root->right = create_node(n);
		}else{
			insert_node(root->right, n);
		}
	}
	return root;
}

int verify_bst(TreeNodePtr root, int low, int high){
	if (root == NULL)
		return 1;
	if(root->data < high && root->data >= low)
		return 1 && verify_bst(root->left, low, root->data) && verify_bst(root->right, root->data, high);
	else 
		return 0;
}

void print_bst(TreeNodePtr root){
	if (root){
		print_bst(root->left);
		printf("%d ", root->data);
		print_bst(root->right);
	}
}