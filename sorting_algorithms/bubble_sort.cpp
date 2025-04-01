#include <iostream>
#include <algorithm>

using namespace std;

int* bubbleSort(int* list, int size) {
    // Space = O(1)
    // Time = O(n²)

    bool swapped;

    for (int j = 0; j < size - 1; j++) {
        swapped = false;

        for (int i = 0; i < size - 1 ; i++) {
            if (list[i] > list[i+1]) {
                int temp = list[i];
                list[i] = list[i+1];
                list[i + 1] = temp;
                
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    return list;
}

int main() {
    const int size1 = 5;
    int list1[size1] = {9, 4, 1, 6, 0};
    
    int* new_list = bubbleSort(list1, size1); 

    for (int n = 0; n < size1; n++) {
        cout << new_list[n] << " ";
    }

    return 0;
}