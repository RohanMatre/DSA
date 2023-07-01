// Code Demo &  Getters and Setters and Constructor
#include <iostream>
using namespace std;

// Product (Shopping Website)
class product
{
private: // By default Data Member are Private
    int id;
    char name[100];
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
        strcpy(name, n);
    }
    // Cpoy Constructor
     product(product &X)
     {
         // Create to the Copy
         id = X.id;
          strcpy(name,X.name); // Array
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
};

int main()
{
    product camera(101, "GoProHero9", 28000, 26000); // Here Camera is the Object that u have Created Rn.
    // camera.showDetails();

    // Copy is Made using a Special Constuctor -> Copy Constructor
    product webcam(camera);
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
    // cout << "Selling price :" << camera.getSellingPrice() << endl;
    return 0;
}