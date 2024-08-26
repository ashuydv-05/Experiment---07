# Experiment---07
# CDS-experiment-7

AIM:- To study and implement strings and arrays <br>

Software used:- VS code <br>

THEORY:-<br>
The two basic data structures in C++ for storing elemental sequences are arrays and strings. A group of identically typed elements kept in consecutive memory regions is called an array. Arrays have a fixed size when they are declared, and their index starts at 0. To declare an array of five numbers, for instance, use {int arr[5];`. Although arrays offer quick access to items, dynamic resizing is difficult due to their fixed sizes.

Character arrays ({char arr[]}) or the Standard Library's std::string class can be used to manage strings in C++. Character arrays are null-terminated strings in the C style ({'\0'}). char str[] = "Hello", for example, defines a C-string. More functionality and simplicity of use are provided by the `std::string} class, which includes member functions for manipulation, concatenation, and dynamic scaling.Take std::string s = "Hello"; as an example. Today's C++ programmers prefer the std::string class because of its robustness and flexibility.<br>

CODE:-
1).<br>

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

2).taking input of array from the user,reverse the array,searching the element in the array,finding max and min in the array and finding the sum and avg of the array<br>
   
    #include <iostream>
    #include <climits>
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
3). take a string and perform the following operation:- print the string, reverse the string,concatenate the string and check if the string is palindrome or not .<br>
   
     
    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
    // Printing a string
    string inputStr;
    cout << "Enter a word: ";
    cin >> inputStr;
    cout << "Word entered by user is: " << inputStr << endl;
    cout << endl;

    // Concatenation of a string
    string firstStr, secondStr;
    cout << "Enter a word: ";
    cin >> firstStr;
    cout << "Enter another word: ";
    cin >> secondStr;
    cout << "Concatenated word is: " << firstStr + secondStr << endl;
    cout << endl;

    // Printing string in reverse
    string reverseStr;
    int index = 0;
    cout << "Enter a word: ";
    cin >> reverseStr;
    cout << "Reverse String: ";
    for (index = reverseStr.length() - 1; index >= 0; index--)
    {
        cout << reverseStr[index];
    }
    cout << endl;
    cout << endl;

    // Checking if a string is a palindrome
    string palindromeStr, reversedPalindrome;
    int pos = 0;
    cout << "Enter a word: ";
    cin >> palindromeStr;
    for (pos = palindromeStr.length() - 1; pos >= 0; pos--)
    {
        reversedPalindrome = reversedPalindrome + palindromeStr[pos];
    }
    if (reversedPalindrome == palindromeStr)
    {
        cout << "It is a palindrome." << endl;
    }
    else
    {
        cout << "It is not a palindrome." << endl;
    }
    cout << endl;

    return 0;
    }


OUTPUT :-<br>
1).<br>
![exp7](https://github.com/VandanGupte101727/CDS-experiment-7/blob/main/Screenshot%202024-08-05%20at%2011.28.24%20PM.png)<br>
2).<br>
![exp7](https://github.com/VandanGupte101727/CDS-experiment-7/blob/main/Screenshot%202024-08-05%20at%2011.29.04%20PM.png)<br>
3).<br>
![exp7](https://github.com/VandanGupte101727/CDS-experiment-7/blob/main/Screenshot%202024-08-11%20at%202.21.16%20PM.png)<br>



Conclusion:- <br>
1).in this experiment we learnt how to print an array ,take user input of array, reverse it , search an element in it and find max ,min ,sum and average of the elements if the array<br>
2). in this experiment we also learnt to perform the basic operations on strings like:- printing a string, concatenation of string, printing the string in reverse and checking if the string is a palindrome or not<br>
