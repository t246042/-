#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    
    printf("あなたのバイトの時給は？");
    scanf("%d", &a);
    
    printf("今月何時間働きましたか？");
    scanf("%d", &b);
    
    printf("その中で22時以降に働いた時間は何時間ですか？");
    scanf("%d", &c);
    
    int kyuryo;
    kyuryo = a * (b + 0.25 * c);
    printf("今月は%d円稼ぎました\n", kyuryo);
    if (kyuryo >= 85833)
    {
        printf("たくさん稼ぎましたね！！\nでも扶養が外れないように気を付けましょう");
    }
    else if (kyuryo >= 60000)
    {
        printf("たくさん稼ぎましたね！\nこの調子で頑張りましょう");
    }
    else
    {
        printf("もう少し頑張りましょう");
    }
    
    return 0;
}
