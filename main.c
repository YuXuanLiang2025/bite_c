// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// // 清屏函数
// void clear_screen() {
// #ifdef _WIN32
//     system("cls");
// #else
//     system("clear");
// #endif
// }
//
// // 等待按键继续函数
// void wait_for_key() {
//     printf("按任意键继续...\n");
//     getchar(); // 清除之前的回车
//     getchar(); // 等用户真正按键
// }
//
// // 菜单函数
// int menu() {
//     int option;
//     printf("*******************\n");
//     printf("*****1.开始游戏*****\n");
//     printf("*****2.退出游戏*****\n");
//     printf("*******************\n");
//     printf("请输入你的选择（1或2）：");
//     scanf("%d", &option);
//     return option;
// }
//
// // 游戏函数
// void game() {
//     printf("让我们猜数字，这个数字介于0到99之间。\n");
//
//     srand(time(NULL));
//     int number = rand() % 100;
//     int g_input;
//
//     for (int i = 1; i <= 5; i++) {
//         printf("请输入你的猜测（第%d次，共5次）：", i);
//         scanf("%d", &g_input);
//         if (number < g_input) {
//             printf("大了！你还有%d次机会。\n", 5-i);
//         } else if (number > g_input) {
//             printf("小了！你还有%d次机会。\n", 5-i);
//         } else {
//             printf("恭喜你，第%d次就猜对了！\n", i);
//             wait_for_key();
//             clear_screen();
//             return;
//         }
//     }
//
//     printf("很遗憾，5次机会用完了，正确答案是%d。\n", number);
//     wait_for_key();
//     clear_screen();
// }
//
// // 主函数
// int main() {
//     while (1) {
//         clear_screen();
//         int m_input = menu();
//         if (m_input == 1) {
//             clear_screen();
//             game();
//         } else if (m_input == 2) {
//             printf("退出游戏，再见！\n");
//             break;
//         } else {
//             printf("无效输入，请输入1或2！\n");
//             wait_for_key();
//             clear_screen();
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
//
// int main() {
//     for (int i = 1; i <= 9; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d×%d=%d\t", j, i, j * i);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    int a = 10;
while (scanf("%d",a)!=EOF) {
    printf("%d\n",a);
}
    return 0;
}