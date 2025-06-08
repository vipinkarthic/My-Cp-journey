#include<iostream>
using namespace std;

class Testimonial {
    int info;
public:
    Testimonial(int value);
};

Testimonial::Testimonial(int value) {
    info = value;
}

int main() {
    Testimonial test[100];
    return 0;
}