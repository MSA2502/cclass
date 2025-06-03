#include <stdio.h>
#include <iostream>
#include <string>
//
class myClass {
    public:
    void myString() {
        std::cout << "hello world \n";
        //printf("aaaa");
    }
    int myNum;
    std :: string Word = "Hello \n";
};

class inheritClass : public myClass {
    public :
    std :: string Word = "Bye";
};


int main() {
    myClass myObject;
    myObject.myString();
    myObject.myNum = 10;
    std::cout << myObject.myNum << std :: endl;
    std :: cout << myObject.Word << std::endl;
    inheritClass mySecondObject;
    std :: cout << mySecondObject.Word << "\n";
    return 0;
}
