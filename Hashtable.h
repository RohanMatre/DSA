// File : Hashtable.h
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node
{
public:
    string key;
    T value;
    Node *next;

    Node(string key, T value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

template <typename T>
class Hashtable
{
    Node<T> **table;
    int cs; // Total Entries that have Been Inserted
    int ts; // Size of Table
    int hashFn(string key)
    {
        int idx = 0;
        int power = 1;
        for (auto ch : key)
        {
            idx = (idx + ch * power) % ts;
            power = (power * 29) % ts;
        }
        return idx;
    }

    void rehash()
    {
        // Save the ptr to the oldTable and we will do insertions in the new table
        Node<T> **oldTable = table;
        int oldTs = ts;

        // Increase the table size
        cs = 0;
        ts = 2 * ts + 1;
        table = new Node<T> *[ts]; // You should make it Prime Number

        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }

        // Copy elements from old table to New table
        for (int i = 0; i < oldTs; i++)
        {
            Node<T> *temp = oldTable[i];

            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;
                // Happen in the New Table
                insert(key, value);
                temp = temp->next;
            }
            // Destroy the ith Linked List
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    Hashtable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;

        table = new Node<T> *[ts];

        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, T val)
    {

        int idx = hashFn(key);

        Node<T> *n = new Node<T>(key, val);

        // Insertion at head of the Linked List -->O(1)
        n->next = table[idx];
        table[idx] = n;

        cs++;
        float load_factor = cs / float(ts);
        if (load_factor > 0.7)
        {
            rehash();
        }
    }
    // Method 2 : To Search I
    /*bool ispresent(){

    }
    T search(string key){
*/
    T *search(string key)
    {
        int idx = hashFn(key);

        Node<T> *temp = table[idx];

        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }

    // Homework - Code Exercise
    void erase(string key)
    {
        // Find the Bucket id
        // iterate over the Linked List
        // You Have to do
    }

    T &operator[](string key)
    {
        // return the Value (Returning a memory by Reference)
        // If key is not found then create a new Node and return
        // return the existing node
        T *valueFound = search(key);
        if (valueFound == NULL)
        {
            T object;
            insert(key, object);
            valueFound = search(key);
        }
        return *valueFound;
    }

    void print()
    {
        // Iterate Over Buckets
        for (int i = 0; i < ts; i++)
        {
            cout << "Bucket " << i << "->";

            Node<T> *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
/* Load Factor :-
It is a Matrix which Grow Up as per Requirement.
Ratio of cs/tso
*/
