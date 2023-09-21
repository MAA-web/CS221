#include <iostream>
#include <string>

using namespace std;

typedef struct
{

    int rollNo;
    string name;
    string Adress;
    int age;
    bool enteredByUser;
    
}students;

void nameSpecific(students *, int, int);
void evenRoll(students *, int);
void rolledByUser(students *, int);

int main() { // Main function
    int size = 2;
    students *stArr = new students[size];
    
    for (int i = 0; i < size; i++)
    {
        std::cout << "\n\t\tType the data for student no " << i + 1 << "\n";
        
        (stArr + i)->rollNo = i;
        (stArr + i)->enteredByUser = false;
        
        std::cout << "Type the name: ";
        std::getline(std::cin, (stArr + i)->name);
        
        std::cout << "Type the adress: ";
        std::getline(std::cin, (stArr + i)->Adress);
        
        std::cout << "Type the age: ";
        while (true)
        {
            std::cin >> (stArr + i)->age;
            if ((stArr + i)->age < 11 || (stArr + i)->age > 14) {std::cout << "Type an age between 11 and 14: "; continue;} else break;
        }

        std::cin.ignore();
    }

    int option = 0;
    int temp;

    string menu = "\n\t\tMENU\n\t1. change roll no.\n\t2. print names of students with age 14.\n\t3. print names of students with even roll no.\n\t-1. EXIT!\n";

    while (option != -1)
    {

        switch (option)
        {
        case 1:
            std::cout << "Type the index no of the student whose roll no. to change: ";
            std::cin>>temp;     // TODO check the index number so that it doesn't go out of range
            std::cout << "Type the roll no.: ";
            std::cin >> (stArr + temp)->rollNo;
            (stArr + temp)->enteredByUser = true;
            break;

        case 2:
            nameSpecific(stArr, size, 14);
            break;
        
        case 3:
            evenRoll(stArr, size);
            break;

        default:
            std::cout << "\nType an option from the menu\n";
            break;
        }

        std::cout << menu << "Type the option: ";
        std::cin >> option;
    }
    

/*
    
    
    nameSpecific(stArr, size, 14);
    evenRoll(stArr, size);*/

    return 0;
}


void nameSpecific(students * arrSt, int size, int num) {
    std::cout << "\n\t\tStudents who are " << num << " years of age";
    for (int i = 0; i < size; i++)
    {
        if ((arrSt + i)->age == 14 )
        {
            std::cout << "\nName: " << (arrSt + i)->name;
        }
        
    }
}

void evenRoll(students * arrSt, int size) {
    std::cout << "\n\t\tStudents who have even roll no.s";
    for (int i = 0; i < size; i++)
    {
        if ((arrSt + i)->rollNo % 2 == 0 )
        {
            std::cout << "\nName: " << (arrSt + i)->name;
        }
        
    }
}

void rolledByUser(students * arrSt, int size) {
    std::cout << "\n\t\tStudents whose roll no. was entered by the user rather than the system";
    for (int i = 0; i < size; i++)
    {
        if ((arrSt + i)->enteredByUser == true )
        {
            std::cout << "\nName: " << (arrSt + i)->name;
            std::cout << "\nRoll no: " << (arrSt + i)->rollNo;
            std::cout << "\nAdress: " << (arrSt + i)->Adress;
            std::cout << "\nAge: " << (arrSt + i)->age;
        }
        
    }
}
