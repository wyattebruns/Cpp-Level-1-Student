#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;




bool palindrome_checker(string user_word) {

    string user_word_reversed;

    for(int i = user_word.length() - 1; i >= 0; i--) {
        user_word_reversed += user_word[i];
    }

    
    if(user_word == user_word_reversed) {
        return true;
    }
    else {
        return false;
    }
}





int main() 
{
    string user_word;

    cout << "Type in a word to see if it is a palindrome!\n";
    

   getline(cin, user_word);

   user_word.erase(remove(user_word.begin(), user_word.end(), ' '), user_word.end());
    
    transform(user_word.begin(), user_word.end(), user_word.begin(), [](unsigned char c) {
        return tolower(c);
    });

    // Move all apostrophes to the end and get the new logical end iterator
   
    auto new_end = remove(user_word.begin(), user_word.end(), '\'');

    // Erase the remaining characters from the new end to the old end
    user_word.erase(new_end, user_word.end());

    if(palindrome_checker(user_word)) {
        cout << "That is a palindrome!";
    }
    else {
        cout << "That is not a palindrome!";
    }

    return 0;
}


https://onecompiler.com/cpp/44yxb56cm
