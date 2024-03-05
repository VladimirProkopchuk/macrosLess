#include "Add.h"
#define MODE 1


int main()
{
    setlocale(LC_ALL, "rus");

#ifdef MODE
    cout << "Работаю в боевом режиме." << endl;
#endif
#ifndef MODE 
#error "Опредилите MODE"
#endif

#if MODE == 1
    float number1 = 0, number2 = 0;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;
    cout << "Результат сложения: " << add(number1, number2);
#elif MODE == 0
    cout << "Работаю в режиме тренировки. " << endl;
#else
    cout << "Неизвестный режим.Завершение работы." << endl;
#endif

}