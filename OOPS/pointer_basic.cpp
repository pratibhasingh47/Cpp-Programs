#include <iostream>
using namespace std;

class userinfo
{
public:
    int id;
    int age;
    char name[20];
};

int main()
{
    class userinfo u1 = {111, 19, "Pratibha"};
    userinfo *ptr;
    ptr = &u1;
    cout << "User name = " << ptr->name << endl;
    cout << "User id = " << ptr->id << endl;
    cout << "User age = " << ptr->age << endl;
    return 0;
}