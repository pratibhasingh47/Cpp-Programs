#include <iostream>
#include <string>

using namespace std;

class UserInfo {
private:
    string name;
    int age;
    double salary;

public:
    // Member function to read user information with error checking
    void readUser() {
        // Input user name
        cout << "Enter user name: ";
        cin >> name;

        // Input user age with error checking
        do {
            cout << "Enter user age (between 18 and 70): ";
            cin >> age;

            if (age < 18 || age > 70) {
                cout << "Invalid user age. Please enter age between 18 and 70.\n";
            }
        } while (age < 18 || age > 70);

        // Input user salary
        cout << "Enter user salary: ";
        cin >> salary;
    }

    // Member function to display user information
    void showUser() {
        cout << "\nUser Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    // Create an instance of the UserInfo class
    UserInfo user;

    // Call the readUser function to input user information
    user.readUser();

    // Call the showUser function to display user information
    user.showUser();

    return 0;
}




--------------------------------------------------------------------------------------


#include <iostream>
#include <string>

using namespace std;

namespace Store {
    class P {
    private:
        string n;
        double p;
        int q;

    public:
        P(const string& name, double price, int quantity)
            : n(name), p(price), q(quantity) {}

        void d() const {
            cout << "Product: " << n << "\nPrice: $" << p << "\nStock Quantity: " << q << "\n";
        }

        void u(int quantity) {
            q += quantity;
        }
    };

    class O {
    private:
        string c;
        P p[10];
        int nP;
        int mP;

    public:
        O(const string& customer, int maxProducts)
            : c(customer), nP(0), mP(maxProducts) {}

        void a(const P& product) {
            (nP < mP) ? p[nP++] = product : cout << "Order is full. Cannot add more products.\n";
        }

        void d() const {
            cout << "Customer: " << c << "\nOrdered Products:\n";
            for (int i = 0; i < nP; ++i)
                p[i].d();
        }
    };
}

int main() {
    using namespace Store;

    P l("Laptop", 1200.0, 10), s("Smartphone", 800.0, 15);

    O o1("John", 2), o2("Jane", 2);

    o1.a(l); o1.a(s);
    o2.a(s);

    cout << "Order 1:\n"; o1.d();
    cout << "\nOrder 2:\n"; o2.d();

    l.u(-2);
    cout << "\nUpdated Product Information:\n"; l.d();

    return 0;
}

