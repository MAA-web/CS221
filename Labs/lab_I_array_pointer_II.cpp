#include <iostream>

using namespace std;

int main() { // Main function
    int sum;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<"\n\t\tThis program sums up an array of numbers and prints the answer";
    
    cout << "\n\nValue stored in the array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << ",";
        sum += *(arr + i);
    }
    
    cout << "\nTotal sum: " <<sum;

    return 0;
}