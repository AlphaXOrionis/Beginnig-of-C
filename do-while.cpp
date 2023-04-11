#include <stdio.h>

int main() {
    int n, digit = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum += n % 10;
        digit++;
        n = n / 10;
    } while (n > 0);

    printf("Sum of its digits is %d\n", sum);
    printf("It has %d digit(s).\n", digit);

    return 0;
}

		
	





