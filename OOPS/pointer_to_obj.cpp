#include <iostream>
using namespace std;

class userinfo
{
public:
    char name[20];
    int id;
    int age;
    void readuser()
    {
        cout << "Enter user name : ";
        cin >> name;
        cout << "Enter user id : ";
        cin >> id;
        cout << "Enter user age : ";
        cin >> age;
    }
    void displayuser()
    {
        cout << "User name = " << name << endl;
        cout << "User id = " << id << endl;
        cout << "User age = " << age << endl;
    }
};

int main()
{
    userinfo u1;
    userinfo *ptr;
    ptr = &u1;
    ptr->readuser();
    ptr->displayuser();
    return 0;
}