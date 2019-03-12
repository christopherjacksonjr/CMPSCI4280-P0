#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include"node.h"
#include"tree.h"

using namespace std;

/*Description: Function takes in file pointer and processes the files content - separating each word.
 *Parameters: File pointer.
 *Return: A node_t struct.
 ***********************************************/
struct node_t* buildTree(FILE *fp)
{
	//Variable declarations.
	char c;
	string word;
	struct node_t* root = NULL;

	//Processes files content.
	while((c = fgetc(fp)) != EOF)
       	{
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			word += c;
		}
		else
		{
			root = insert(root, word);
			word = "";
		}
     	}

	return root;
}

/*Desciption: Function takes in a string and uses it to create a temporary and sets the data with the string.
 *Parameters: A string.
 *Return: A node_t struct.
 ************************************************/
struct node_t* newNode(string data)
{
	//Creating a temporary node.
	node_t* temp = new node_t;
	
	//Setting the value of the node with the string.
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

/*Description: This function inserts nodes into the tree that was built.
 *Parameters: A node_t struct and string.
 *Return: A node_t struct.
 ****************************************************/
struct node_t* insert(struct node_t* node, string data)
{
	//Checks if node is empty.
	if(node == NULL) 
	{
		return newNode(data);
	}

	//Conditionals to decide where the node should be placed - left or right.
	if(data < node->data)
	{
		node->left = insert(node->left, data);
	}
	else if(data > node->data)
	{
		node->right = insert(node->right, data);
	}

	return node;
}

/*Description: This function takes root and prints preorder tree.
 *Parameters: root node.
 *Return: void.
 ************************************************/
void printPreorder(struct node_t* root)
{
	if(root != NULL)
	{
		cout << root->data << " \n";
		printPreorder(root->left);
		printPreorder(root->right);
	}
}

/*Description: This function takes root and prints inorder tree.
 *Parameters: root node.
 *Return: void.
 *************************************************/
void printInorder(struct node_t* root)
{
	if(root != NULL)
	{
		printInorder(root->left);
		cout << root->data << " \n";
		printInorder(root->right);
	}
}

/*Description: This function takes root and prints postorder tree.
 *Parameters: root node.
 *Return: void.
 *************************************************/
void printPostorder(struct node_t* root)
{
	if(root != NULL)
	{
		printPostorder(root->left);
		printPostorder(root->right);
		cout << root->data << " \n";
	}	
}
