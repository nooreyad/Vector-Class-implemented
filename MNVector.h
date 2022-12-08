#ifndef OOP_ASSIGNMENT_3_MNVECTOR_H
#define OOP_ASSIGNMENT_3_MNVECTOR_H
#include <bits/stdc++.h>
#define ll long long
using namespace std;

template <class T>
class MNVector {
private:
    T* arr;
    ll size;
    ll capacity;
public:
    MNVector();
    MNVector(ll cap);
    ~MNVector();
    MNVector& operator= (const MNVector& other);
    T pop_back();
    void insert();
    void erase();
    ll resize();
    bool empty();
};


#endif //OOP_ASSIGNMENT_3_MNVECTOR_H
