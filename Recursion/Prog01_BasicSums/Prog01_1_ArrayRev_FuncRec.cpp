
// 200325
/*
    P01_1 : Array Reversal using Func-Rec.
        > 2Ptrs : left & right.
        > Single-Ptr : 'i' & 'n-i-1'.
*/

#include <iostream>
using namespace std;

#define SWAP(a, b) { \
    *a = *a + *b; \
    *b = *a - *b; \
    *a = *a - *b; \
}; \

void displayArray(int * arr, int sum);

void reverseArray(int * arr, int left, int n) {
    if(left >= (n/2))
        return;

    // SWAP(*(arr+left), *(arr+right));     // Alt SWAPPING.

    // SWAP((arr+left), (arr+right));       // 2-Ptrs
    SWAP((arr + left), (arr + (n-left-1) ));
    reverseArray(arr, left+1, n);
}

int main(void) {
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int * arr = new int[n];
    // int * arr = (int*)malloc(sizeof(int) * n);
    cout << "Enter the " << n << " elements : ";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "\nInput array : ";
    displayArray(arr, n);

    // reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, n);

    cout << "\nReversed array : ";
    displayArray(arr, n);

    delete[] arr;

    return 0;
}

void displayArray(int * arr, int n){
    cout << "[ ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}