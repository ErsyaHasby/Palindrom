#include <string.h>
#include "palindrom.h"
#include "../ADT-stack/stack.h"

char isPalindrom(const char *str)
{
    Stack s;
    CreateStack(&s);
    int len = strlen(str);

    // Push semua karakter
    for (int i = 0; i < len; i++)
    {
        push(&s, str[i]);
    }

    // Bandingkan pop dengan huruf asli
    for (int i = 0; i < len; i++)
    {
        char topChar = pop(&s);
        if (topChar != str[i])
        {
            return 0; // Bukan palindrom
        }
    }

    return 1; // Palindrom
}
