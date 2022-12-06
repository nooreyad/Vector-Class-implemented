#include "MNVector.h"
#include <bits/stdc++.h>

using  namespace std;

template <typename T, int c>
class MNVector {
private:
    T* Vector;
    int size;
    int capacity;
public:
    MNVector(int cap){
        capacity = cap;
        size = 0;
        Vector(new int[capacity]);
    }
    ~MNVector(){
        delete [] Vector;
    }
    MNVector& operator= (const MNVector& other){
        cout << "copy assignment\n";
        if (size != other.size){
            cout << "size mismatched: " << size << ", " << other.size << '\n';
            exit(1);
        }
        for (int i=0; i < size; i++){
            Vector[i] = other.Vector[i];

            return *this;
        }
    }
    T pop_back(T& vector){

    }
    void insert(){

    }
    void erase(){

    }
    int resize(){
        return capacity*capacity;
    }
    bool empty(){
        if (size ==0){
            return true;
        }
    }
};