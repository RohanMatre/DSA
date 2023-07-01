#include <iostream>
using namespace std;

int **create2DArray(int rows, int cols)
{
    int **arr = new int *[rows];
    // Allocate Memory for each Row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // Initialize the array with increasing list of no.s
    int value = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{
    // 2-D Dynamic Array
    int rows, cols;
    cin >> rows >> cols;

    int **arr = create2DArray(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}