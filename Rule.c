#include <stdio.h>

int main() {

    int num, temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while(temp > 100) {
        int last = temp % 10;
        temp = temp / 10 + 2 * last;
    }

    if(temp % 19 == 0)
        printf("%d is divisible by 19", num);
    else
        printf("%d is not divisible by 19", num);

    return 0;
}
