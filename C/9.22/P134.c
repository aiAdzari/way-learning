#include <stdio.h>

int main(void)
{
    char rec[10];
    int i;
    printf("\n请输入10个字符：");
    gets(rec);
    printf("\n加密结果为：");
    printf("%d", rec[0]);
    for(i=1;i<10;i++)
        printf(", %d", rec[i]);

    return 0;



}