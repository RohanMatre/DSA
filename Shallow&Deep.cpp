// Shallow and Deep Copy

// Code Demo &  Getters and Setters and Constructor
#include <iostream>
#include <cstring>
using namespace std;

// Product (Shopping Website)
class product
{
private: // By default Data Member are Private
    int id;
    char *name;
    int mrp;
    int selling_price;
    // Constructor Overloading is done as Seen That When Two Constructor Has Same Name It is called as CO.
public:
    // Constructor
    product()
    {
        cout << "Inside Constructor" << endl;
    }
    // Parameterised Constructor
    product(int id, char *n, int mrp, int selling_price)
    {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n) + 1]; // Allocating the Memory
        strcpy(name, n);
    }
    // Copy Constructor
    product(product &X)
    {
        // Create to the Copy
        id = X.id;
        name = new char[strlen(X.name) + 1]; // Array
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    void operator=(product &X)
    {
        // Deep Copy Inside Copy Assignment
        id = X.id;
        name = new char[strlen(X.name) + 1]; // Array
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }
    // Setters
    void setMrp(int price)
    { // Void ma Je Lakhelu Hoie aene Methods Kehaay
        if (price > 0)
        {
            mrp = price;
        }
    }
    void setSellingPrice(int price)
    {
        // Addtional Checks
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }

    // Getters
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }
    void showDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "MRP : " << mrp << endl;

        cout << "--------------------------------------" << endl;
    }
    // Settler for Name
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    ~product()
    {
        cout << "Deleting the name" << name << endl;
        // This is Used to Delete the Internal Subarrays (TO made A Good Programmer if not handle Carefully then Memory Leak Will Be take Place and It is not recommeneded)
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
    }
};

int main()
{
    product camera(101, "GoProHero9", 28000, 26000); // Here Camera is the Object that u have Created Rn.
    product old_camera;                              // Constructor

    // old_camera.setSellingPrice(1000);
    old_camera = camera; // Copy Assignment Operator Being Called!!
    old_camera.setName("GoPro8Old");

    camera.showDetails();
    old_camera.showDetails();

    // Copy is Made using a Special Constuctor -> Copy Constructor
    product webcam(camera);

    /*
    product handycam = camera; // Call to the Copy Constructor
    handycam.setMrp(1000);
    camera.showDetails();
    webcam.showDetails();
    handycam.showDetails();
    // Selling_price <= mrp
    // camera.mrp = 100;
    // camera.selling_price = 200;
    // camera.setMrp(100);
    // camera.setSellingPrice(190);

    // cout << sizeof(camera) << endl;
    // cout << "MRP :" << camera.getMrp() << endl;
    // cout << "Selling price :" << camera.getSellingPrice() << endl;*/
    return 0;
}
