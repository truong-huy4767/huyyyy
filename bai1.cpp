#include<iostream>
using namespace std;

class tong {
    int a, b;
public:
    tong(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int TinhTong() {
        return a + b;
    }
};

int main() {
    int A, B;
    cin >> A>>B;
    tong s(A, B);
    cout  << s.TinhTong() << endl;
    return 0;
}
