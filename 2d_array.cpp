#include <iostream>
using namespace std;

int main(){
    const int NUM_STUDENTS=3;
    const int NUM_ASSIGNMENTS=5;
    float sum;

    int scores[NUM_STUDENTS][NUM_ASSIGNMENTS]={
        {85, 82, 80, 78, 88}, 
        {90, 95, 92, 87, 93}, 
        {45, 67, 50, 46, 70}
        };

    //calculate and display the average assignment score over all
    for(int i=0; i<NUM_STUDENTS; i++){
        for(int j=0; j<NUM_ASSIGNMENTS; j++){
            sum += scores[i][j];
        }
    } 

    float average = sum / ((NUM_STUDENTS)*(NUM_ASSIGNMENTS));
    cout<<"The average: "<<average;
    return 0;
}