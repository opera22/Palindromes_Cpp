#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


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

        cout << userInput;

        keepPlaying = false;







    }

    return 0;

}

/*

public class Palindromes {

    public static void main(String[] args) {

        boolean keepPlaying = true;
        Scanner scanner = new Scanner(System.in);

        System.out.println("----------------------------------\nWelcome to the palindrome checker!\n----------------------------------");

        while (keepPlaying) {
            System.out.println("Enter a potential palindrome below. If you've had enough, type 'E' to exit.");
            String userInput = scanner.nextLine();
            userInput = userInput.toLowerCase();
            if (userInput.equals("e")){
                keepPlaying = false;
                break;
            }
            boolean result = Tools.isPalindrome(userInput);
            if (result == true) {
                System.out.println("That's a palindrome! Nice!\nWould you like to print it in box form? (y/n)");
                // user is asked whether they want to print it in box form or not;
                // a placeholder called "palindrome" is made so that the userInput can change
                String palindrome = userInput;
                userInput = scanner.nextLine();
                if (userInput.toLowerCase().equals("y")){
                    Tools.printBox(palindrome);
                }
            }
            else {
                System.out.println("Sorry, that's not a palindrome!\n");
            }
        }
        System.out.println("Goodbye.");
    }
}


public class Tools {

    public static boolean isPalindrome(String str) {
        // initializing two pointers to creep towards the middle of a char array
        int left = 0;
        int right = str.length() - 1;
        char[] array = str.toCharArray();

        while (left < right) {
            if (array[left] != array[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    public static void printBox(String str) {

        // calculating amount of space between each side of the box, then making a string w/ that amount
        int spacesInt = str.length() - 2;
        String spaces = "";
        for (int i = 0; i < spacesInt; i++) {
            spaces += " ";
        }

        // top row
        System.out.println("\n" + str);
        // middle rows
        for (int i = 0; i < spacesInt; i++) {
            System.out.println(str.charAt(i + 1) + spaces + str.charAt(i + 1));
        }
        // last row
        System.out.println(str + "\n");

    }
}


*/