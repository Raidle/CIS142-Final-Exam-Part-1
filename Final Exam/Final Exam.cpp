//Eldiar Emilbekov

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cities[5];
    string city;
    int i = 0;
    while (i < 5) {
        cout << "Enter city #" << i + 1 << " ==> ";
        cin >> city;
        cities[i] = city;
        i++;
    }
    
    cout << "\n\nThe Entry Citites Backwards\n\n";


    i = 5;
    while (i > 0) {
        cout << "City #" << i << " ==> ";
        cout << cities[i-1] << endl;
        i--;
    }
}

