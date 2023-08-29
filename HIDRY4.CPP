#include <iostream.h>
#include <conio.h>
#include <string.h>
class College
 {
public:
    char name[50];
};

class BCA : public College
 {
public:
    BCA() 
    {
        strcpy(name, "BCA College");
    }
};

class BBA : public College 
{
public:
    BBA() 
    {
        strcpy(name, "BBA College");
    }
};

class BSCIT : public College 
{
public:
    BSCIT()
     {
        strcpy(name, "BSC IT College");
    }
};

class BCOM : public College 
{
public:
    BCOM()
     {
        strcpy(name, "BCOM College");
    }
};

void main() 
{
    int n;
    clrscr();

    BCA bca;
    BBA bba;
    BSCIT bscit;
    BCOM bcom;

    cout << "College Names:\n" ;
    cout << "1. " << bca.name ;
    cout << "\n2. " << bba.name ;
    cout << "\n3. " << bscit.name ;
    cout << "\n4. " << bcom.name ;

    getch();
}
