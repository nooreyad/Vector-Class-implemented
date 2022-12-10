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

//    cout << t[0] << endl;
//    for (auto i = t.begin(); i < t.end(); ++i) {
//        cout << *i << endl;
//    }
    cout << endl;
    MNVector<string> &t3(t);
//    cout << t3[0] << endl;
//    for (auto i = t3.begin(); i < t3.end(); ++i) {
//        cout << *i << endl;
//    }
//    t.erase(t.begin(), t.end());
//    int arr[5] = {0,1,2,3,4,};
//    MNVector<int> t2(arr, 3);
//    t.clear();
//    cout << t.Size() << endl;
//    for (auto i = t.begin(); i < t.end(); ++i) {
//        cout << *i << endl;
//    }
//    cout << t;
    MNVector<string> t4;
    t4.push_back("merna");
    t4.push_back("vest");
    t4.push_back("test1");
    t4.push_back("test2");
//    if(t < t4){
//        cout << "Yes\n";
//    } else {
//        cout << "No\n";
//    }
    MNVector<int> num(5);
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    MNVector<int> num2(5);
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    if(num == num2){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    // move assignment implementation
//    for (auto i = t.begin(); i < t.end(); ++i) {
//        cout << *i << endl;
//    }
//    cout << endl;
//    for (auto i = t4.begin(); i < t4.end(); ++i) {
//        cout << *i << endl;
//    }
}
