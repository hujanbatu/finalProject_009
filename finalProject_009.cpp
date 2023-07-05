#include <iostream>
using namespace std;

class bidangDatar{
private:
    int x, y;
public:
    bidangDatar(){
        x = 0;
        y = 0;
    }
    virtual void input(){}
    virtual float Luas(int a){return 0;}
    virtual float Keliling(int a){return 0;}
    virtual void cekUkuran(){}
    void setX(int a){
        this->x = a;
    }
    void setY(int a){
        this->y = a;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
class Lingkaran : public bidangDatar {
public:
    void input() {
        int r;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> r;
        setX(r);
    }

    float Luas(int r) {
        return 3.14 * r * r;
    }

    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};
class Persegipanjang:public bidangDatar{ /*lengkapi disini*/ };
int main(){ /*lengkapi disini*/ }