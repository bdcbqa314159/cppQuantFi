#ifndef MATRIX_H
#define MATRIX_H
#include <vector>

template <typename T=double>
class Matrix{
    
private:
    std::vector< std::vector<T> > mat;
    
public:
    Matrix();
    Matrix(const int& rows, const int& columns, const T& val);
    Matrix(const Matrix& rhs);
    Matrix<T>& operator=(const Matrix<T>& rhs);
    
    virtual ~Matrix();
    
    std::vector<std::vector<T>> get_mat() const;
    T& value(const int& row,const int& column);
    
};

template <typename T>
Matrix<T>::Matrix(){
    
}

template <typename T>
Matrix<T>::Matrix(const int& rows, const int& columns, const T& val){
    
    for (int i=0; i<rows; i++){
        std::vector<T> col_vec(columns, val);
        mat.push_back(col_vec);
    }
}

template <typename T>
Matrix<T>::Matrix(const Matrix<T>& rhs){
    
    mat = rhs.get_mat();
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs){
    
    if (this != &rhs){
        mat = rhs.get_mat();
    }
    
    return *this;
}

template <typename T>
Matrix<T>::~Matrix(){
    
}

template <typename T>
std::vector<std::vector<T>> Matrix<T>::get_mat() const{
    return mat;
}

template <typename T>
T& Matrix<T>::value(const int& row,const int& column){
    
    return mat[row][column];
}

#endif
