#include<iostream.h>
#include<conio.h>
#include<string.h>

class Animal 
{
public:
    char name[50];
    int age;

public:
    void set_value(const char* n, int a)
     {
	strcpy(name, n);
	age = a;
    }
};

class Zebra : public Animal
 {
public:
    void display()
     {
	cout << "Zebra Name: " << name;
	cout << "\nZebra Age: " << age << " years" ;
	cout << "\nZebra is a herbivore and has distinctive black and white stripes." ;
    }
};

class Dolphin : public Animal
{
public:
    void display()
    {
	cout << "\nDolphin Name: " << name ;
	cout << "\nDolphin Age: " << age << " years" ;
	cout << "\nDolphin is a marine mammal known for its intelligence and playful behavior." ;
    }
};

void main()
 {
    clrscr();

    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Stripes", 5);
    dolphin.set_value("Flipper", 10);

    cout << "\nAnimal Information:" << endl << endl;
    zebra.display();
    cout << endl;
    dolphin.display();

    getch();
    }
