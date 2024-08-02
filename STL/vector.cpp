#include <iostream>
#include <vector>

using namespace std;

template <class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;

    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element to add to this vector";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    cout << "The vector is displayed as :" << endl;
    display(vec1);

    // vec1.insert(iterator , 786);

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 5, 786);
    display(vec1);


    vector<int> vec2(4);
    vector<char> vec3(4);
    vector<char> vec5(vec2);
    vector<int> v(6,3);
    vector<double> vec4(4);
    // vec3.push_back('abcd');
    // display(vec1);
    // display(vec2);
    // display(vec3);
    // display(vec4);
    display(v);

    
    return 0;
}