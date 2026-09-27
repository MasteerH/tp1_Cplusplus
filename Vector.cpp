#include "Vector.hpp"
#include <cstdio>





Vector::Vector() : Size(0), Vec(nullptr) {printf("constructeur lance\n");}

Vector::~Vector() {

    delete[] Vec;

};

unsigned int Vector::GetSize() const {
    return Size;
};

const double* Vector::GetVector() const {
    return Vec;
};
void Vector::AddData(double v) {

    unsigned int n = this->Size + 1;
    double* v1 = new double[n];
    for (unsigned int i=0; i<n-1; i++) {
        v1[i] = this->Vec[i];
    };
    v1[n-1] = v;
    delete[] Vec;
    this->Size = n;
    this->Vec = v1;
};
void Vector::AddVector(const double* v, unsigned int size) {

    unsigned int n = this->Size + size;
    double* v2 = new double[n];
    

    for (unsigned int i = 0; i < this->Size; i++) {
        v2[i] = this->Vec[i];
    };

    for (unsigned int i = 0; i < size; i++) {
        v2[i + this->Size] = v[i];
    };

    delete[] Vec;
    this->Size = n;
    this->Vec = v2;
};
/*
void Vector::AddVector(const double* v, unsigned int size) {
    for (unsigned int i = 0; i<size; i++) {AddData(v[i]);}
};
*/
void Vector::ReplaceVector(const double* v, unsigned int size) {

    double* v3 = new double[size];
    for (unsigned int i = 0; i<size; i++) {v3[i] = v[i];};
    delete[] Vec;
    this->Size = size;
    this->Vec = v3;
};