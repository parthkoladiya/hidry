#include <iostream.h>
#include <conio.h>
#include <string.h>

class Person
 {
public:
    char name[50];
    int age;

    void getData()
     {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayData() 
    {
        cout << "Name: " << name  ;
        cout << "Age: " << age  ;
    }
};

class Student : public Person {
public:
    int rollNumber;

    void getStudentData() 
    {
        getData();
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayStudentData() 
    {
        displayData();
        cout << "Roll Number: " << rollNumber;
    }
};

class Employee : public Person {
public:
    int employeeId;

    void getEmployeeData() 
    {
        getData();
        cout << "Enter employee ID: ";
        cin >> employeeId;
    }

    void displayEmployeeData()
     {
        displayData();
        cout << "Employee ID: " << employeeId;
    }
};

void main()
 {
    clrscr();

    int choice;
    char ch;

    do {
        cout << "1. Enter Student Data" ;
        cout << "2. Enter Employee Data" ;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student student;
                student.getStudentData();
                student.displayStudentData();
                break;
            }
            case 2: {
                Employee employee;
                employee.getEmployeeData();
                employee.displayEmployeeData();
                break;
            }
            case 3:
                cout << "Exiting program." ;
                break;
            default:
                cout << "Invalid choice. Please try again.";
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    getch();
}
