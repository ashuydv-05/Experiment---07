//Ashu yadav
//23070123154
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
