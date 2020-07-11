// Given length in inches, this program outputs the equivalent
// length in feet and remaining inch(es.)
#include <iostream>

using namespace std;

int main()
{
    int inches;

    cout << "Enter inches you wish to convert"
         << "to feet and remaining inches."
         << endl;
    cin >> inches;
    cout << inches << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;

    return 0;
}