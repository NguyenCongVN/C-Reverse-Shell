#include <stdio.h>
#include <string.h>

int main()
{
    int serial;       // [rsp+2Ch] [rbp-24h]
    char username[8]; // [rsp+30h] [rbp-20h]
    int i;            // [rsp+48h] [rbp-8h]
    int count;        // [rsp+4Ch] [rbp-4h]

    memcpy(username, "##########", 10);
    count = 0;
    printf("Enter username:");
    gets(username);
    printf("Enter serial:");
    scanf("%d", &serial);
    for (i = 0; i <= 9; ++i)
    {
        count += username[i];
    }
    printf("serial %d\n", serial);
    printf("count %d\n", count);
    printf("check %d\n", count == serial);
    if (count == serial)
        printf("\nYou pass!");
    else
        printf("\nWrong serial");
    return 0;
}
