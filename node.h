#ifndef NODE_H
#define NODE_H

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include"tree.h"
#include<set>

using namespace std;

//Declaration fot node struct.
struct node_t
{
	string data;
	struct node_t* left;
	struct node_t* right;
};

#endif
