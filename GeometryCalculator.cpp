// LARS ELKAN B. NATIVIDAD 11-ISAIAH flying solo ;)
#include <iostream>
using namespace std;
int main()
{
    int choice;
    double radius, areaOfcircle, length, width, 
           areaOfrectangle, height, base, areaOftriangle;

    // Menu Screen
    cout << "   Geometry Calculator\n\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice of calculator (1-4): ";
    // Typing number 4 will end the program early
    cin >> choice;

    
    if (choice >= 1 && choice <= 3) 
    {
        switch (choice)
        {
            // Area of Circle Code
        case 1: cout << "\nPlease enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0.00)
                    cout << "Negative numbers are not accepted.\n" << "Please start the program and try again.";               
                else if (radius == 0.00)
                    cout << "A circle with 0 radius is just a point.\n";
                else
                {
                    areaOfcircle = 3.14159 * radius * radius;
                    cout << "The area of the circle is: " << areaOfcircle << endl;
                }
                break;

            // Area of Rectangle Code
        case 2: cout << "\nPlease enter the length of the rectangle: ";
                cin >> length;
                if (length <= 0.00)
                    cout << "Negative numbers and zeros are not accepted.\n" << "Please restart the program and try again.";
                else
                {
                    cout << "Now please enter the width of the rectangle: ";
                    cin >> width;
                    if (width <=0.00)
                        cout << "Negative numbers and zeros are not accepted.\n" << "Please restart the program and try again.";
                    else
                    {
                        areaOfrectangle = length * width;
                        cout << "The area of the rectangle is: " << areaOfrectangle << endl;
                    }
                }
                break;

            // Area of Triangle Code
        case 3: cout << "\nPlease enter the base of the triangle: ";
                cin >> base;
                if (base <= 0.00)
                    cout << "Negative numbers and zeros are not accepted.\n" << "Please restart the program and try again.";
                else
                {
                    cout << "Now please enter the height of the triangle: ";
                    cin >> height;
                    if (height <=0.00)
                        cout << "Negative numbers and zeros are not accepted.\n" << "Please restart the program and try again.";
                    else
                    {
                        areaOftriangle = 0.5 * height * base;
                        cout << "The area of the triangle is: " << areaOftriangle << endl;
                    }
                }
                break;
        }
    }
            // Invalid Input Response Code
    else if (choice != 4) 
    {
        cout << "The valid choices are 1 through 4 only. \n";
        cout << "Please run the program again and select one of these, okay?\n";
    }

    return 0;
}
/* 
    Time Start : 8pm
    Time Finished: 12:45am
*/ 
