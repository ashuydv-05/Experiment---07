//ashu yadav
//23070123103
#include<iostream>
using namespace std;

int main() {
    int array1[5] = {19, 10, 18, 17, 9};
    int array2[] = {19, 10, 18, 17, 9};
    int array3[5] = {19, 10, 8};

    // Printing array using the traditional method 
    cout << "\nTraditional method: ";
    for (int i = 0; i < 5; ++i) {
        cout << array1[i] << " ";
    }
    cout << endl;

    // Printing the array with the modern method 
    cout << "Modern method: ";
    for (int j : array1) {
        cout << j << " ";
    }

    return 0;
}
