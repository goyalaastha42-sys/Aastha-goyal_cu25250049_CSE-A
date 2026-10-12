/*#include <iostream>
#include <vector>
using namespace std;

// Max Heap
class MaxHeap {
    vector<int> heap;

public:
    void insert(int value) {
        heap.push_back(value);
        int i = heap.size() - 1;

        while (i > 0) {
            int parent = (i - 1) / 2;

            if (heap[parent] >= heap[i])
                break;

            swap(heap[parent], heap[i]);
            i = parent;
        }
    }

    int extractMax() {
        int result = heap[0];

        heap[0] = heap.back();
        heap.pop_back();

        int i = 0;

        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < heap.size() && heap[left] > heap[largest])
                largest = left;

            if (right < heap.size() && heap[right] > heap[largest])
                largest = right;

            if (largest == i)
                break;

            swap(heap[i], heap[largest]);
            i = largest;
        }

        return result;
    }

    void display() {
        for (int x : heap)
            cout << x << " ";
        cout << endl;
    }
};

// Heap Sort
void heapify(vector<int>& a, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(vector<int>& a) {
    int n = a.size();

    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Extract elements
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    MaxHeap pq;

    pq.insert(30);
    pq.insert(10);
    pq.insert(50);
    pq.insert(20);
    pq.insert(40);

    cout << "Max Heap / Priority Queue: ";
    pq.display();

    cout << "Highest Priority Element: "
         << pq.extractMax() << endl;

    vector<int> a = {40, 10, 30, 50, 20};

    heapSort(a);

    cout << "Heap Sort: ";
    for (int x : a)
        cout << x << " ";

    return 0;
}*/




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> a = {4, 2, 7, 1, 3, 5 };

    sort(a.begin(), a.end());

    int n = a.size();
    vector<long long> result;

    int left = 0;
    int right = n - 1;

    // Take smallest, largest alternately
    while (left <= right) {
        if (left == right) {
            result.push_back(a[left]);
            break;
        }

        result.push_back(a[left++]);
        result.push_back(a[right--]);
    }

    long long sum = 0;

    for (int i = 1; i < n; i++) {
        sum += abs(result[i] - result[i - 1]);
    }

    cout << "Rearranged Array: ";

    for (long long x : result)
        cout << x << " ";

    cout << "\nTotal Sum = " << sum;

    return 0;
}


/*#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 2, 3, 2};
    int target = 7;

    int n = arr.size();
    int left = 0;
    int sum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < n; right++) {

        sum += arr[right];

        while (sum > target) {
            minLength = min(minLength, right - left + 1);

            sum -= arr[left];
            left++;
        }
    }

    if (minLength == INT_MAX)
        cout << -1;
    else
        cout << "Smallest Subarray Length = " << minLength;

    return 0;
}*/