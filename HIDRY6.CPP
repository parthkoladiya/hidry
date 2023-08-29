#include <iostream.h>
#include <conio.h>
#include <string.h>

class Sport {
public:
    char message[100];

    Sport()
     {
	strcpy(message, "This is a sport.\n");
    }
};

class Football : public Sport
 {
public:
    int footballPlayers;

    Football()
    {
	strcpy(message, "\nFootball is a team sport.");
	footballPlayers = 11;
    }

    void display()
    {
	cout << "\nFootball: " << message ;
	cout << "\nNumber of football players: " << footballPlayers;
    }
};

class Cricket : public Sport
 {
public:
    int cricketPlayers;

    Cricket()
    {
	strcpy(message, "\nCricket is a bat-and-ball game.");
	cricketPlayers = 11;
    }

    void display()
     {
	cout << "\nCricket: " << message ;
	cout << "\nNumber of cricket players: " << cricketPlayers ;
    }
};

void main()
 {
    clrscr();

    Football football;
    Cricket cricket;

    cout << "\nInheritance Hierarchy: " ;
    football.display();
    cricket.display();

    getch();
}
