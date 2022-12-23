#include <iostream>

class Parallelogram {
private:
    unsigned int p_niz;
    unsigned int p_bok;
public:
    Parallelogram(unsigned int niz, unsigned int bok) :
        p_niz(niz), p_bok(bok) {}

    unsigned int getNiz() {
        return p_niz;
    }
    unsigned int getBok() {
        return p_bok;
    }
    unsigned int getPerimeter() {
        return 2 * (p_niz + p_bok);
    }
};

int main() {

    Parallelogram parallelogram(15, 9);

    std::cout << "Bottom edge: " << parallelogram.getNiz() << std::endl
        << "Side edge: " << parallelogram.getBok() << std::endl
        << "Perimeter: " << parallelogram.getPerimeter() << std::endl;
}