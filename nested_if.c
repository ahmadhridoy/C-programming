#include <stdio.h>

int main()

{
    int a ,b;
    scanf("%d %d", &a ,&b);

    if (b != 0){
        printf("Reminder is %d\n", a%b);
        
        if (a%b == 0){
            printf("%d is divided by %d\n", a, b);

        }else {
            printf("%d is not divided by %d\n", a ,b);
        }
    }else {
        printf("math error\n");
    }
}