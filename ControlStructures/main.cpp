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
    cout << "������� ����������� �������\n"; cin >> temperature;
    if (temperature > 0)
    {
        cout << "�� ����� �����" << endl;
    }
    else
    {
        cout << "�� ����� �������" << endl;
    }
#endif // IF_SIMPLE_CONDITION

#ifdef TARGET

    int namber;//����� �������� � ����������
    cout << "������� ����� \n"; cin >> namber;
    if (namber >=0 && namber<=10)
    {
        cout << "���� ��������\n";
    }
    else
    {
        cout << "�� ������������\n";
    }
 
#endif// TARGET
    char key;// ����� ������� ��� �������
    do
    {
        key = _getch();
        cout << (int)key << "\t" << key << endl;
    } while (key != 27);


} 

