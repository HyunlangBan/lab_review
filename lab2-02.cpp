#include <iostream>
using namespace std;

int main(){
    string userInput;
    cout<<"Pick a shape - circle, oval, triangle, trapezoid: "<<endl;
    cin>>userInput;

    if(userInput=="circle"){
        float radius, area;
        const float pi = 3.14;
        cout<<"Enter the radius: "<<endl;
        cin>>radius;

        area = radius*radius*pi;

        cout<<"The circle's area is "<<area<<"."<<endl;}
    
    else if(userInput == "oval"){
        float majorRadius, minorRadius, area;
        const float pi = 3.14;
        cout<<"Enter the major radius and monor radius: "<<endl;
        cin>>majorRadius>>minorRadius;

        area = majorRadius*minorRadius*pi;

        cout<<"The oval's area is "<<area<<"."<<endl;

    }

    else if(userInput == "triangle"){
        float base, height, area;
        cout<<"Enter the base and height: "<<endl;
        cin>>base>>height;

        area = base * height * 0.5;
        cout<<"The triangle's area is "<<area<<"."<<endl;
    }

    else if(userInput == "trapezoid"){
        float base1, base2, height, area;
        cout<<"Enter the base1, base2 and height: "<<endl;
        cin>>base1>>base2>>height;

        area = (1/2.0)*height*(base1+base2);

        cout<<"The trapezoid's area is "<<area<<"."<<endl;
    }
//(1/2)를 사용했더니 0으로 인식해서 (1/2.0)으로 하던가 0.5를 사용

    return 0;
}