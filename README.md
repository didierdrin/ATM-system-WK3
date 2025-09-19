# ALU ATM Program

A simple command-line ATM (Automated Teller Machine) simulation program written in C that allows users to perform basic banking operations.

## Features

- **Check Balance**: View your current account balance
- **Deposit Funds**: Add money to your account (with validation for positive amounts)
- **Withdraw Funds**: Remove money from your account (with validation for positive amounts and sufficient funds)
- **Exit**: Cleanly exit the application

## Requirements

- A C compiler (GCC recommended)
- Standard C libraries (stdio.h, stdlib.h)

## Installation

1. Clone or download the source code file (`main.c`)
2. Compile the program using a C compiler:

```bash
gcc main.c -o main
```

3. Run the executable:

```bash
./atm-system-wk3
```

## Usage

1. Upon running the program, you'll see a menu with options 1-4
2. Enter the number corresponding to your desired operation
3. Follow the prompts for deposit and withdrawal operations
4. The program will display your updated balance after each transaction
5. Select option 4 to exit the program

## Program Structure

- `main()`: Contains the main program loop and menu navigation
- `display_menu()`: Shows the ATM options
- `check_balance()`: Displays the current balance
- `deposit()`: Handles deposit operations with validation
- `withdraw()`: Handles withdrawal operations with validation
- `get_choice()`: Gets and returns user input

## Validation

The program includes input validation to ensure:
- Deposit amounts must be positive
- Withdrawal amounts must be positive
- Users cannot withdraw more than their current balance

## Currency

All amounts are displayed in Rwandan Francs (RWF) with proper currency formatting.

## Example Usage

```
****** ALU ATM MENU ******
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Choose an option (1-4): 2
Enter amount to deposit(RWF): 5000
Successfully deposited RWF 5000.00
New balance: RWF 5000.00
```

## Error Handling

The program handles invalid inputs gracefully and provides informative error messages for:
- Invalid menu choices
- Non-positive deposit/withdrawal amounts
- Attempts to withdraw more than the available balance
