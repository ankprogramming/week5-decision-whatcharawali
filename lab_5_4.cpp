#include <iostream>

using namespace std;

int main() {

    int menu;

    cout << "Choose Program" << endl;
    cin >> menu;

    switch (menu) {
        case 1: cout << "Call Program 1"; break;
        case 2: cout << "Call Program 2"; break;
        case 3: cout << "Call Program 3"; break;
        case 4: cout << "Call Program 4"; break;
        case 5: cout << "Call Program 5"; break;
        default : cout << "Error";

    }

    return 0;
}
