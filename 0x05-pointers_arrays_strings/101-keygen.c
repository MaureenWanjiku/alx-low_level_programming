#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program
 * Return: 0
*/
int main(void)
{
int rand_num = 0, sum = 0;
srand(time(NULL));
rand_num = rand() % 128;
while (sum <= 2772 - 128)
{
putchar(rand_num);
sum = sum + rand_num;
}
rand_num = 2772 - sum;
putchar(rand_num);
return (0);
}
