#include <iostream.h>
#include <conio.h>

class Parent1 
{
public:
    void display()
     {
        cout << "Parent1's Display" ;
    }
};

class Farent2 {
public:
    void display()
    {
	cout << "Farent2's Display" ;
};

class Child : public Parent1, public Farent2
{
public:
    void displayChild()
     {
	cout << "Child's Display";
    }
};

void main()
 {
    clrscr();

    Child obj;
    obj.displayChild();
    obj.Parent1::display();
    obj.Farent2::child ();

    getch();
}
