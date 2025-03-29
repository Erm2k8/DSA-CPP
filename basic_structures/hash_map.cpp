#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Defining the hash map
    // unordered_map<key, value> mapName;
    unordered_map<char, int> alfaNum = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
    };

    unordered_map<int, int> quadratic;
    quadratic[2] = 4;
    quadratic[3] = 9;
    quadratic[4] = 16;

    unordered_map<string, float> prices;
    prices.insert({"Item 1", 2.50});
    prices.insert({"Item 2", 5.00});
    prices.insert({"Item 3", 10.25});

    // Accessing keys and values
    for (auto& i: prices) {
        cout << i.first << " : " << i.second << endl;
    }
    cout << prices["Item 2"] << endl;    // 5

    // Deleting
    prices.erase("Item 2");     // Deletes 5.00

    // Check if contains
    if (prices.count("key")) {
        cout << "Prices contains key" << endl;
    } else {
        cout << "Prices don't contains key" << endl;
    }

    return 0;
}