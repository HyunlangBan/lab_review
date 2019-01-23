#include <iostream>
using namespace std;

int main(){
    string userInput;
    int numVowels, numCons, numWords = 0;
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
        
    // the number of vowels (a, e, i, o, u; upper or lower case)
    // the number of consonants (any character that's not punctuation, a number, or a vowel)
    // the number of words (e.g., the number of spaces in the string + 1)
    // HINT: you may find the character functions listed in Ch. 3.15 of the Zybook helpful! Be sure to include the necessary library
    // display the following stats preceded by a descriptive label (e.g., "Words: 5"):
    // number of words
    // total number of vowels
    // average vowels per word (# of vowels divided by # of words; should display as a floating point)
    // total number of consonants
    // average consonants per word (# of consonants / # of words; should display as a floating point)

    return 0;
}