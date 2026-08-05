#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[3][5] = {
        "RAJ",
        "RAM",
        "SAM"
    };

    char key[5];

    cout << "Enter name to search: ";
    cin >> key;

    int found = 0;

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(n[i], key) == 0)
        {
            cout << "Name found at row " << i;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Name not found";

    return 0;
}