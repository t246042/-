#include <stdio.h>

int main(void)
{
    int c;
    int length = 0;
    int hasUpper = 0;
    int hasLower = 0;

    printf("パスワードを入力してください: ");

    while (1) 
    {
        c = getchar();

        if (c == '\n') 
        {
            break;
        }

        length++;

        if (c >= 65 && c <= 90) 
        {
            hasUpper = 1;
        }

        if (c >= 97 && c <= 122) 
        {
            hasLower = 1;
        }
    }

    if (length >= 8 && hasUpper && hasLower) 
    {
        printf("このパスワードは強いパスワードです。\n");
    }
    else 
    {
        printf("このパスワードは強いパスワードではありません。\n");

        if (length < 8) 
        {
            printf("・8文字以上にしてください。\n");
        }
        if (!hasUpper) 
        {
            printf("・大文字を含めてください。\n");
        }
        if (!hasLower) 
        {
            printf("・小文字を含めてください。\n");
        }
    }

    return 0;
}