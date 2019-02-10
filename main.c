#include<stdio.h>
//#include "node.h"
//#include "traversals.h"
//#include "buildTree.h"


int main(int argc, char* argv[]) 
{
	//process command line arguments and make sure file is readable, error otherwise.
  	if(argc == 2)
	{
		//Setting variables.
		FILE *fp;
		char *filename = argv[1];
		char c;

		//Opening file & error checking.
		fp = fopen(filename, "r");
		if(fp == NULL)
		{
			printf("Could not open file %s.\n", filename);
			return 1;
		}
		
		printf("%s\n", filename);
		while((c = fgetc(fp)) != EOF)
		{
			printf("%c", c);
		}

		fclose(fp);
	}
	//set up keyboard processing so that below the input is not relevant
	if(argc < 2)
	{
		char c;
		char *str;
			
		while(scanf("%c", &c) && c != '\n')
		{
			//*str = c;
			printf("%c", c);
		}
		//printf"%s", str);
		printf("\n");
	}
	//node_t *root = buildTree(file);
	//traversalPreorder(root);
	//traversalInorder(root);
	//traversalPostorder(root);
	//printf("Hello world!\n");
	
	return 0;
}
