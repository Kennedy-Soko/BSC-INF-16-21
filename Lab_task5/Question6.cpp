#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int count_vowels(const string& text) {
    int vowel_count = 0;
    string vowels = "aeiouAEIOU";
    for (char ch : text) {
        if (vowels.find(ch) != string::npos) {
            vowel_count++;
        }
    }
    return vowel_count;
}

int count_words(const string& text) {
    int word_count = 0;
    bool in_word = false;
    for (char ch : text) {
        if (isspace(ch)) {
            in_word = false;
        } else if (!in_word) {
            word_count++;
            in_word = true;
        }
    }
    return word_count;
}

string reverse(const string& text) {
    string reversed_text = text;
    for (int i = 0, j = text.length() - 1; i < j; i++, j--) {
        swap(reversed_text[i], reversed_text[j]);
    }
    return reversed_text;
}

string capitalize_second_letter(const string& text) {
    string capitalized_text = text;
    bool capitalize_next = false;
    for (char& ch : capitalized_text) {
        if (isalpha(ch)) {
            if (capitalize_next) {
                ch = toupper(ch);
                capitalize_next = false;
            } else {
                capitalize_next = true;
            }
        } else {
            capitalize_next = false;
        }
    }
    return capitalized_text;
}

int main() {
    ifstream file("thisText.txt");
    if (!file.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);

    file.close();

    // (iii) Counting and outputting the number of vowels
    int vowel_count = count_vowels(fileData);
    cout << "Number of vowels: " << vowel_count << endl;

    // (iv) Counting and outputting the number of words
    int word_count = count_words(fileData);
    cout << "Number of words: " << word_count << endl;

    // (v) Reversing the statement and outputting it
    string reversed_statement = reverse(fileData);
    cout << "Reversed statement: " << reversed_statement << endl;

    // (vi) Capitalizing the second letter of each word and outputting the modified statement
    string capitalized_statement = capitalize_second_letter(fileData);
    cout << "Statement with second letter capitalized: " << capitalized_statement << endl;

    return 0;
}
