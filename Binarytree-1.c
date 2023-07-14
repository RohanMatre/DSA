// insert an element, delete an element and search an element in the Binary Search Tree(BST).

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    // Constructing th2 root node
    struct node *n;  // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node));  // Allocating memory in the heap
    n->data = data;  // Setting the data 
    n->left = NULL;  // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n;  // Finally Returning the created node 
};

int main()
{
    /*
    // Constructing thr first node
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing thr second node
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    */

    // Constructing thr root node using functions
    struct node *p= createNode(2);
    struct node *p1= createNode(1);
    struct node *p2= createNode(4);
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    
    return 0;
}