#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstdlib> // Для работы с функцией system()
#include <stdio.h>
#include <conio.h>
#include "translite.h"

//#include "translite.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("title MudulPass Generator V2      Credits - Apostol!");


    string surname;
    cout << "Фамилия(на англ):\n";
    getline(cin, surname);
    system("cls");
    int i = 0, k;
    string name, s1 = "aeiouAEIOU";
    cout << "Имя(на англ):\n";
    getline(cin, name);
    system("cls");

    string p = "1!";
    string log = "Login:";
    string pas = "Password:";

    while (name[i])
    {
        k = 0;
        while (s1[k])
        {
            if (name[i] == s1[k]) { name.erase(i, 1); i--; break; }
            k++;
        }
        i++;
    }

    char nm;
    nm = surname[0];

    string g = surname.substr(1, surname.size());

    string str;
    cout << "Фамилия(на рус):\n";
    getline(cin, str);
   // const char* c = "gena\n";
   // const char* x = translate.c_str();//не подходит

    char* x = new char[str.size() + 1];
    std::copy(str.begin(), str.end(), x);
    x[str.size()] = '\0'; // don't forget the terminating 0

    char y[100] = { 0 };
    Transliterate(x, &y[0]);

    cout << y << "\n";
    delete[] x;// don't forget to free the string after finished using it
    cout << log + surname + name << "\n";
    std::cout << pas <<(char)toupper(nm) << g << name + p << "\n";

    system("pause");
    return 0;
}


