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
        *arr[i] = *arr2[i];
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
    return arr[size--];// 7asa eno el mfrood a4=3mel -1 ba3d ma3mel size-- bas msh mot2akeda
}

template <class T>
void MNVector<T>::insert(){

}
template <class T>
void MNVector<T>::erase(iterator x){

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
    if(n < 0 || n > size-1){
        cout << "An error has occurred, index out of range." << endl;
        exit(-1);
    }
    return arr[n];
}

//template <class T>
//ostream& operator << (ostream& out, MNVector<T> vec){
//    for (auto i = vec.begin(); i != vec.end(); ++i) {
//        out << *i << ' ';
//    }
//    out << endl;
//    return out;
//}

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
void MNVector<T>::erase(iterator x, iterator y){
    MNVector<T> tempVec;
    int cnt = 0;
    for (auto i = arr->begin(); i < x; ++i) {
        tempVec[i] = arr[i];
        cnt++;
    }
    for (auto i = y; i < arr->end(); ++i) {
        tempVec[cnt] = arr[i];
        cnt++;
    }
    delete [] arr;
    arr = tempVec;
    size = cnt;
    tempVec = nullptr;
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