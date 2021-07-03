#include <iostream>
using namespace std;

int main() {
    const double pi = 22.0/7;
    int radius = 0;
    cin>>radius;
    cout<<endl<<"The area of a circle is "<<(pi * radius * radius)<<endl;
    cout<<"The circumference of a circle is "<<(2 * pi * radius)<<endl;
    return 0;
}
