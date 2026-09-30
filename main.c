#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32166
int e1();
int e2();
int e3();
int main()
{
    e1();
    e2();
    e3();
    return 0;
}
int e1()
{
    setlocale(LC_ALL, "Rus");
    int A, B;
    puts ("Введите число А и В: ");
    scanf("%d %d", &A, &B);
    printf("Введено число А: %d\n", A);
    printf("Введено число В: %d\n", B);
    printf("Сумма чисел равна: %d\n", A + B);
    printf("Pазность чисел равна: %d\n", A - B);
    printf("Произведение чисел равно: %d\n", A * B);
    printf("Частное чисел равно: %.1f\n", (float)A / B);
    printf("Остаток от деления второго числа на первое равен: %d", B % A);
    return 0;
}
int e2()
{
    int dym;
    float result;
    puts("Введите число");
    scanf("%d", &dym);
    result = 'D' * dym;
    printf("%d дюймов – это % .1f см\n", dym, result);
    puts("Введите число");
    scanf("%d", &dym);
    result = 'P' * dym;
    printf("%d испанских дюймов – это % .1f см\n", dym, result);
    return 0;
}
int e3()
{
    float a, b;
    puts("Введите a: ");
    scanf("%f", &a);
    puts("Введите b: ");
    scanf("%f", &b);
    puts("______________________________________\n");
    printf("|  %.12s  |  %.12s  |  %.12s  |\n", "a*b", "a+b", "a-b");
    puts("______________________________________\n");
    printf("| %5g*%-5g | %5g+%-5g | %5g-%-5g |\n", a, b, a, b, a, b);
    puts("______________________________________\n");
    printf("| %11.5g | %11.5g | %11.5g |\n", a * b, a + b, a - b);
    return 0;
}