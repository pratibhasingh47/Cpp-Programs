#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> marksMap;
    marksMap["Pratibha"] = 99;
    marksMap["Chitur pitur"] = 19;
    marksMap["Chitur pitur part 2"] = 17;
    marksMap.insert({{"a",14},{"b",47}});

    map<string,int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}