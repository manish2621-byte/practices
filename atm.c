#include <stdio.h>
int main() {
    int deposit(int amount) {
        int balance=1000;
        balance += amount;
        return balance;

    }
    int withdraw(int amount ,int balance) {
        return balance-=amount;
    
    }
    int main() {
        int amount;
        printf("enter the amount to deposit:");
        scanf("%d",&amount);
        int balance=deposit(amount);
        printf("balance is %d",balance);
        printf("enter the amount to withdraw :");
        scanf("%d",&amount);
        printf("remaining balance is %d",withdraw(amount,balance));

    }
}