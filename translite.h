#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>



void Transliterate(const char* str,char* newStr)
{
    for (; *str != 0; str++)
    {
        switch (str[0])
        {
        case 'à': strcat(&newStr[0], "a"); break;
        case 'á': strcat(&newStr[0], "b"); break;
        case 'â': strcat(&newStr[0], "v"); break;
        case 'ã': strcat(&newStr[0], "g"); break;
        case 'ä': strcat(&newStr[0], "d"); break;
        case 'å': strcat(&newStr[0], "e"); break;
        case '¸': strcat(&newStr[0], "ye"); break;
        case 'æ': strcat(&newStr[0], "zh"); break;
        case 'ç': strcat(&newStr[0], "z"); break;
        case 'è': strcat(&newStr[0], "i"); break;
        case 'é': strcat(&newStr[0], "y"); break;
        case 'ê': strcat(&newStr[0], "k"); break;
        case 'ë': strcat(&newStr[0], "l"); break;
        case 'ì': strcat(&newStr[0], "m"); break;
        case 'í': strcat(&newStr[0], "n"); break;
        case 'î': strcat(&newStr[0], "o"); break;
        case 'ï': strcat(&newStr[0], "p"); break;
        case 'ð': strcat(&newStr[0], "r"); break;
        case 'ñ': strcat(&newStr[0], "s"); break;
        case 'ò': strcat(&newStr[0], "t"); break;
        case 'ó': strcat(&newStr[0], "u"); break;
        case 'ô': strcat(&newStr[0], "f"); break;
        case 'õ': strcat(&newStr[0], "ch"); break;
        case 'ö': strcat(&newStr[0], "z"); break;
        case '÷': strcat(&newStr[0], "ch"); break;
        case 'ø': strcat(&newStr[0], "sh"); break;
        case 'ù': strcat(&newStr[0], "ch"); break;
        case 'ú': strcat(&newStr[0], "''"); break;
        case 'û': strcat(&newStr[0], "y"); break;
        case 'ü': strcat(&newStr[0], "''"); break;
        case 'ý': strcat(&newStr[0], "e"); break;
        case 'þ': strcat(&newStr[0], "yu"); break;
        case 'ÿ': strcat(&newStr[0], "ya"); break;
        case 'À': strcat(&newStr[0], "A"); break;
        case 'Á': strcat(&newStr[0], "B"); break;
        case 'Â': strcat(&newStr[0], "V"); break;
        case 'Ã': strcat(&newStr[0], "G"); break;
        case 'Ä': strcat(&newStr[0], "D"); break;
        case 'Å': strcat(&newStr[0], "E"); break;
        case '¨': strcat(&newStr[0], "Ye"); break;
        case 'Æ': strcat(&newStr[0], "Zh"); break;
        case 'Ç': strcat(&newStr[0], "Z"); break;
        case 'È': strcat(&newStr[0], "I"); break;
        case 'É': strcat(&newStr[0], "Y"); break;
        case 'Ê': strcat(&newStr[0], "K"); break;
        case 'Ë': strcat(&newStr[0], "L"); break;
        case 'Ì': strcat(&newStr[0], "M"); break;
        case 'Í': strcat(&newStr[0], "N"); break;
        case 'Î': strcat(&newStr[0], "O"); break;
        case 'Ï': strcat(&newStr[0], "P"); break;
        case 'Ð': strcat(&newStr[0], "R"); break;
        case 'Ñ': strcat(&newStr[0], "S"); break;
        case 'Ò': strcat(&newStr[0], "T"); break;
        case 'Ó': strcat(&newStr[0], "U"); break;
        case 'Ô': strcat(&newStr[0], "F"); break;
        case 'Õ': strcat(&newStr[0], "Ch"); break;
        case 'Ö': strcat(&newStr[0], "Z"); break;
        case '×': strcat(&newStr[0], "Ch"); break;
        case 'Ø': strcat(&newStr[0], "Sh"); break;
        case 'Ù': strcat(&newStr[0], "Ch"); break;
        case 'Ú': strcat(&newStr[0], "''"); break;
        case 'Û': strcat(&newStr[0], "Y"); break;
        case 'Ü': strcat(&newStr[0], "''"); break;
        case 'Ý': strcat(&newStr[0], "E"); break;
        case 'Þ': strcat(&newStr[0], "Yu"); break;
        case 'ß': strcat(&newStr[0], "Ya"); break;
        default: { char Temp[2] = { str[0], 0 }; strcat(&newStr[0], &Temp[0]); }
        }
    }
}