#include <iostream>
using namespace std;

int main(){
    const int NUM_STUDENTS = 3;
    const int NUM_ASSIGNMENTS = 5;
    const int CAPACITY = 10;
   // float sum1, sum2, sum3, sum4, sum5, average1, average2, average3, average4, average5;
    float sum[NUM_ASSIGNMENTS];
    float average[NUM_ASSIGNMENTS];

    int scores[NUM_STUDENTS][NUM_ASSIGNMENTS]={
        {85, 82, 80, 78, 88},
        {90, 95, 92, 87, 93},
        {45, 67, 50, 46, 70}
    };

    //calculate the average student score per assignment.
    for(int i =0; i < NUM_ASSIGNMENTS; i++){
        for(int j = 0; j<NUM_STUDENTS; j++){
            sum[i] += scores[j][i];
            cout<<sum[i]<<endl;
        }
        average[i]=sum[i]/NUM_STUDENTS;
        cout<<"Assignment"<<i+1<<": "<<average[i]<<endl;
    }


    return 0;
}
//terminal
// 85
// 175
// 220
// Assignment1: 73.3333
// 82
// 177
// 244
// Assignment2: 81.3333
// 3.50459e+033
// 3.50459e+033
// 3.50459e+033
// Assignment3: 1.1682e+033
// 78
// 165
// 211
// Assignment4: 70.3333
// nan
// nan
// nan
// Assignment5: nan