#include <iostream>

class Car {
public:
    Car(double initialX, double initialV) : x(initialX), v(initialV) {}

    void move(double dt) {
        x += v * dt;
    }

    double getX() const { return x; }

private:
    double x;
    double v;
};

int main() {
    // Создаем машину с начальными координатой X = 0 и скоростью V = 10 м/с.
    Car car(0, 10);

    // Моделируем движение машины в течение 5 секунд с шагом 0.1 секунды.
    const double totalTime = 5;
    const double timeStep = 0.1;
    for (double t = 0; t <= totalTime; t += timeStep) {
        car.move(timeStep);
        std::cout << "Time: " << t << ", X: " << car.getX() << std::endl;
    }

    return 0;
}