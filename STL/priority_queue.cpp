#include <iostream>
#include <queue>

using namespace std;

int main() {
    // A priority queue is a data structure designed such that the first element of the queue is 
    // either the greatest or the smallest of all elements in the queue and the rest of elements
    // are in non-increasing or non-decreasing order

    // By the default, the top element is the greatest (Max Heap). We can also change it to the smallest element at the top
    // Priority queues are built on the top of the mas heap and use an array or vector as an internal structure
    // In few words, STL priority queue is the implementation of Heap Data Structure

    priority_queue<int> pq;

    int arr[6] = { 101,23,203,54,18,89 };

    for(auto element: arr){
        pq.push(element);
    }

    cout << "Priority Queue (Max Heap): " << endl;
    
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    // How can we create a min heap for the priority queue?
    // We need to pass an extra parameter
    int arr2[6] = { 19,1,64,3,100, 12 };
    priority_queue<int, vector<int>, greater<int>> gq(arr2, arr2 + 6);;
    // First parameter -> Data type
    // Second parameter -> Specifies the container used to store the elements in the priority queue
    // Third parameter -> Is a comparison function that specifies how elements are to be ordered, in this case will be an 
    // ascending order
    //(arr2, arr2 + 6) -> arr2 is an iterator pointing to the beginning of the array
    // arr2 + 6 is an iterator pointing to one past the end of the array
 
    cout << "Priority Queue (Min Heap): " << endl;
    while (!gq.empty()) {
        cout << gq.top() << " ";
        gq.pop();
    }



    return 0;
}
