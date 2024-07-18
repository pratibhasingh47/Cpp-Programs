#include<iostream>
using namespace std;
class Animals
{
public:
    Animals()
    {
        cout << "This is an animal\n";
    }
};
class Mammals : public Animals
{
public:
    Mammals()
    {
        cout << "This is a mammal\n";
    }
};
class Herbivores
{
public:
    Herbivores()
    {
        cout << "This is a herbivore\n";
    }
};
class Cow : public Mammals, public Herbivores
{
public:
    Cow()
    {
        cout << "Cow is a herbivore animal\n";
    }
};
int main()
{
    Cow c;
    return 0;
}