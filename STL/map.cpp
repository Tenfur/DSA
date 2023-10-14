#include <iostream>
#include <map>
using namespace std;


int main() {
    // Map is an associative container that store elements with keys and values

    // Create a map
    map<string, int> mapElements;

    // Insert elements - First form
    mapElements["one"] = 1;
    mapElements["two"] = 2;
    mapElements["three"] = 3;
    
    // Insert elements - More forms to do it
    mapElements.insert(pair<string, int>("four", 4)); // Is a constructor for creating a pair object
    mapElements.insert(make_pair("five", 5)); // Deduce the data types
    mapElements.insert_or_assign("six", 6); // Updates the value if the key exists in the map


    // Iterate trough the map
    map<string, int>::iterator it = mapElements.begin();

    // Find an element
    // mapElements.find("five") -> If the find doesn't match the element, will return .end() 


    while (it != mapElements.end()) { // end() returns an iterator to the element that follows the last element in the map
        cout << "Key: " << it->first << endl;
        cout << "Value: " << it->second << endl << endl;
        it++;
    }


    return 0;
}
