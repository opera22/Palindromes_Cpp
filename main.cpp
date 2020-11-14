#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s);
void printBox(string s);

int main() {

    bool keepPlaying = true;

    cout << "------------------------------------------------\n";
    cout << "Welcome to the Palindrome Checker (C++ Version)!\n";
    cout << "------------------------------------------------\n";

    while (keepPlaying == true) {

        string userInput = "";
        cout << "Enter a potential palindrome below. If you've had enough, type 'E' to exit.\n";
        cin >> userInput;
        transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

        if (userInput.compare("e") == 0) {
            keepPlaying = false;
            break;
        }

        bool result = isPalindrome(userInput);

        if (result == true) {
            cout << "That's a palindrome! Nice!\nWould you like to print it in box form? (y/n)\n";
            //the palindrome needs a placeholder, because there will be more user input
            string palindrome = userInput;
            cin >> userInput;
            transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
            if (userInput.compare("y") == 0) {
                printBox(palindrome);
            } 
        } else {
            cout << "Sorry, that's not a palindrome!\n\n";
        }
    }

    cout << "Goodbye!\n\n";

    return 0;

}

bool isPalindrome(string s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s.at(left) != s.at(right)) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void printBox(string s) {
    
    // calculating amount of space between each side of the box, then making a string w/ that amount
    int spacesInt = s.length() - 2;
    string spaces = "";
    for (int i = 0; i < spacesInt; i++) {
        spaces.append(" ");
    }
   
    //top row
    cout << "\n" + s + "\n";
   
    //middle rows
    for (int i = 0; i < spacesInt; i++) {
        cout << s.at(i + 1) + spaces + s.at(i + 1) + "\n";
    }
   
    //last row
    cout << s + "\n\n";
    return;
}