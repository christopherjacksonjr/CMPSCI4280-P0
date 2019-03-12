#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include"node.h"
#ifndef TREE_H
#define TREE_H

using namespace std;

//Function declarations.
struct node_t* buildTree(FILE *fp);
struct node_t* newNode(string data);
struct node_t* insert(struct node_t* node, string data);
void printPreorder(struct node_t* root);
void printInorder(struct node_t* root);
void printPostorder(struct node_t* root);

#endif
