#include <iostream>
#include <bits/stdc++.h">

using namespace std;
int main() {
    int n,s;
    cin>>s>>n;
    vector< pair <int,int> > vect;
    pair <int,int> p;
    for (int i = 0; i < n; ++i) {
        cin>>p.first>>p.second;
        vect.push_back(p);
    }
    sort(vect.begin(), vect.end());

    for (int i = 0; i < n; ++i) {
        p = vect.at(i);

        if (s>p.first){
            s+=p.second;
        } else{
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";

    return 0;
}
