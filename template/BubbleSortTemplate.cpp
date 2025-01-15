#include <iostream>
using namespace std;

template <typename T>
void BubbleSort(T a[], int n) {
    T temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int* a = new int[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    BubbleSort<int>(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;

    return 0;
}
