#include <iostream>
#include <list>

using namespace std;

void display(list<int> &int_list){
    list<int> :: iterator it;
    for(it = int_list.begin() ; it!= int_list.end() ; it++){
        cout << *it << "  ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;

    list1.push_back(5);
    list1.push_back(50);
    list1.push_back(54);
    list1.push_back(41);
    list1.push_back(71);
    list1.push_back(71);

    display(list1);
    list1.sort();
    display(list1);

    list<int> list2(3);
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 6;
    itr++;
    *itr = 9;
    itr++;
    display(list2);
    list1.merge(list2);
    display(list1);
    list1.reverse();
    display(list1);


    list<int> :: iterator iter;
    iter = list1.begin();
    
    cout << *iter << "  ";
    iter++;
    cout << *iter << "  ";
    iter++;
    cout << *iter << "  ";
    iter++;
    cout << *iter << "  ";
    iter++;
    cout << *iter << "  ";
    iter++;
    cout << *iter << "  ";
    iter++;

    return 0;
}