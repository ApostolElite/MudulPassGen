#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>



void Transliterate(const char* str,char* newStr)
{
    for (; *str != 0; str++)
    {
        switch (str[0])
        {
        case '�': strcat(&newStr[0], "a"); break;
        case '�': strcat(&newStr[0], "b"); break;
        case '�': strcat(&newStr[0], "v"); break;
        case '�': strcat(&newStr[0], "g"); break;
        case '�': strcat(&newStr[0], "d"); break;
        case '�': strcat(&newStr[0], "e"); break;
        case '�': strcat(&newStr[0], "ye"); break;
        case '�': strcat(&newStr[0], "zh"); break;
        case '�': strcat(&newStr[0], "z"); break;
        case '�': strcat(&newStr[0], "i"); break;
        case '�': strcat(&newStr[0], "y"); break;
        case '�': strcat(&newStr[0], "k"); break;
        case '�': strcat(&newStr[0], "l"); break;
        case '�': strcat(&newStr[0], "m"); break;
        case '�': strcat(&newStr[0], "n"); break;
        case '�': strcat(&newStr[0], "o"); break;
        case '�': strcat(&newStr[0], "p"); break;
        case '�': strcat(&newStr[0], "r"); break;
        case '�': strcat(&newStr[0], "s"); break;
        case '�': strcat(&newStr[0], "t"); break;
        case '�': strcat(&newStr[0], "u"); break;
        case '�': strcat(&newStr[0], "f"); break;
        case '�': strcat(&newStr[0], "ch"); break;
        case '�': strcat(&newStr[0], "z"); break;
        case '�': strcat(&newStr[0], "ch"); break;
        case '�': strcat(&newStr[0], "sh"); break;
        case '�': strcat(&newStr[0], "ch"); break;
        case '�': strcat(&newStr[0], "''"); break;
        case '�': strcat(&newStr[0], "y"); break;
        case '�': strcat(&newStr[0], "''"); break;
        case '�': strcat(&newStr[0], "e"); break;
        case '�': strcat(&newStr[0], "yu"); break;
        case '�': strcat(&newStr[0], "ya"); break;
        case '�': strcat(&newStr[0], "A"); break;
        case '�': strcat(&newStr[0], "B"); break;
        case '�': strcat(&newStr[0], "V"); break;
        case '�': strcat(&newStr[0], "G"); break;
        case '�': strcat(&newStr[0], "D"); break;
        case '�': strcat(&newStr[0], "E"); break;
        case '�': strcat(&newStr[0], "Ye"); break;
        case '�': strcat(&newStr[0], "Zh"); break;
        case '�': strcat(&newStr[0], "Z"); break;
        case '�': strcat(&newStr[0], "I"); break;
        case '�': strcat(&newStr[0], "Y"); break;
        case '�': strcat(&newStr[0], "K"); break;
        case '�': strcat(&newStr[0], "L"); break;
        case '�': strcat(&newStr[0], "M"); break;
        case '�': strcat(&newStr[0], "N"); break;
        case '�': strcat(&newStr[0], "O"); break;
        case '�': strcat(&newStr[0], "P"); break;
        case '�': strcat(&newStr[0], "R"); break;
        case '�': strcat(&newStr[0], "S"); break;
        case '�': strcat(&newStr[0], "T"); break;
        case '�': strcat(&newStr[0], "U"); break;
        case '�': strcat(&newStr[0], "F"); break;
        case '�': strcat(&newStr[0], "Ch"); break;
        case '�': strcat(&newStr[0], "Z"); break;
        case '�': strcat(&newStr[0], "Ch"); break;
        case '�': strcat(&newStr[0], "Sh"); break;
        case '�': strcat(&newStr[0], "Ch"); break;
        case '�': strcat(&newStr[0], "''"); break;
        case '�': strcat(&newStr[0], "Y"); break;
        case '�': strcat(&newStr[0], "''"); break;
        case '�': strcat(&newStr[0], "E"); break;
        case '�': strcat(&newStr[0], "Yu"); break;
        case '�': strcat(&newStr[0], "Ya"); break;
        default: { char Temp[2] = { str[0], 0 }; strcat(&newStr[0], &Temp[0]); }
        }
    }
}