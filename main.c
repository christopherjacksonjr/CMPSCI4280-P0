#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<fstream>
#include"node.h"
#include"tree.h"

using namespace std;

int main(int argc, char* argv[]) 
{
	//Setting variables.
	FILE *fp;

	//process command line arguments and make sure file is readable, error otherwise.
  	if(argc == 2)
	{
		//Setting variables.
		char* filename = argv[1];

		//Opening file & error checking.
		fp = fopen(filename, "r");

		if(fp == NULL)
		{
			printf("Could not open file %s.\n", filename);
			return 1;
		}
		else
		{	
			//Passing file to buildTree function.
			node_t *root = buildTree(fp);

			//Printing each tree traversal: preorder, inorder, and postorder.
			printf("Preorder\n");
			printPreorder(root);
			printf("\n\nInorder\n");
			printInorder(root);
			printf("\n\nPostorder\n");
			printPostorder(root);
		}

		fclose(fp);
	}

	//set up keyboard processing so that below the input is not relevant
	if(argc < 2)
	{
		//Setting fp for stin keyboard entry.
		fp = stdin;

		//Passing file to buildTree function.
		node_t *root = buildTree(fp);

		//Printing each tree traveral: preorder, inorder, and postorder.
		printf("Preorder\n");
                printPreorder(root);
                printf("\n\nInorder\n");
                printInorder(root);
                printf("\n\nPostorder\n");
                printPostorder(root);
	}
	
	return 0;
}
