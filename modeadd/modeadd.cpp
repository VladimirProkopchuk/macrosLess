#include <iostream>
#define MODE 1
//#undef MODE
#ifndef MODE 
#error "Опредилите MODE"
#endif

#if MODE == 1
#include "Add.h"
#endif

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
#ifdef MODE


#if MODE == 1
    cout << "Работаю в боевом режиме." << endl;
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
#endif
}