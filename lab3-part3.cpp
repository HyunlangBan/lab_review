//Receipt Maker
//Grocery: 0%
//Prepared food: 7%
//Other: 6.25%
#include <iostream>
using namespace std;

int main(){
    string item;
    float price;
    string category;
    const int grocery_tax = 0;
    const int prepared_food_tax = 7;
    const float other_tax = 6.25;
    float total;


    cout<<"Enter the item: "<<endl;
    cin>>item;

    cout<<"Enter the price: "<<endl;
    cin>>price;

    cout<<"Enter the category: (grocery, prepared food, other)"<<endl;
    getline(cin, category);

    if(category=="grocery"){
        total = price + grocery_tax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<grocery_tax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }
    if(category=="prepared food"){
        total = price + prepared_food_tax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<prepared_food_tax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }
    else{
        total = price + other_tax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<other_tax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }

    return 0;
}