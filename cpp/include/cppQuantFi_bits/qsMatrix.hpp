#ifndef QSMATRIX_H
#define QSMATRIX_H

#include <vector>


template <typename T>
class QSMatrix {

private:
    std::vector<std::vector<T> > mat;
    unsigned rows;
    unsigned cols;
    
public:
    QSMatrix(unsigned rows, unsigned cols, const T& initial);
    QSMatrix(const QSMatrix<T>& rhs);
    virtual ~QSMatrix();
    
    QSMatrix<T>& operator= (const QSMatrix<T>& rhs);
    
    QSMatrix<T> operator+(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator +=(const QSMatrix<T>& rhs);
    
    QSMatrix<T> operator-(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator -=(const QSMatrix<T>& rhs);
    
    QSMatrix<T> operator*(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator *=(const QSMatrix<T>& rhs);
    
    QSMatrix<T> transpose();
    
    QSMatrix<T> operator+(const T& rhs);
    QSMatrix<T> operator-(const T& rhs);
    QSMatrix<T> operator*(const T& rhs);
    QSMatrix<T> operator/(const T& rhs);
    
    std::vector<T> operator*(const std::vector<T>& rhs);
    std::vector<T> diag_vec();
    
    T& operator() (const unsigned& row, const unsigned& col);
    const T& operator() (const unsigned& row, const unsigned& col) const;
    
    unsigned get_rows() const;
    unsigned get_cols() const;
};

template<typename T>
QSMatrix<T>::QSMatrix(unsigned rows, unsigned cols, const T& initial){
    
    mat.resize(rows);
    
    for (unsigned i=0; i<mat.size(); i++){
        mat.at(i).resize(cols, initial);
    }
    
    this->rows = rows;
    this->cols = cols;
}

template<typename T>
QSMatrix<T>::QSMatrix(const QSMatrix<T>& rhs){
    
    mat = rhs.mat;
    rows = rhs.get_rows();
    cols = rhs.get_cols();
}

template<typename T>
QSMatrix<T>::~QSMatrix(){
    
}

template<typename T>
QSMatrix<T>& QSMatrix<T>::operator=(const QSMatrix<T>& rhs){
    
    if (this != &rhs){
        unsigned new_rows = rhs.get_rows();
        unsigned new_cols = rhs.get_cols();
        
        mat.resize(new_rows);
        
        for (unsigned i=0; i<mat.size(); i++){
            mat.at(i).resize(new_cols);
        }
        
        for (unsigned i=0; i<new_rows; i++){
            for (unsigned j=0; j<new_cols; j++){
                mat.at(i).at(j)=rhs(i,j);
            }
        }
        
        this->rows = rows;
        this->cols = cols;
    }
    
    return *this;
}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator+(const QSMatrix<T>& rhs){
    
    QSMatrix result(rows, cols, 0);
    
    for (unsigned i=0; i<rows; i++){
        for (unsigned j=0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) + rhs(i,j);
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T>& QSMatrix<T>::operator+=(const QSMatrix<T>& rhs){
    
    unsigned rows = rhs.get_rows();
    unsigned cols = rhs.get_cols();
    
    for (unsigned i=0; i<rows; i++){
        for (unsigned j=0; j<cols; j++){
            this->mat.at(i).at(j) += rhs(i,j);
        }
    }
    
    return *this;

}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator-(const QSMatrix<T>& rhs){
    
    QSMatrix result(rows, cols, 0);
    
    for (unsigned i=0; i<rows; i++){
        for (unsigned j=0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) - rhs(i,j);
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T>& QSMatrix<T>::operator-=(const QSMatrix<T>& rhs){
    
    unsigned rows = rhs.get_rows();
    unsigned cols = rhs.get_cols();
    
    for (unsigned i=0; i<rows; i++){
        for (unsigned j=0; j<cols; j++){
            this->mat.at(i).at(j) -= rhs(i,j);
        }
    }
    
    return *this;

}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator*(const QSMatrix<T>& rhs){
    
    unsigned r = this->rows;
    unsigned c = rhs.get_cols();
    
    QSMatrix result(r, c, 0);
    
    for (unsigned i=0; i<r; i++){
        for (unsigned j=0; j<c; j++){
            for (unsigned k=0; k<r; k++){
                result(i,j) += this->mat.at(i).at(k)*rhs(k,j);
            }
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T>& QSMatrix<T>::operator*=(const QSMatrix<T>& rhs){
    
    QSMatrix<T> result = (*this)*rhs;
    (*this) = result;
    
    return *this;

}

template<typename T>
QSMatrix<T> QSMatrix<T>::transpose(){
    
    QSMatrix<T> result(rows, cols, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result(i,j) = this->mat.at(j).at(i);
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator+(const T& val){
    
    QSMatrix<T> result(rows, cols, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) + val;
        }
    }
    
    return result;
}


template<typename T>
QSMatrix<T> QSMatrix<T>::operator-(const T& val){
    
    QSMatrix<T> result(rows, cols, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) - val;
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator*(const T& val){
    
    QSMatrix<T> result(rows, cols, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) * val;
        }
    }
    
    return result;
}

template<typename T>
QSMatrix<T> QSMatrix<T>::operator/(const T& val){
    
    QSMatrix<T> result(rows, cols, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result(i,j) = this->mat.at(i).at(j) / val;
        }
    }
    
    return result;
}

template<typename T>
std::vector<T> QSMatrix<T>::operator*(const std::vector<T>& v){
    
    std::vector<T> result(v.size, 0);
    
    for (unsigned i = 0; i<rows; i++){
        for (unsigned j = 0; j<cols; j++){
            result.at(i)=this->mat.at(i).at(j)*v[j];
        }
    }
    
    return result;
}

template<typename T>
std::vector<T> QSMatrix<T>::diag_vec(){
    
    std::vector<T> result(rows, 0);
    
    for (unsigned i = 0; i<rows; i++){
        result.at(i) = this->mat.at(i).at(i);
    }
    
    return result;
}

template<typename T>
T& QSMatrix<T>::operator()(const unsigned& row, const unsigned& col){
    
    return this->mat.at(row).at(col);
}

template<typename T>
const T& QSMatrix<T>::operator()(const unsigned& row, const unsigned& col) const {
    
    return this->mat.at(row).at(col);
}

template<typename T>
unsigned QSMatrix<T>::get_rows() const{
    return this->rows;
}

template<typename T>
unsigned QSMatrix<T>::get_cols() const{
    return this->cols;
}


#endif
