#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for(int i = 0; i< v.size() ; i++){
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> vec1;
    int element;
    for(int i = 0 ; i< 4 ; i++){
        cout << "Enter the element to add to this vector";
        cin >> element;
        vec1.push_back(element);
    }
    return 0;
}