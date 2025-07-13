#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["tamim"] = 2;         // logN
    mp["ramim"] = 500;
    mp["shamim"] = 50;
    
    // for(auto it = mp.begin(); it!= mp.end();it++)     // O(NlogN)
    // {
    //     cout << it->first << " " << it->second << endl;      // logN
    // }

    if(mp.count("hamim"))
    {
        cout << "Ache";
    }
    else    
        cout << "Nai";
    return 0;
}