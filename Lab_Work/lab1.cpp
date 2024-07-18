#include<iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
    return 0;
}


#include<iostream>
using namespace std;
class H{
    public:
    void print(){
        cout << "Hello World" << endl;
    }
};
int main()
{
    H w;
    w.print();
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    return 0;
}


#include<iostream>
using namespace std;

class student{
    public:
    int num;
    string name;
};
int main()
{
    student a;
    a.number = 101;
    a.name = "Pratibha";
    cout << "The roll no. of student is " << a.number << endl;
    cout << "The name of student is " << a.name << endl;
    return 0;
}


#include<iostream>
using namespace std;
class student{
    public:
    int roll_no ;
    string name;
};
class car {
    public:
    int price;
    string name;
};
int main()
{
    student p;
    car t;
    t.price = 600000;
    t.name = "TATA Tiago";
    p.roll_no = 43;
    p.name = "Pratibha Singh";
    cout << "The car nam is " << t.name << endl;
    cout << "The car price is " << t.price << endl;
    cout << "The roll no. of student is " << p.roll_no << endl;
    cout << "The name of student is " << p.name << endl;
    return 0;
}