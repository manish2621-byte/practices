#include <stdio.h>
int main() {
    int choice = 4;
    switch(choice) {
        case 1:
            printf("sunday\n");
            break;
        case 2:
            printf("monday\n");
            break;
        case 3:
            printf("tuesday\n");
            break;
        default:
            printf("Invalid choice\n");
            int a=10,b=2;
            char op = '*';
            switch(op) {
                case '+':
                    printf("Addition: %d\n", a+b);
                    break;
                case '-':
                    printf("Subtraction: %d\n", a-b);
                    break;
                case '*':
                    printf("Multiplication: %d\n", a*b);
                    break;
                case '/':
                    printf("Division: %d\n", a/b);
                    break;
                default:
                    printf("Invalid operator\n");
            }
    }
    return 0;
}

