#include <iostream>
using namespace std;

int main(){
    string userInput;
    int numVowels=0, numCons= 0;
    int numWords=1;
    float averageOfVowels=0, averageOfCons = 0;
    // reads in a full line of text from the user into a single string variable
    cout<<"Enter a text: "<<endl;
    getline(cin, userInput);

    // iterates over that string to count the following statistics:
    for(int i = 0; i<userInput.size(); i++){
        if(userInput.at(i)=='a'||userInput.at(i)=='e'||userInput.at(i)=='i'||userInput.at(i)=='o'||userInput.at(i)=='u'){
            numVowels++;
        }

        else if((userInput.at(i)>=33 && userInput.at(i)<=47)||
        (userInput.at(i)>=58 && userInput.at(i)<=64)||
        (userInput.at(i)>=91 && userInput.at(i)<=96)||
        (userInput.at(i)>=123 && userInput.at(i)<=126)||
        (userInput.at(i)>=48 && userInput.at(i)<=57)){

        }
        else if(userInput.at(i) ==' '){
            numWords++;
        }
        else{
            numCons++;
        }
    }

    cout<<"The number of vowels: "<<numVowels<<endl;
    cout<<"The number of consonants: "<<numCons<<endl;
    cout<<"The number of words: "<<numWords<<endl;

    averageOfCons = numCons/(numWords*1.0);
    averageOfVowels = numVowels/(numWords*1.0);

    cout<<"The average of vowels: "<<averageOfVowels<<endl;
    cout<<"The average of consonants: "<<averageOfCons<<endl;

    return 0;
}