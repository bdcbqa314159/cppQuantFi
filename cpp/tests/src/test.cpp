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


int main() {
    testingVanillaOption();
    testingPayOffs();
    return 0;
}
