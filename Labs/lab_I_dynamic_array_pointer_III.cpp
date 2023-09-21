#include <iostream>

using namespace std;

int main() { // Main function
    
    cout << "\n\t\tThis program stores values in a dynamic array and then displays them in reverse\n";

    int size{0};

    cout<<"\nType the value of the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\n\tType the values of the array\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Type the value for the index number " << i << " : ";
    
        cin >> *(arr + i);

    }
    
    cout << "\nThe array displayed in reverse: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *(arr + i) << ",";
    }
    

    return 0;
}