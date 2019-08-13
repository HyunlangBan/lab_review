//각 trial(시도)에서 몇번의 주사위를 던졌을 때 sankeEyes가 나왔는지의 평균 

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rollDie();
bool isSnakeEyes();
int countRollsToSnakeEyes();
float runTrials(int trials);

//ask the user how many tirals would like to conduct.
int main(){
    srand(time(0));

    int trials;
    cout<<"How many tirals would you like to conduct?: "<<endl;
    cin>>trials;

    //display the average to the user.
    cout<<"The average is: "<<runTrials(trials)<<endl;

    return 0;
}

/**
 * Simulate rolling a single die with 6 sides.
 * @return dieNumber the number of side which the user rolled.
 */ 
int rollDie(){
    int dieNumber = rand() % 6 + 1;
    return dieNumber;
}

/**
 * Function that will roll two dice and whether or not if they are both 1.
 * @return bool if they are snake eye, it return true. Else return false.
 */
bool isSnakeEyes(){
    int firstDie = rollDie();
    int secondDie = rollDie();

    if(firstDie==1 && secondDie==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/** Counts the number of times it must call isSnakeEyes until it returns true.
 * @return count The number of count rolling die until the user get the snake eyes.
 */
int countRollsToSnakeEyes(){
    int count = 0;
    bool snakeEyes;
    while(true)
    {
        snakeEyes = isSnakeEyes();
        if(!snakeEyes)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

/** Runs n trials and return the average the number of rolls.
 * @param trials the nubmer of user set to roll the die.
 * @return average the average of the number of rolls it took to reach snake eyes over those n trials.
 */
float runTrials(int trials){
    const int SIZE = 100;
    int numRoll[SIZE];
    int sum = 0;
    float average = 0;
    for(int i = 0; i < trials; i++)
    {
        numRoll[i] = countRollsToSnakeEyes();
        sum += numRoll[i];
        cout<<numRoll[i]<<endl;
    }
    average = sum / (trials*1.0);

    return average;
}
