#include<iostream>
using namespace std;

int array[10], size, x, i, j, temp;

int binarysearch(int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (array[mid] == x) {
        return mid;
    }
    else if (array[mid] > x) {
        return binarysearch(low, mid - 1);
    }
    else {
        return binarysearch(mid + 1, high);
    }
}

int main() {
    cout << "Enter the size of the array" << endl;
    cin >> size;

    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    // Sort the array (Bubble sort)
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Sorted elements are:" << endl;
    for (i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Enter the element you want to search in array:" << endl;
    cin >> x;

    int result = binarysearch(0, size - 1);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}

