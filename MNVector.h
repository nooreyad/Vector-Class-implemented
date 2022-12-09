#ifndef OOP_ASSIGNMENT_3_MNVECTOR_H
#define OOP_ASSIGNMENT_3_MNVECTOR_H
#include <bits/stdc++.h>
#define ll long long
using namespace std;

template <class T>
class MNVector {
protected:
    T* arr;
    ll size;
    ll capacity;
    typedef T* iterator;
public:
    //// Constructors and Big 4
    MNVector();
    MNVector(ll cap);
    MNVector(T* arr2, int n);
    MNVector(const MNVector& other);
    ~MNVector();
    MNVector& operator= (const MNVector& other);
    MNVector& operator= (const MNVector&& other);

    //// Access operations
    T& operator[](int n);

    //// Modifing operations
    int push_back(T n);
    T pop_back();
    void erase(iterator x);
    void erase(iterator x, iterator y);
    void clear();
    void insert();

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

//    template <class U>
//    class iterator {
//    private:
//        T* ptr;
//    public:
//        explicit iterator(){
//            ptr = nullptr;
//        }
//        explicit iterator(T* p) {
//            ptr = p;
//        }
//        bool operator==(const iterator& other) const {
//            return ptr == other.ptr;
//        }
//    };

    //// Iterators
    //std::_Bit_const_iterator::iterator begin();
//    std::_Bit_const_iterator::iterator end() const{
//        return iterator<T>(arr + size);
//    }
    iterator begin(){
        return iterator(arr);
    }
    iterator end(){
        return iterator(arr + size);
    }
};
#endif //OOP_ASSIGNMENT_3_MNVECTOR_H
