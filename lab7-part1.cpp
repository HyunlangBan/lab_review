#include <iostream>
using namespace std;
void addInputs(string &userInput);
float calculateArea(string &userInput);
void displayArea(string &userInput);
float base = 0, height = 0;
float length = 0, width = 0;
float radius = 0;

int main()
{
    string userInput;
    while (true)
    {
        cout << "Enter the shape which do you want to calculate the area(triangle/rectangle/circle): " << endl;
        cin >> userInput;
        if (userInput != "triangle" && userInput != "rectangle" && userInput != "circle")
        {
            cout << "That's invalid option. Try again." << endl;
            continue;
        }
        break;
    }
    addInputs(userInput);
    return 0;
}

/**
 * handle requesting additional inputs
 * @param userInput the number that the user entered at the main.
*/
void addInputs(string &userInput)
{
    if (userInput == "triangle")
    {
        cout << "Enter the base: " << endl;
        cin >> base;
        cout << "Enter the height: " << endl;
        cin >> height;
    }
    else if (userInput == "rectangle")
    {
        cout << "Enter the length: " << endl;
        cin >> length;
        cout << "Enter the width: " << endl;
        cin >> width;
    }
    else if (userInput == "circle")
    {
        cout << "Enter the radius: " << endl;
        cin >> radius;
    }
    displayArea(userInput);
}

/**
 * calculate the area
 * @param userInput the number that the user entered at the main.
 */
float calculateArea(string &userInput)
{
    float area;
    if (userInput == "triangle")
    {
        area = base * height * 0.5;
    }
    else if (userInput == "rectangle")
    {
        area = length * width * 1.0;
    }
    else if (userInput == "circle")
    {
        const float pi = 3.14;
        area = radius * radius * pi;
    }
    return area;
}

/**
 * display the area of the selected shape.
 * @param userInput the number that the user entered at the main.
 */
void displayArea(string &userInput)
{
    cout << "The area of " << userInput << " is " << calculateArea(userInput);
}