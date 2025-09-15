#include <iostream>;
using namespace std;

int main() {
    string name;

    cout << "What is your name? ";

    // cin >> name; // will only get the first word
    getline(cin, name); // this will read all the words until you hit enter
    cout << "Welcome, " << name;

    return 0;
}