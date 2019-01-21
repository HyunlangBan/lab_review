#include <iostream>
using namespace std;

int main(){
    string name, feeling, breakfast;
    int age;

    cout<<"Hello and welcome to ACME Therapy. What is your name?"<<endl;
    getline(cin, name);

    cout<<"Nice to meet you, "<<name<<". How are you feeling today? Happy? Sad? Something else?"<<endl;
    getline(cin, feeling);

    cout<<"We all feel "<<feeling<<" somethimes; it's normal. What did you have for breakfast today?"<<endl;
    getline(cin, breakfast);

    cout<<"Sometimes having "<<breakfast<<" for breakfast causes me to be happy. How old are you?"<<endl;
    cin>>age;

    cout<<"Really?! I'm "<<age<<", too. What are the chances of that? Well, we are out of time now. I'll see you next week at the same time."<<endl;



    return 0;
}