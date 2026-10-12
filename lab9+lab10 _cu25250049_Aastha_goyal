
/*#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Check whether it is possible
    // For this interpretation, every element can be made zero.
    // Minimum operations = sum of absolute values.

    int operations = 0;

    for (int i = 0; i < N; i++) {
        operations += abs(A[i]);
    }

    cout << operations << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}*/


// LABSHEET 10
#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function to find sum of digits
int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

void solve() {
    int N;
    cin >> N;

    vector<int> nums(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    map<int, int> frequency;
    long long pairs = 0;

    for (int i = 0; i < N; i++) {
        int sum = digitSum(nums[i]);

        // All previous numbers having the same digit sum
        // form a valid pair with the current number.
        pairs += frequency[sum];

        frequency[sum]++;
    }

    cout << pairs << endl;
}

int main() {
    solve();

    return 0;
}



