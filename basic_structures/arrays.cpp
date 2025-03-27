#include <iostream>
#include <string>

using namespace std;

template <typename T, size_t N>
void printAllItemsOnArray(T (&arr)[N]) {
    int length = size(arr);

    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Initializing the array
    // type arr[] = {item1, item2, item3, ...};
    int fibo[] = {1, 1, 2, 3, 5, 8, 13, 21};
    string cars[] = {"Fiat", "Mustang", "BMW"};


    // accessing data
    // array[i]
    fibo[5];    // 8
    cars[2];    // BMW
    

    // multidimensional arrays
    // type arr[i_size][j_size] = {
    //     {item_00, item01, ..., item 0j},
    //     {item_10, item01, ..., item 0j}
    //     {...}
    //     {item_i0, itemi1, ..., item ij}
    // };
    int matrix[3][3] = {
        {1, 2 ,3},
        {4, 5, 6},
        {7, 8, 9}
    };
    matrix[1][2]; // 6
    matrix[0][0]; // 1
    matrix[2][2]; // 9

    printAllItemsOnArray(fibo);

    return 0;
}