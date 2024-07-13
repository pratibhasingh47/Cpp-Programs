#include<iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if(age < 18){
        cout << "Cannot apply" << endl;
    }
    else{
        cout << "Can Apply" << endl;
    }
    return 0 ;

    switch(age){
        case 18:{
            cout << "Can Apply" << endl;
            break;
        }
        default :{
            cout <<"Cannot Apply" << endl;
            break;
        }
    }
}