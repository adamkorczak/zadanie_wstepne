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

