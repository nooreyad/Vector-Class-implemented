#include "MNVector.h"
#include <bits/stdc++.h>

using  namespace std;

template <class T>
MNVector<T>::MNVector(ll cap){
    capacity = cap;
    size = 0;
    arr = new T[capacity];
}

template <class T>
MNVector<T>::MNVector(){
    capacity = 2;
    size = 0;
    arr = new T[capacity];
}

template <class T>
MNVector<T>::MNVector(T* arr2, int n){
    capacity = 2*n;
    size = n;
    arr = new T[capacity];
    for (auto i = 0; i < n; ++i) {
        arr[i] = arr2[i];
    }
}

template <class T>
MNVector<T>::~MNVector(){
    delete[] arr;
}

template <class T>
 MNVector<T>& MNVector<T>::operator= (const MNVector<T>& other){
    cout << "copy assignment\n";
    if (this != &other) {
        delete[] arr;
        size = other.size;
        capacity = other.capacity;
        for (int i=0; i < other.size; i++){
            arr[i] = other.arr[i];
        }
    }
    else{
        cout << "Cannot delete itself\n";
    }
}

template <class T>
T MNVector<T>::pop_back(){
    return arr[size-- -1];
}

template <class T>
void MNVector<T>::insert(iterator x, T y){
    try{
        if(x < begin() || x > end())
            throw "Invalid iterator";
        else {
            T* newArr = new T[capacity*2];
            iterator itr2 = newArr;
            size++;
            for(iterator itr = begin() ; itr < x ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            *itr2 = y;
            itr2++;
            for(iterator itr = x+1 ; itr <= end() ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            delete[] arr;
            arr = newArr;
//            newArr = nullptr;
        }
    }
    catch(const char* msg){
        cout << msg << endl;
    }
}
template <class T>
void MNVector<T>::erase(iterator x){
    try{
        if(x < begin() || x > end()){
            throw "Invalid iterator";
        } else {
            T* newArr = new T[capacity];
            iterator itr2 = newArr;
            size--;
            for(iterator itr = begin() ; itr < x ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            for(iterator itr = x+1 ; itr <= end() ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            delete []arr;
            arr = newArr;
        }
    }
    catch(const char* &msg){
        cout << msg << endl;
    }
}

template<class T>
void MNVector<T>::erase(iterator first, iterator last) {
    try {
        if(first < begin() || first > end() || last < begin() || last > end()){
            throw "Invalid iterator";
        }
        else{
            T* newArr = new T[capacity];
            iterator itr2 = newArr;
            size -= last-first;
            for(iterator itr = begin() ; itr < first ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            for(iterator itr = last ; itr <= end() ; itr++){
                *itr2 = *itr;
                itr2++;
            }
            delete []arr;
            arr = newArr;
        }
    }
    catch (const char* &msg){
        cout << msg << endl;
    }
}

template <class T>
ll MNVector<T>::resize(){
    T* newArr = new T[capacity*2];
    capacity *= 2;
    for (int i=0; i < size; i++){
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    newArr = nullptr;
    return capacity;
}

template <class T>
bool MNVector<T>::empty(){
    if (size ==0){
        return true;
    }
    else {
        return false;
    }
}

template <class T>
MNVector<T>::MNVector(const MNVector& other){
    cout << "Copy constructor called" << endl;
    for (int i = 0; i < other.Size(); ++i) {
        *(this->arr[i]) = *(other.arr[i]);
    }
    this->size = other.size;
    this->capacity = other.capacity;
}

template <class T>
int MNVector<T>::Size() const{
    return this->size;
}

template <class T>
int MNVector<T>::Capacity() const{
    return this->capacity;
}

template <class T>
bool MNVector<T>::operator< (const MNVector<T>& other){
    if(this->size <= other.size){
        for (int i = 0; i < this->size; ++i) {
            if(arr[i] < other.arr[i]){
                return true;
            } else if(arr[i] > other.arr[i]){
                return false;
            }
        }
    } else {
        for (int i = 0; i < other.size; ++i) {
            if(arr[i] < other.arr[i]){
                return true;
            } else if(arr[i] > other.arr[i]){
                return false;
            }
        }
    }
    return false;
}

template <class T>
T& MNVector<T>::operator[](int n){
    try {
        if(n < 0 || n > size-1)
            throw "An error has occurred, index out of range.";
    }
    catch(const char* msg){
        cout << msg << endl;
        return arr[0];
    }
    return arr[n];
}

template <class T>
ostream& operator << (ostream& out, MNVector<T>& vec){
    for (int i = 0; i < vec.Size(); ++i) {
        out << vec.arr[i];
        out << ' ';
    }
    out << endl;
    return out;
}

template <class T>
int MNVector<T>::push_back(T n) {
    if(size < capacity){
        arr[size++] = n;
    } else {
        T* newArr = new T[capacity*2];
        capacity *= 2;
        for(int i = 0; i < size; i++){
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        arr[size++] = n;
        newArr = nullptr;
    }
    return size;
}

template<class T>
void MNVector<T>::clear() {
    for (T* i = arr; i != arr+size ; ++i) {
        i->~T();
    }
    size = 0;
}

template<class T>
MNVector<T> &MNVector<T>::operator=(const MNVector<T> &&other) {
    cout << "Move assignment called" << endl;
    size = other.size;
    capacity = other.capacity;
    arr = other. arr;
    other.arr = nullptr;
    return *this;
}

template<class T>
bool MNVector<T>::operator==(const MNVector<T> &other) {
    if(this->size == other.size){
        for (int i=0; i < size; i++) {
            if(arr[i] != other.arr[i]){
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}
