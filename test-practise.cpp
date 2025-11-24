#include <iostream>
using namespace std;

void input(int* array, int size) {
    cout<<"Put numbers to the array: ";
    for (int i = 0; i < size; i++) {
        cin>>array[i];
    }
}

int isMonotonic(int* array, int size) {
    bool isIncreasing = true;
    bool isDecreasing = true;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i+1])
            isIncreasing = false;
        if (array[i] < array[i+1])
            isDecreasing = false;
        if (!isIncreasing && !isDecreasing)
            return false;
    }
    
    if (isIncreasing) return 1;
    if (isDecreasing) return -1;
    return 0;
}

int main() {
    const int size = 5;
    int array[size];
    input(array, size);
    
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    int result = isMonotonic(array, size);

    if (result == 1) cout<<"Increasing";
    if (result == -1) cout<<"Decreasing";
    if (result == 0) cout<<"Not monotonic";

    return 0;
}