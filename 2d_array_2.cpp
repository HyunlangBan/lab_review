#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3;
    const int NUM_ASSIGNMENTS = 5;
    float sum1, sum2, sum3, average1, average2, average3 = 0;

    int scores[NUM_STUDENTS][NUM_ASSIGNMENTS]={
        {85, 82, 80, 78, 88},
        {90, 95, 92, 87, 93},
        {45, 67, 50, 46, 70}
    };

//calculate the average assignments score per students.
    for(int j = 0; j<NUM_ASSIGNMENTS; j++){
        sum1 += scores[0][j];
    }
    average1 = sum1 / NUM_ASSIGNMENTS;
    cout<<"Student 1: "<<average1<<endl;

    for(int j = 0; j<NUM_ASSIGNMENTS; j++){
        sum2 += scores[1][j];
    }
    average2 = sum2 / NUM_ASSIGNMENTS;
    cout<<"Student 2: "<<average2<<endl;
    
    for(int j = 0; j<NUM_ASSIGNMENTS; j++){
        sum3 += scores[2][j];
    }
    average3 = sum3 / NUM_ASSIGNMENTS;
    cout<<"Student 3: "<<average3<<endl;

    return 0;
}