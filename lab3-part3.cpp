//Receipt Maker
//Grocery: 0%
//Prepared food: 7%
//Other: 6.25%
#include <iostream>
using namespace std;

void price_calculator(float tax, float &price, float tax_rates);

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

    cout<<"Enter the item: "<<endl;
    getline(cin, item);

    cout<<"Enter the price: "<<endl;
    cin>>price;

    cout<<"Enter the category: (grocery, prepared food, other)"<<endl;
    cin.ignore();
    getline(cin, category);

    if(category=="grocery"){
        price_calculator(groceryTax, price, grocery_tax_rates);
    }
    else if(category=="prepared food"){
        price_calculator(preparedFoodTax, price, prepared_food_tax_rates);
    }
    else{
        price_calculator(otherTax, price, other_tax_rates);
    }

    return 0;
}

void price_calculator(float tax, float &price, float tax_rates){
    tax = price * tax_rates;
    float total = price + tax;
    cout<<"item             "<<"$"<<price<<endl;
    cout<<"TAX              "<<"$"<<tax<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"TOTAL            "<<"$"<<total<<endl;    
}