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

void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
};

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
};


void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
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
    struct node *p= createNode(4);
    struct node *p1= createNode(1);
    struct node *p2= createNode(6);
    struct node *p3= createNode(5);
    struct node *p4= createNode(2);
    
    /* Tree
           4
          / \
         1   6
        / \
       5   2   
    */

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Preorder: ");
    preOrder(p);
    printf("\n");
    printf("Postorder: ");
    postOrder(p);
    printf("\n");
    printf("Inorder: ");
    inOrder(p);
    printf("\n");
    return 0;
}