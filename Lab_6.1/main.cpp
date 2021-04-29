#include "Array.h"

/*Функція що приймає звичайний масив і розмір масиву як аргумент, і
повертає динамічний масив зростаючої довжини як результат*/
Array Create_Dynamic_Array(int *masuv, const int size) {
    Array dynamic_array(size);
    for (int i = 0; i < size; i++)
        dynamic_array[i] = masuv[i];

    return dynamic_array;
}

int main(void) {
    srand((unsigned)time(NULL));
    const int size = 10;
    int masuv[size];

    int start = -50;
    int end = 50;

    //Початковий масив заповнили випадковими числами в діапазоні від –50 до +50
    for (int i = 0; i < size; i++)
        masuv[i] = start + rand() % int(end - start + 1);

    Array dynamic_array = Create_Dynamic_Array(masuv, size);
    std::cout << dynamic_array;

    std::cout << "\n\nSum of numbers (elements) - container (array): "
              << dynamic_array.Sum();
    std::cout << "\n\nArithmetic mean (in absolute value) - container (array): " 
              << dynamic_array.Arithmetic_Mean_Abs();

    dynamic_array.Subtract_Sum_Number();
    std::cout << "\n\nSubtract the sum of the numbers from each number: " << dynamic_array;

    std::cout << "\n";
    system("pause");
    return 0;
}