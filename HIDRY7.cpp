#include <iostream.h>
#include <conio.h>
#include <string.h>

class Vehicle {
public:
    char brand[50];
    char model[50];


    void setVehicleInfo(const char* b, const char* m) {
        strcpy(brand, b);
        strcpy(model, m);
    }

    void displayVehicleInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
public:
    int numDoors;


    void setCarInfo(int doors) {
        numDoors = doors;
    }

    void displayCarInfo() {
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class Racing : public Vehicle
 {
public:
    int topSpeed;


    void setRacingInfo(int speed)
     {
        topSpeed = speed;
    }

    void displayRacingInfo()
     {
        cout << "Top Speed: " << topSpeed << " mph";
    }
};

class Ferrari : public Car, public Racing
 {
public:
    void setFerrariInfo(const char* b, const char* m, int doors, int speed)
     {
        setVehicleInfo(b, m);
        setCarInfo(doors);
        setRacingInfo(speed);
    }

    void displayFerrariInfo()
     {
        cout << "Ferrari Information:";
        displayVehicleInfo();
        displayCarInfo();
        displayRacingInfo();
    }
};

void main() 
{
    clrscr();

    Ferrari ferrari;
    ferrari.setFerrariInfo("Ferrari", "F8 Tributo", 2, 211);

    ferrari.displayFerrariInfo();

    getch();
    
}
