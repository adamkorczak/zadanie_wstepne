#include <iostream>
#include "header.hpp"

using namespace std;

string Load_and_write(string name){

    string firstname;
    string surname;
    string pseudonym;

    cout << "Write name:" << endl;
    cin >> firstname;

    cout << "Write surname:" << endl;
    cin >> surname;

    cout << "Write pseudonym:" << endl;
    cin >> pseudonym;

    name = firstname + " \"" + pseudonym + "\" " + surname;

    return name;

}

string Find_vowels_and_change(string name){

    for(unsigned int i = 0; i < name.length(); ++i){

        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'o' ||
           name[i] == 'i' || name[i] == 'u' || name[i] == 'A' ||
           name[i] == 'E' || name[i] == 'I' || name[i] == 'O' ||
           name[i] == 'U')

        name[i] = 'z';

    }

    return name;
}
