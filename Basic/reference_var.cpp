#include<iostream>
#include<iomanip>
using namespace std;
int c = 47;
int main(){
    int a,b,c;
    cin >> a >> b;
    c = a+b;
    cout << "The value of local c is " << c << endl;
    cout << "The value of local c is " << :: c << endl;     //Scope resolution operator ::

    
    float a = 34.4f;
    long double b = 34.4l;

    cout << "The size of 34.4 is " << sizeof(34.4)   << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl; 

    int x = 34;
    int & y = x;
    cout << x << endl;
    cout << y << endl;

    int a =8,b=99,c=344,d=1234;
    cout << "The value of a is " << setw(5) << a << endl;
    cout << "The value of b is " << setw(5) << b << endl;
    cout << "The value of c is " << setw(5) << c << endl;
    cout << "The value of d is " << setw(5) << d << endl;
}