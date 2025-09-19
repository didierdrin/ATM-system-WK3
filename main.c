#include <stdio.h> 
#include <stdlib.h> 

double deposit(double balance); 
double withdraw(double balance); 
void check_balance(double balance); 
void display_menu(); 
int get_choice(); 

int main() 
{
    double balance = 0.00;
    int choice; 

    while (1) {
        display_menu(); 
        choice = get_choice(); 

        switch (choice) {
            case 1: 
                check_balance(balance); 
                break; 
            case 2: 
                balance = deposit(balance); 
                break; 
            case 3: 
                balance = withdraw(balance); 
                break; 
            case 4: 
                printf("Thank you for using ALU ATM. Bye!\n"); 
                exit(0); 
            default: 
                printf("Invalid choice. Please select (1-4). \n"); 
        }
    }
    return 0; 
}

// Show the ATM menu
void display_menu() 
{
    printf("\n****** ALU ATM MENU ******\n");
    printf("1. Check Balance\n"); 
    printf("2. Deposit\n"); 
    printf("3. Withdraw\n"); 
    printf("4. Exit\n"); 
    printf("Choose an option (1-4): "); 
}

// Show balance
void check_balance(double balance) 
{
    printf("Your current balance is: RWF %.2f\n", balance); 
}

// Logic for deposit operation
double deposit(double balance) 
{
    double amount; 
    printf("Enter amount to deposit(RWF): ");
    scanf("%lf", &amount); 

    if (amount <= 0) {
        printf("INVALID: Deposit amount must be above 0.\n"); 
        return balance; 
    } 

    balance += amount; 
    printf("Successfully deposited RWF %.2f\n. New balance: RWF %.2f\n", amount, balance);
    return balance; 
}

// Logic for withdraw operation
double withdraw(double balance) 
{
    double amount; 
    printf("Enter amount to withdraw(RWF): "); 
    scanf("%lf", &amount); 

    if (amount <= 0) {
        printf("INVALID: Withdraw amount must be above 0.\n"); 
        return balance; 
    } 

    if (amount > balance) {
        printf("INSUFFICIENT FUNDS: You cannot withdraw more than your current balance of RWF %.2f\n", balance); 
        return balance; 
    } 

    balance -= amount; 
    printf("Successfully withdrew RWF %.2f\n. New balance: RWF %.2f\n", amount, balance); 
    return balance; 
}

// Validate and get user choice 
int get_choice() 
{
    int choice; 
    scanf("%d", &choice); 
    return choice; 
}












