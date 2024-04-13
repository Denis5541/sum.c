#include<stdio.h>
int main(){
        int number, sum = 0;
        printf("Enter a 3-digit number: ");
        scanf("%d", &number);

        sum += number % 10;

        sum /= 10;

        sum += number % 10;

        sum /= 10;

        sum += number % 10;

        printf("The sum of the digits is: %d\n", sum);
        return 0;
}
