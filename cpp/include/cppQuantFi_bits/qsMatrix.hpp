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



#endif
