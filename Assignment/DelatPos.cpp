#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n, i, pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter elements in the array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the position to delete (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position. Position should be between 0 and " << (n - 1) << "." << endl;
        return 1;
    }

    // Deleting the element at the specified position
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "New Array: ";
    for (i = 0; i < n; i++)
        cout << setw(3) << arr[i];

    return 0;
}
