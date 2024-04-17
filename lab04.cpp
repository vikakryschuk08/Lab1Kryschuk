#include <iostream>

// ������� ���� "Transport"
class Transport {
public:
    virtual void drive() = 0; // ����� ��������� �������
    virtual void brake() = 0; // ����� ��������� �������
};

// ������� ���� "Tap"
class Tap : public Transport {
private:
    int carrying_capacity; // �������
    int arrow; // �������
public:
    Tap(int �, int �) : carrying_capacity(�), arrow(�) {} // �����������

    void drive() override {
        std::cout << "Tap is driving.\n";
    }

    void brake() override {
        std::cout << "Tap is braking.\n";
    }

    void up() {
        std::cout << "Tap is lifting up.\n";
    }

    void down() {
        std::cout << "Tap is going down.\n";
    }
};

int main() {
    Tap tap(10, 20);
    tap.drive();
    tap.brake();
    tap.up();
    tap.down();

    return 0;
}

