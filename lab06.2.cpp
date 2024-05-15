#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // ����������� �� �������������
    Fraction() : numerator(0), denominator(1) {}

    // ����������� � �����������
    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (den == 0) {
            std::cout << "�������: ��������� �� ���� ���� �����.\n";
            exit(1);
        }
    }

    // ����������� ��ﳿ
    Fraction(const Fraction& f) : numerator(f.numerator), denominator(f.denominator) {}

    // �������� ������������
    Fraction& operator=(const Fraction& f) {
        if (this != &f) {
            numerator = f.numerator;
            denominator = f.denominator;
        }
        return *this;
    }

    // �������� ���������
    Fraction operator+(const Fraction& f) const {
        return Fraction(numerator * f.denominator + f.numerator * denominator, denominator * f.denominator);
    }

    // �������� ������
    Fraction operator/(const Fraction& f) const {
        return Fraction(numerator * f.denominator, denominator * f.numerator);
    }

    // �������� ����������
    Fraction& operator++() {
        numerator += denominator;
        return *this;
    }

    // �������� ����������
    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }

    // �������� ���������
    bool operator==(const Fraction& f) const {
        return numerator * f.denominator == f.numerator * denominator;
    }

    // ��������� �����
    void print() const {
        std::cout << numerator << "/" << denominator << "\n";
    }
};
