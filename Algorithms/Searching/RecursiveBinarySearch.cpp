#include <iostream>
using namespace std;

int binarySearch(int elements[], int left, int right, int find) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (elements[mid] == find) {
            return mid;
        }
        else if (elements[mid] > find) {
            return binarySearch(elements, left, mid - 1, find);
        }
        else
            return binarySearch(elements, mid + 1, right, find);
    }
    else {
        return -1;
    }
}

int main() {
    int elements[] = { 16, 18, 20,22, 24,29 };
    int size = sizeof(elements) / sizeof(elements[0]);
    int find =  18;

    int index = binarySearch(elements, 0, size - 1, find);

    if (index != -1) cout << "Index: " << index << endl;
    else cout << "That element is not in the array" << endl;

    return 0;
}
