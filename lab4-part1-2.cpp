//if you asked the user to enter "grocery", "prepared food", or "other" 
//and they don't enter any of them, continue to re-prompt them until they do.

#include <iostream>
using namespace std;

int main(){
    string item;
    float price;
    string category;
    float groceryTax;
    float preparedFoodTax;
    float otherTax;
    const int grocery_tax_rates = 0;
    const float prepared_food_tax_rates = 0.07;
    const float other_tax_rates = 0.0625;
    float total;

do{
    cout<<"Enter the item: "<<endl;
    getline(cin, item);

    cout<<"Enter the price: "<<endl;
    cin>>price;

    cout<<"Enter the category: (grocery, prepared food, other)"<<endl;
    cin.ignore();
    getline(cin, category);

    if(category=="grocery"){
        groceryTax = price * grocery_tax_rates; 
        total = price + groceryTax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<groceryTax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }
    else if(category=="prepared food"){
        preparedFoodTax = price * prepared_food_tax_rates;
        total = price + preparedFoodTax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<preparedFoodTax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }
    else if(category=="other"){
        otherTax = price * other_tax_rates;
        total = price + otherTax;
        cout<<"item             "<<"$"<<price<<endl;
        cout<<"TAX              "<<"$"<<otherTax<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"TOTAL            "<<"$"<<total<<endl;
    }
}
while(category!="grocery"&&category!="prepared food"&&category!="other");


    return 0;
}