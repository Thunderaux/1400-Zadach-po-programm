/* 1.7.	 Число e (основание натурального логарифма) приблизительно равно 2,71828. Вывести на экран это число с  точностью
до десятых. Текст '2.7' не использовать. */

#include <iostream>	
#include <iomanip>

int main()
{
	const double e = 2.71828;
	std::cout << std::fixed << std::setprecision(1) << e << std::endl;
	std::system("pause");
	return 0;
}