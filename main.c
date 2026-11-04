#include <stdio.h>

int main(void)
{
    int input;
    int is_ok;

    scanf("%d", &input);

    // NGになる条件を除外する
    is_ok = !(input < 0 || (input >= 10 && input < 12) || input >= 15);

    // 条件に応じてOKまたはNGを表示する
    if (is_ok == 1) {
        printf("OK");
    } else {
        printf("NG");
    }

    return 0;
}