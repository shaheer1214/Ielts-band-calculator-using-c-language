// Ielts band calculator program
#include <stdio.h>
#include <Windows.h>
int main()
{
    // font header
    printf("  _____  ______  _    _______  _____  \n");
    printf(" |_   _||  ____|| |  |__   __|/ ____| \n");
    printf("   | |  | |__   | |     | |  | (___   \n");
    printf("   | |  |  __|  | |     | |   \\___ \\  \n");
    printf("  _| |_ | |____ | |____ | |   ____) | \n");
    printf(" |_____||______||______||_|  |_____/  \n");
    printf("\n");
    printf("\tIELTS Band Score Calculator\n");
    // ending of header
    // main body starting
    float l, R, W, S;
    printf("\nEnter your Band score in Listening:");
    scanf("%f", &l);
    printf("\nEnter your Band score in Reading:");
    scanf("%f", &R);
    printf("\nEnter your Band score in writing:");
    scanf("%f", &W);
    printf("\nEnter your Band score in speaking:");
    scanf("%f", &S);
    float total = l + R + W + S;
    printf("\nYour Band Score is %.1f", total / 4);
    Sleep(INFINITE);
    // main ends
    return 0;
}