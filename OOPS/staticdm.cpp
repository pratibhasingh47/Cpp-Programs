#include<bits/stdc++.h>
using namespace std;
class item{
    static int count;
    int num;
    public:
    void getcount(int i){
        num = i;
        count++;
    }
    void showcount(){
        cout << count << endl;
    };
};
int item :: count ;
int main()
{
        item a,b,c;
        a.showcount();
        b.showcount(); 
        c.showcount();
        a.getcount(100);
        b.getcount(200);
        c.getcount(300);
        a.showcount();
        b.showcount();
        c.showcount();
}
