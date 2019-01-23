#include <iostream>
using namespace std;

int main(){
    const int NUM_STUDENTS = 3;
    const int NUM_ASSIGNMENTS = 5;
    const int CAPACITY = 10;
   // float sum1, sum2, sum3, sum4, sum5, average1, average2, average3, average4, average5;
    float sum[CAPACITY];
    float average[CAPACITY];

    int scores[NUM_STUDENTS][NUM_ASSIGNMENTS]={
        {85, 82, 80, 78, 88},
        {90, 95, 92, 87, 93},
        {45, 67, 50, 46, 70}
    };

    //calculate the average student score per assignment.
    for(int i =0; i < NUM_ASSIGNMENTS; i++){
        for(int j = 0; j<NUM_STUDENTS; j++){
            sum[i] += scores[j][i];
        }
        average[i]=sum[i]/NUM_STUDENTS;
        cout<<"Assignment"<<i+1<<": "<<average[i]<<endl;
    }


    return 0;
}
