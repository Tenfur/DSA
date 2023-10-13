#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    // Thins to consider when we are working with a vector
    // - 

    // Create a vector
    vector<int> numbers;

    // Add numbers to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Get size
    cout << "Size: " << numbers.size() << endl; // 5

    // Get first number 
    cout << "First element: " << numbers.front() << endl; // 10

    // Get last number
    cout << "Last element: " << numbers.back() << endl; // 50

    // Delete number by position
    numbers.erase(numbers.begin() + 2); // 30 -> [10, 20, 40, 50]

    // Insert number by position
    numbers.insert(numbers.begin() + 1, 15);// -> [10, 15, 20, 40, 50]

    // Remove last number
    numbers.pop_back(); // -> [10, 15, 20, 40]

    // Remove first number
    numbers.erase(numbers.begin()); // -> [15, 20, 40]

    // Print numbers
    cout << "\t Numbers" << endl;
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";
    cout << endl;

    // Clear vector
    numbers.clear(); // -> []

    vector<int> numbers2;

    numbers2.push_back(91);
    numbers2.push_back(34);
    numbers2.push_back(11);
    numbers2.push_back(555);
    numbers2.push_back(46);

    // Sort numbers
    sort(numbers2.begin(), numbers2.end());
    cout << "\t Sorted array" << endl;
    for (int i = 0; i < numbers2.size(); i++) cout << numbers2.at(i) << " ";

    cout << endl; 

    // Reverse numbers
    reverse(numbers2.begin(), numbers2.end());
    for (int i = 0; i < numbers2.size(); i++) cout << numbers2.at(i) << " ";

    return 0;
}
