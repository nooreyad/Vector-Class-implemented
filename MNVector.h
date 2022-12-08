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
    //// Constructors and Big 4
    MNVector();
    MNVector(ll cap);
    MNVector(T*, int n);
    MNVector(const MNVector& other);
    ~MNVector();
    MNVector& operator= (const MNVector& other);
    MNVector& operator= (const MNVector&& other);

    //// Access operations
    T& operator[](int n);

    //// Modifing operations
    int push_back(T n);
    T pop_back();
    void erase();
    void clear();
    void insert();

    //// Iterators
    // iterator begin()
    // iterator end()

    //// Comparison operations
    bool operator== (const MNVector<T>& other);
    bool operator< (const MNVector<T>& other);

    //// Capacity operations
    int Size() const;
    int Capacity() const;
    ll resize();
    bool empty();

    //// Friends
    friend ostream& operator << (ostream& out, MNVector<T> vec);
};


#endif //OOP_ASSIGNMENT_3_MNVECTOR_H
