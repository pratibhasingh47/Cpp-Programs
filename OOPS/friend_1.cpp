#include <iostream>
using namespace std;
class userinfo
{
    char name[20];
    int userID;
    float salary;

public:
    void read()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter User ID : ";
        cin >> userID;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    friend void display(userinfo);
};

void display(userinfo ui)
{
    cout << "details of user & salary " << ui.userID << ui.salary;
}
int main()
{
    userinfo obj;
    obj.read();
    display(obj);
    return 0;
}