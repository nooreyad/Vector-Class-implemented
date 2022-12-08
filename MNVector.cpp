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
void MNVector<T>::erase(){

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
