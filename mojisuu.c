#include <stdio.h>
#include <string.h>

int main()
{
    
    char game[] = "minecraft";
    
    int i;

    printf("The string is: %s\n", game);
    printf("文字数は%lu\n",strlen(game));
    
    for (i = 0; i <= strlen(game); i++)
        printf("%d\n", i);
    

    return 0;
}