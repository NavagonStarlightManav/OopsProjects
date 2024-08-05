#include <iostream>

class Base {
public:
    virtual  void virtualFunction() {
        std::cout << "Base virtualFunction" << std::endl;
    }
    
    static void staticFunction() {
        std::cout << "Base staticFunction" << std::endl;
    }
};

class Derived : public Base {
public:
    void virtualFunction(){
        std::cout << "Derived virtualFunction" << std::endl;
    }
    
    static void staticFunction() {
        std::cout << "Derived staticFunction" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    
    ptr->virtualFunction(); // Output: "Derived virtualFunction"
    ptr->staticFunction(); // Output: "Base staticFunction"
    
    delete ptr;
    return 0;
}