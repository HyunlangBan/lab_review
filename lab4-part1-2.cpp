//if you asked the user to enter "grocery", "prepared food", or "other" 
//and they don't enter any of them, continue to re-prompt them until they do.

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

do{
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
    else if(category=="other"){
        price_calculator(otherTax, price, other_tax_rates);
    }
}
while(category!="grocery"&&category!="prepared food"&&category!="other");


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