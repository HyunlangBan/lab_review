#include <iostream>
#include <cfloat>
#include <cmath>
using namespace std;

int main(){
//Print out how many bytes taking up.
//short
int short_bytes = sizeof(short);
cout<<"short: "<<short_bytes<<"bytes"<<endl;
//int
int int_bytes = sizeof(int);
cout<<"int: "<<int_bytes<<"bytes"<<endl;
//long
int long_bytes = sizeof(long);
cout<<"long: "<<long_bytes<<"bytes"<<endl;
//long long
int long_long_bytes = sizeof(long long);
cout<<"long long: "<<long_long_bytes<<"bytes"<<endl;
//float
int float_bytes = sizeof(float);
cout<<"float: "<<float_bytes<<"bytes"<<endl;
//double
int double_bytes = sizeof(double);
cout<<"double: "<<sizeof(double)<<"bytes"<<endl;
//long double
int long_double_bytes = sizeof(long double);
cout<<"long double: "<<long_double_bytes<<"bytes"<<endl;

//the largest number you can represent for that type
int bits;
//short
bits = short_bytes*8;
cout<<"Largest short: "<<pow(2, bits-1)-1<<endl;
//int
bits = int_bytes*8;
cout<<"Largest int: "<<pow(2, bits-1)-1<<endl;
//long
bits = long_bytes*8;
cout<<"Largest long: "<<pow(2, bits-1)-1<<endl;
//long long
bits = long_long_bytes*8;
//max = pow(2, bits-1)-1;
cout<<"Largest long long: "<< pow(2, bits-1)-1<<endl;
//unsigned int
bits = int_bytes*8;
//max = pow(2, bits)-1;
cout<<"Largest unsigned int: "<<pow(2, bits)-1<<endl;
//unsigned long
bits = long_bytes*8;
//max = pow(2, bits)-1;
cout<<"Largest unsigned long: "<< pow(2, bits)-1<<endl;
//float
cout<<"Largest float: "<<FLT_MAX<<endl;
//double
cout<<"Largest double: "<<DBL_MAX<<endl;
//long double
cout<<"Largest long double: "<<LDBL_MAX<<endl;

    return 0;
}

//틀린 이유: int max = pow(2, bits-1)-1 인데 max는 int값이 아니므로!