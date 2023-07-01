// BST Creation
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    // Base Case
    if (root == NULL)
    {
        return new Node(key);
    }
    // Rec Case
    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}
// T.C. :- O(H)   ------> Log N≤H≤N (V.V.V. Imp)
bool search(Node *root, int key)
{
    // H.w.
    if (root == NULL)
    {
        return false;
    }
    if (root->key == key)
    {
        return true;
    }

    if (key < root->key)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Left,Root,Right
    printInOrder(root->left);
    cout << root->key << ",";
    printInOrder(root->right);
}

Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// BST Deletion
Node *remove(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // when the current Node Matches with the key
        // Case - 1 : No Children
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
            return root;
        }
        // Case - 2 : 1 Children
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // Case - 3 : 2 Children(Tricky)
        else
        {
            Node *temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    return root;
}

// Challenge : Print all elements of BST which lie in the Range k1 and k2
void printRange(Node *root, int k1, int k2)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    if (root->key >= k1 and root->key <= k2)
    {
        // Call on Both Side
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    }
    else if (root->key > k2)
    {
        printRange(root->left, k1, k2);
    }
    else
    {
        printRange(root->right, k1, k2);
    }
}

void printRoot2LeafPaths(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        // Print the vector
        for (int node : path)
        {
            cout << node << "->";
        }
        cout << root->key << "->";
        cout << endl;
        return;
    }

    // Rec Case
    path.push_back(root->key);
    printRoot2LeafPaths(root->left, path);
    printRoot2LeafPaths(root->right, path);
    // Backtracking
    path.pop_back();
    return;
}
int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 7, 13};

    for (int x : arr)
    {
        root = insert(root, x);
    }
    printInOrder(root);
    cout << endl;
    int key;
    // cin >> key;
    // root = remove(root, key);
    //  cout << search(root, key) << endl;
    // printInOrder(root);
    cout << "Range is : ";
    printRange(root, 5, 12);
    cout << endl;

    vector<int> path;
    printRoot2LeafPaths(root, path);
    return 0;
}