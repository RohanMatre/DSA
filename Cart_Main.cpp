#include <iostream>
#include <vector>
#include <string>
#include "DataModel.h"
using namespace std;

vector<Product> allProducts = {
    Product(1, "Apple", 26),
    Product(2, "Mango", 16),
    Product(3, "Guava", 36),
    Product(4, "Banana", 56),
    Product(5, "Strawberry", 29),
    Product(6, "Pineapple", 20),
};

Product *chooseProduct()
{
    // Display the List of Products
    string productList;
    cout << "Available Products " << endl;

    for (auto product : allProducts)
    {
        productList.append(product.getDisplayName());
    }
    cout << productList << endl;

    cout << "-----------------------" << endl;
    string choice;
    cin >> choice;

    for (int i = 0; i < allProducts.size(); i++)
    {
        if (allProducts[i].getShortName() == choice)
        {
            return &allProducts[i];
        }
    }
    cout << "Product Not Found!" << endl;
    return NULL;
}
bool checkout(Cart &cart)
{
    if (cart.isEmpty())
    {
        return false;
    }

    int total = cart.getTotal();
    cout << "Pay in Cash :";

    int paid;
    cin >> paid;

    if (paid >= total)
    {
        cout << "Change " << paid - total << endl;
        cout << "Thank you for shopping with us!!!" << endl;
        return true;
    }
    else
    {
        cout << "Not enough Cash!";
        return false;
    }
}

int main()
{

    char action;
    Cart cart;

    while (true)
    {
        cout << "Select an action : (a)dd items, (v)iew cart, (c)heckout" << endl;
        cin >> action;

        if (action == 'a')
        {
            // Todo : Add to Cart
            // view All Products + Choose Product + Add to the Cart
            Product *product = chooseProduct();
            if (product != NULL)
            {
                cout << "Added to the Cart " << product->getDisplayName() << endl;
                cart.addProduct(*product);
            }
        }
        else if (action == 'v')
        {
            // view the Cart
            cout << "-------------------" << endl;
            cout << cart.viewCart();
            cout << "-------------------" << endl;
        }
        else
        {
            // checkout
            cart.viewCart();
            if (checkout(cart))
            {
                break;
                cout << endl;
            }
        }
    }
    return 0;
}