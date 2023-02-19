#include <iostream>

#include<cmath>

#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>

#include<conio.h>
#include <windows.h>
#include <stdio.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 

using namespace std;

// Функции для проверки являеться ли введеное значение пользователем числом
double Proverka(double a)
{
    while (!( a) || (cin.peek() != '\n'))
    {        
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "Ошибка значения!!! (Попробуйте ещё раз)" << endl;
            cin >> a;
        }
    }
    return a;
}  

int Proverka(int a)
{
    while (!(a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "Ошибка значения!!! (Попробуйте ещё раз)" << endl;
            cin >> a;
        }
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    ShellExecute(NULL, L"open", L"image.jpg", 0, 0, SW_SHOWNORMAL);             // Открытие фотографии с формулами

    string znachVihoda;
    int num_formul;
    bool status_Programi = true;

    cout << "Данная программа предназначена для вычисления по формулам" << endl;

    while (status_Programi)
    {       
        cout << "\nВеберите на выведеной фотографии формулу(открыть фотографии повторно '31'):" << endl;
        cin >> num_formul;
        num_formul = Proverka(num_formul);
        cout << "Вы выбрали " <<num_formul << "-ую формулу\n" << endl;
        cout << "_____________________________________________" << endl;

        SetConsoleTextAttribute(console, 2);                                        // Иземенение текста концрои на зелёный

        switch (num_formul)
        {
        case 31:
        {
            ShellExecute(NULL, L"open", L"image.jpg", 0, 0, SW_SHOWNORMAL);
            break;
        }

        case 1:
        {
            double x, y;
            cout << "Введите значения t:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения l:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "R = " << 3 * pow(x, 2) + 3 * pow(y, 5) + 4.9 << endl;
            break;
        }

        case 2:
        {
            double x, y;
            cout << "Введите значения p:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "K = " << log10(pow(x, 2) + pow(y, 3)) + exp(x) << endl;
            break;
        }

        case 3:
        {
            double x, y;
            cout << "Введите значения n:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "G = " << x * (y + 3.5) + sqrt(y) << endl;
            break;
        }

        case 4:
        {
            double x, y;
            cout << "Введите значения a:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения t:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "D = " << 9.8 * pow(x, 2) + 5.52 * cos(pow(y, 5)) << endl;
            break;
        }

        case 5:
        {
            double x;
            cout << "Введите значения y:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "L = " << 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3) << endl;
            break;
        }

        case 6:
        {
            double x, y;
            cout << "Введите значения y:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения x:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "M = " << cos(2 * x) + 3.6 * exp(y) << endl;
            break;
        }

        case 7:
        {
            double x;
            cout << "Введите значения m:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "N = " << pow(x, 2) + 2.8 * fabs(x) + 0.55 << endl;
            break;
        }

        case 8:
        {
            double x;
            cout << "Введите значения y:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "T = " << sqrt(fabs(6 * pow(x, 2) - 0.1 * x + 4)) << endl;
            break;
        }

        case 9:
        {
            double x, y;
            cout << "Введите значения у:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения x:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "V = " << log10(x + 0.95) + sin(pow(y, 4)) << endl;
            break;
        }

        case 10:
        {
            double x, y, k;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Введите значения k:" << endl;
            cin >> k;
            k = Proverka(k);
            cout << "U = " << exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2) << endl;
            break;
        }

        case 11:
        {
            double x, y;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "S = " << 9.756 * pow(y, 7) + 2 * tan(x) << endl;
            break;
        }

        case 12:
        {
            double x, y;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения t:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "K = " << 7 * pow(y, 2) + 3 * sin(pow(x, 3)) + 9.2 << endl;
            break;
        }

        case 13:
        {
            double y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "E = " << sqrt(fabs(3 * pow(y, 2)) + 0.5 * y + 4) << endl;
            break;
        }

        case 14:
        {
            double x, y;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "R = " << fabs(sqrt(pow(sin(y), 2) + 6.835) + exp(x)) << endl;
            break;
        }

        case 15:
        {
            double y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "H = " << sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y)) << endl;
            break;
        }

        case 16:
        {
            double y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "S = " << sqrt(cos(4 * pow(y, 2)) + 7.151) << endl;
            break;
        }

        case 17:
        {
            double  y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "N = " << 3 * pow(y, 2) + sqrt(y + 1) << endl;
            break;
        }

        case 18:
        {
            double  y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Z = " << 3 * pow(y, 2) + sqrt(pow(y, 3) + 1) << endl;
            break;
        }

        case 19:
        {
            double x, y, g;
            cout << "Введите значения n:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Введите значения g:" << endl;
            cin >> g;
            g = Proverka(g);
            cout << "P = " << x * sqrt(pow(y, 3) + 1.09 * g) << endl;
            break;
        }

        case 20:
        {
            double x, y, k;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Введите значения k:" << endl;
            cin >> k;
            k = Proverka(k);
            cout << "U = " << exp(k + y) + tan(x) * sqrt(y) << endl;
            break;
        }

        case 21:
        {
            double x, y;
            cout << "Введите значения h:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "P = " << exp(y + 5.5) + 9.1 * pow(x, 3) << endl;
            break;
        }

        case 22:
        {
            double x, y, u;
            cout << "Введите значения h:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Введите значения u:" << endl;
            cin >> u;
            u = Proverka(u);
            cout << "T = " << sin(2 * u) * log10(2 * pow(y, 2) + sqrt(x)) << endl;
            break;
        }

        case 23:
        {
            double x, y;
            cout << "Введите значения f:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "G = " << exp(2 * y) + sin(x) << endl;
            break;
        }

        case 24:
        {
            double  y;
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "F = " << 2 * sin(0.214 * pow(y, 5) + 1) << endl;
            break;
        }

        case 25:
        {
            double x, y;
            cout << "Введите значения f:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "G = " << exp(2 * y) + sin(pow(x, 2)) << endl;
            break;
        }

        case 26:
        {
            double x, y;
            cout << "Введите значения p:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Z = " << pow(sin((pow(x, 2) + 0, 4)), 3) << endl;
            break;
        }

        case 27:
        {
            double x, y, v;
            cout << "Введите значения x:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "Введите значения v:" << endl;
            cin >> v;
            v = Proverka(v);
            cout << "W = " << 1.03 * v + exp(2 * y) + tan(fabs(x)) << endl;
            break;
        }

        case 28:
        {
            double x, y;
            cout << "Введите значения h:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "T = " << exp(y + x) + sqrt(fabs((6, 4 * y))) << endl;
            break;
        }

        case 29:
        {
            double  y;

            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "N = " << 3 * pow(y, 2) + sqrt(fabs((y + 1))) << endl;
            break;
        }

        case 30:
        {
            double x, y;
            cout << "Введите значения r:" << endl;
            cin >> x;
            x = Proverka(x);
            cout << "Введите значения y:" << endl;
            cin >> y;
            y = Proverka(y);
            cout << "W = " << exp(y + x) + 7.2 * sin(x) << endl;
            break;
        }

        default:
            cout << "Введенное некоректное значение!!!" << endl;
            continue;
        }

        SetConsoleTextAttribute(console, 15);                                       // Иземенение текста концрои на стандартный

        cout << "_____________________________________________" << endl;        
        cout << "\nХотите продолжить работу в программе (Y/N):" << endl;
        while (true)
        {            
            cin >> znachVihoda;
            if (znachVihoda == "y" || znachVihoda == "Y")
            {
                ShellExecute(NULL, L"close", L"image.jpg", 0, 0, SW_SHOWNORMAL);
                break;
            }
            else if (znachVihoda == "n" || znachVihoda == "N")
            {                
                status_Programi = false;
                break;
            }
            else
            {
                cout << "Введенное некоректное значение!!!" << endl;
            }
        }
    }
}