// Purpose:  Uses branching to print different messages based on a student's
//           information.
#include <iostream>
using namespace std;

int main(){
    int credits;
    bool isCommuter;
    string major;

    cout << "Enter the number of credit hours you have completed: ";
    cin >> credits;

    cout << "Enter your commuter status [1=commuter,0=not a commuter]: ";
    cin >> isCommuter;

    cout << "Enter your major prefix (CSC/BEN/MTH/etc.): ";
    cin >> major;

    // TODO Add in the questions/solutions here.
    if(isCommuter){
        cout<<"Parking must be a pain!"<<endl;
    }

    if(credits>=30&&credits<=59){
        cout<<"You have Sophomore status"<<endl;
    }
    else if((credits+30)>=30 && (credits+30)<=59){
        cout<<"You'll be a Sophomroe next year!"<<endl;
    }

    if(major=="CSC"||major=="MTH"||major=="BEN"||major=="BIO"||major=="ENV"||major=="BUS"){
        cout<<"You're at home in LSB!"<<endl;
    }

    return 0;
}
