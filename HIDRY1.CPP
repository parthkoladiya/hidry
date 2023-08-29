#include<iostream.h>
#include<conio.h>
class Animal {
public:
    void speak() {
	cout << "Animal speaks\n" ;
    }
};


class Dog : public Animal
 {
public:
    void speak()
    {
	cout << "Dog barks\n"  ;
    }
};


class Cat : public Animal
{
public:
    void speak()
    {
	cout << "Cat meows\n";
    }
};

void main()
 {
    Animal obj;
    Dog obj1;
    Cat obj2;
    clrscr();
    cout << "Animal says: ";
    obj.speak();

    cout << "Dog says: ";
    obj1.speak();

    cout << "Cat says: ";
    obj2.speak();

    getch();
}
