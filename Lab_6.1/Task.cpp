#include "Array.h"


double Array::Sum(){	//сума чисел(елементів) - контейнера(масива)
	double suma(0);
	for (size_t i(0); i < size; i++)
		suma += elems[i];

	return suma;
}

//середнє арифметичне(за абсолютною величиною) - контейнера(масива)
double Array::Arithmetic_Mean_Abs(){
	double suma(0);
	for (size_t i(0); i < size; i++)
		suma += abs(elems[i]);

	return suma / count;
}

void Array::Subtract_Sum_Number() {		//віднямає від кожного числа суму чисел.
	for (size_t i(0); i < size; i++)
		elems[i] -= Sum();
}