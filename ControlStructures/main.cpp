// ControlStructures
#include <iostream>
#include<conio.h>
using namespace std;
   //#define IF_SIMPLE_CONDITION
//#define TARGET
void main()
{
    setlocale(LC_ALL, "Russian");

 #ifdef IF_SIMPLE_CONDITION



    int temperature;
    cout << "Введите температуру воздуха\n"; cin >> temperature;
    if (temperature > 0)
    {
        cout << "На улице тепло" << endl;
    }
    else
    {
        cout << "на улице холодно" << endl;
    }
#endif // IF_SIMPLE_CONDITION

#ifdef TARGET

    int namber;//число вводимое с клавиатуры
    cout << "Введите число \n"; cin >> namber;
    if (namber >=0 && namber<=10)
    {
        cout << "Цель поражена\n";
    }
    else
    {
        cout << "вы промахнулись\n";
    }
 
#endif// TARGET
    char key;// Будет хранить код клавиши
    do
    {
        key = _getch();
        cout << (int)key << "\t" << key << endl;
    } while (key != 27);


} 

