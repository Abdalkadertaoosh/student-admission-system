#include<iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int mark;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your mark out of 100: ";
    cin >> mark;

    if (mark < 0 || mark > 100)
    {
        cout << "Invalid mark!" << endl;
    }
    else if (mark >= 90)
    {
        cout << name << ", you are accepted to your first specialty!" << endl;
    }
    else if (mark >= 75)
    {
        cout << name << ", you are accepted to your alternative specialty!" << endl;
    }
    else
    {
        cout << name << ", you are not accepted." << endl;
    }

    return 0;
}