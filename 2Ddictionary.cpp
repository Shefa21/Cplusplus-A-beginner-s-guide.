#include<iostream>
#include<cstring>
using namespace std;

int main() {
    // 2D array of char pointers representing a dictionary
    char *dictionary[][2] = {
        "pencil", "a writing instrument",
        "keyboard", "an input device"
    };

    char word[80];
    int i;

    // Input a word from the user
    cout << "Enter word" << endl;
    cin >> word;

    // Loop through the dictionary using a for loop
    for (i = 0; *dictionary[i][0]; i++) {
        // Compare the entered word with the current word in the dictionary
        if (!strcmp(dictionary[i][0], word)) {
            // If a match is found, display the definition and exit the loop
            cout << dictionary[i][1] << endl;
            break;
        }
    }

    // Check if the loop ended without finding a match
    if (!*dictionary[i][0]) {
        cout << word << " not found" << endl;
    }

    return 0;
}







The program uses 
a 2D array of char pointers named dictionary to represent a simple dictionary. Each row in the array contains two strings: a word and its corresponding definition.

The user is prompted to input a word using cin >> word;.

The program then enters a for loop to search for the entered word in the dictionary. It uses strcmp to compare the entered word with the current word in the dictionary.

If a match is found, it prints the corresponding definition and breaks out of the loop.

If the loop completes without finding a match (!strcmp evaluates to true for all entries), it prints a message indicating that the word was not found.

Note: The use of strcmp for string comparison assumes that the dictionary is terminated with a row where the first element (dictionary[i][0]) is an empty string, indicating the end of the dictionary entries.
