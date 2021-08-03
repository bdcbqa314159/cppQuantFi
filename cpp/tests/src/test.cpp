#include <cppQuantFi>
#include <iostream>
#include <string>


int testingVanillaOption(){
    
    VanillaOption s;
    
    std::cout<<"call price: "<<std::endl;
    std::cout<<s.calc_call_price()<<std::endl;
    
    std::cout<<"put price: "<<std::endl;
    std::cout<<s.calc_put_price()<<std::endl;
    
    
    return 0;
}

int testingPayOffs(){
    
    PayOffCall call(90);
    
    std::cout<<call(190)<<std::endl;
    
    
    return 0;
}

int testingMatrix(){
    
    Matrix m;
    Matrix m1(3,3,1);
    
    int row = 1;
    int column = 1;
    std::cout<<m1.value(row,column)<<std::endl;
    
    return 0;
}

int testingFunctors(){
    
    double a = 5.0;
    double b = 10.0;
    
    BinaryFunction* pAdd = new Add();
    BinaryFunction* pMultiply = new Multiply();
    
    std::cout<<binary_op(a, b, pAdd)<<std::endl;
    std::cout<<binary_op(a, b, pMultiply)<<std::endl;
    
    return 0;
}

int testingQSMatrix(){
    
    QSMatrix<double> mat1(10,10,1.);
    QSMatrix<double> mat2(10,10,2.);
    
    QSMatrix<double> mat3 = mat1+mat2;
    
    for (int i = 0; i<mat3.get_rows(); i++){
        for (int j = 0; j<mat3.get_cols(); j++){
            std::cout<<mat3(i,j)<<" ";
        }
        std::cout<<std::endl;
    }
    
    return 0;
}

int testingEigen(){
    
    std::cout<<"====== Eigen library tests: "<<std::endl;
    Eigen::MatrixXd m(3,3);
    
    m << 1,2,3,4,5,6,7,8,9;
    
    std::cout<<m<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    Eigen::Matrix3d p;
    Eigen::Matrix3d q;
    
    Eigen::Vector3d r(1,2,3);
    Eigen::Vector3d s(4,5,6);
    
    p << 1,2,3,4,5,6,7,8,9;
    q <<10,11,12,13,14,15,16,17,18;
    
    std::cout<<"p+q =\n"<<p+q<<std::endl;
    std::cout<<"p-q =\n"<<p-q<<std::endl;
    
    std::cout<<"r+s =\n"<<r+s<<std::endl;
    std::cout<<"r-s =\n"<<r-s<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    std::cout<<"p * 3.14159 =\n"<<p*3.14159<<std::endl;
    std::cout<<"p / 2.71828 =\n"<<p/2.71828<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    Eigen::Matrix3d p1 = Eigen::Matrix3d::Random(3, 3);
    std::cout<<"p1 =\n"<<p1<<std::endl;
    std::cout<<"p1^T =\n"<<p1.transpose()<<std::endl;
    
    p1.transposeInPlace();
    std::cout<<"p1 =\n"<<p1<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    std::cout<<"p*p=\n"<<p*p<<std::endl;
    std::cout<<"p*r=\n"<<p*r<<std::endl;
    std::cout<<"r^T*p=\n"<<r.transpose()*p<<std::endl;
    std::cout<<"r^T*s=\n"<<r.transpose()*s<<std::endl;
    
    std::cout<<"r . s=\n"<<r.dot(s)<<std::endl;
    std::cout<<"r x s=\n"<<r.cross(s)<<std::endl;
    
    std::cout<<"======"<<std::endl;
    std::cout<<"p.sum=\n";
    std::cout<<p.sum()<<std::endl;
    std::cout<<"p.prod=\n";
    std::cout<<p.prod()<<std::endl;
    std::cout<<"p.mean=\n";
    std::cout<<p.mean()<<std::endl;
    std::cout<<"p.minCoeff=\n";
    std::cout<<p.minCoeff()<<std::endl;
    std::cout<<"p.maxCoeff=\n";
    std::cout<<p.maxCoeff()<<std::endl;
    std::cout<<"p.trace=\n";
    std::cout<<p.trace()<<std::endl;
    
    
    return 0;
}

int main() {
    testingVanillaOption();
    testingPayOffs();
    testingMatrix();
    testingFunctors();
    testingQSMatrix();
    testingEigen();
    
    return 0;
}
