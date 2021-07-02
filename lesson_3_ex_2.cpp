#include <iostream>
using namespace std;

int main() {
    unsigned int firstNum = 5;
    int secondNum = -5;
    cout<<sizeof(firstNum)<<endl<<sizeof(secondNum)<<endl;
    cout<<(sizeof(firstNum) && sizeof(secondNum) < sizeof(long));
    return 0;
}
