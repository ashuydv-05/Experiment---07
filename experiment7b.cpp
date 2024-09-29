// ashu yadav
//23070123154
#include <iostream>
using namespace std;
int main() {
    int n;

   
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (array[i] == element) {
            found = true;
            cout << "Element " << element << " found at index " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element " << element << " not found in the array." << endl;
    }

 
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; ++i) {
        sum += array[i];
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    float average = static_cast<float>(sum) / n;

    cout << "Sum of the array: " << sum << endl;
    cout << "Average of the array: " << average << endl;
    cout << "Maximum element in the array: " << max << endl;
    cout << "Minimum element in the array: " << min << endl;

    return 0;
}
