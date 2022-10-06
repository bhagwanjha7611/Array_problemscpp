#include<iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }
}

void swapAlternate(int arr[], int size){

    for (int i=0; i<size; i+=2) {
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

}

int main(){
    // Question 1: Reverse an Array
    /*
    int oddArr[5] = {4,5,7,6,2};
    int s = 0;
    int e = 4;
    while(s<=e) {
        swap(oddArr[s], oddArr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << oddArr[i] << endl;
    }
    */

    // Question 3: Reverse alternate elements of an array
    int oddArr[6] = {4,5,7,6,2,9};
    swapAlternate(oddArr, 6);
    printArray(oddArr, 6);

    return 0;
}