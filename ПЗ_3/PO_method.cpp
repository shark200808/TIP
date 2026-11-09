#include <iostream>
#include <cmath>

using namespace std;
// Задание 1: Объектно-ориентированный подход
class Triangle {
private:
    double a;
    double b; 

public:
    // Конструктор
    Triangle(double sideA = 0.0, double sideB = 0.0) : a(sideA), b(sideB) {}

    // Сеттер для катетов
    void setCathets(double sideA, double sideB) {
        a = sideA;
        b = sideB;
    }

  
    double calculateHypotenuse() const {
        return sqrt(a * a + b * b);
    }
};
// Задание 2: Объектно-ориентированный подход
class MkadRider {
private:
    static const int ROAD_LENGTH = 109; 
    int velocity;                       
    int time;                           

public:
    // Конструктор
    MkadRider(int v = 0, int t = 0) : velocity(v), time(t) {}

    // Сеттер параметров движения
    void setMotionData(int v, int t) {
        velocity = v;
        time = t;
    }

    // Вычисление итоговой отметки на кольце
    int calculatePosition() const {
        int pos = (velocity * time) % ROAD_LENGTH;
        if (pos < 0) {
            pos += ROAD_LENGTH; // Учитываем движение в обратную сторону (отрицательная скорость)
        }
        return pos;
    }
};

int main() {
    cout « "=== ОБЪЕКТНО-ОРИЕНТИРОВАННЫЙ МЕТОД ===" « endl;

    // Решение Задания 1
    double a, b;
    cout « "\n[Задание 1] Введите катеты a и b: ";
    cin » a » b;
    Triangle tri(a, b);
    cout « "Гипотенуза: " « tri.calculateHypotenuse() « endl;

    // Решение Задания 2
    int v, t;
    cout « "\n[Задание 2] Введите скорость v и время t: ";
    cin » v » t;
    MkadRider rider(v, t);
    cout « "Отметка на МКАД: " « rider.calculatePosition() « " км" « endl;

    system("pause");
    return 0;
}
