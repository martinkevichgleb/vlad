#include <iostream>
#include <cmath> // Для функции sqrt

int main() {
    // Данные задачи
    double m1 = 5.0; // Средняя квадратическая погрешность в одном измерении (в секундах)
    int n_measurements = 2; // Число приемов
    int n_angles = 4;       // Число углов четырехугольника

    // Вывод средней квадратической погрешности при двух измерениях: m2 = m1 / sqrt(n_measurements)
    double m2 = m1 / std::sqrt(n_measurements);

    // Вывод предельной невязки для суммы углов: delta = 2 * m2 * sqrt(n_angles)
    double delta = 2 * m2 * std::sqrt(n_angles);

    // Результат
    std::cout << "Предельная невязка в сумме углов четырехугольника: ±" 
              << delta << "″" << std::endl;

    return 0;
}
