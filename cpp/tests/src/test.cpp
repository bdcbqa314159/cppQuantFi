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


int main() {
    testingVanillaOption();
    testingPayOffs();
    testingMatrix();
    testingFunctors();
    
    return 0;
}
