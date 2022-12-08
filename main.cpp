#include <bits/stdc++.h>
#include "MNVector.h"
#include <MNVector.cpp>

using namespace std;

int main(){
    MNVector<int> vec;
    MNVector<string> s(5);
    if(s.empty()) cout << "empty\n";
    vec.resize();
    cout << "resize\n";

    cout << "shaghal\n";
    MNVector<string> t(5);
    t.push_back("merna");
    t.push_back("test");
    t.push_back("test1");
    t.push_back("test2");
    t.push_back("test3");
    t.push_back("test4");
    cout << t[0];
}
