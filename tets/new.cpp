#include <stdio.h>
#include <cstdlib>

class myClass {
    public:
    void myString() {
        printf("aaaa\n");
    }
    int myNum;
};
//


int main() {
    myClass myObject;
    myObject.myString();
    myObject.myNum = 10;
    //std::cout << myObject.myNum;
    return 0;
}
