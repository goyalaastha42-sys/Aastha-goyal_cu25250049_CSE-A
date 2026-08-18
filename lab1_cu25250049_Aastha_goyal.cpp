
// code 1 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};

    // Push
    arr.push_back(4);

    cout << "After push: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // Pop
    arr.pop_back();

    cout << "After pop: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // Pop all elements
    arr = {10, 20, 30, 40, 50};

    while (!arr.empty()) {
        int popelement = arr.back();

        cout << "Popping this item: " << popelement << endl;

        arr.pop_back();

        cout << "Array after pop: ";
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}


// code 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> queue = {10, 20, 30};

    cout << "Original Queue: ";
    for (int x : queue)
        cout << x << " ";
    cout << endl;

    // Enqueue Operation
    queue.push_back(40);

    cout << "After Enqueue: ";
    for (int x : queue)
        cout << x << " ";
    cout << endl;

    // Dequeue Operation
    int dequeued_item = queue[0];

    cout << "Dequeued Item: " << dequeued_item << endl;

    queue.erase(queue.begin());

    cout << "After Dequeue: ";
    for (int x : queue)
        cout << x << " ";
    cout << endl;

    return 0;
}