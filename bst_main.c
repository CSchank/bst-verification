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
#include <limits.h>

#define N 10000

int main(){
	TreeNodePtr root = create_node(5);
	
	for(int i = 0; i < N; i++){
		insert_node(root, drand48()*255);
	}

	print_bst(root);
	printf("\n");

	int v = verify_bst(root, INT_MIN, INT_MAX);

	printf("Verification: %d\n", v);

	return 0;
}