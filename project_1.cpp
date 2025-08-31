#include <iostream>
using namespace std;

int main() {
    int n, target;

    // array size as input
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];

    // array elements as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // target value as input
    cout << "Enter target value: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return 0;  
            }
        }
    }

    cout << "No valid pair found." << endl; 
    return 0;
}
