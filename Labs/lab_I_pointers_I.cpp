#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temporary = *a;
    *a = *b;
    *b = temporary;
}

int main() { // Main function
    
    int a = 3, b = 5;

    cout << "\n\t\tThis program swaps the value of two integers\n\n";

    cout << "\nValue of a: " << a << ", Adress of a: " << &a;
    cout << "\nValue of b: " << b << ", Adress of b: " << &b;

    swap(a, b);

    cout << "\n\nValues after swapping\n";

    cout << "\nValue of a: " << a << ", Adress of a: " << &a;
    cout << "\nValue of b: " << b << ", Adress of b: " << &b;    

    return 0;
}