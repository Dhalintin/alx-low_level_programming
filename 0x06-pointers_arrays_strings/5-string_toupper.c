#include "main.h"

/**
*@string_toupper: takes a string
*@str: and makes uppercase
*/
char *string_toupper(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - ('a' - 'A');
        }
        p++;
    }
    return str;
}
