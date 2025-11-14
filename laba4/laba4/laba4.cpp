// laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>

int main() {
    int N;

    printf("Введите число N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = N; j > N - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}