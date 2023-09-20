/*Project 2 - The Morden Calculator*/
/*~TSR*/

# include<stdio.h>
# include<math.h>

/*Foctorial calculation*/
void factorial(int a) {
    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    printf("Output: %d\n", result);
}

/*Power calculation*/
void power(int a, int b) {
    int result = pow(a, b);
    printf("Output: %d\n", result);
}

int main() { 

    /*Introduction*/
    printf("------------------Welcome!------------------\nIt's Morden Calculator ever with C programming.\n\n");

    int x, y;
    char op;

    /*Mathematical Operation*/
    printf("Please choose operator from below options.\n");
    printf("Addition(+)  Subtration(-)  Multiplication(*)  Division(/)  Power(^)  Factorial(!)\n");
    printf("\tINFO - For factorial please enter the number only in first value, second can be zero.\n\n");
    printf("==> ");

    /*Invalid character statement.
    which do not allow user to input any other character*/
    while (scanf(" %c", &op) != 1 || op != '+' && op != '-' && op != '*' && op != '/' && op != '^' && op != '!')
    {
        printf("Invalid input. Please enter symbols mentioned above: ");
    }
    

    /*User Interface(UI)*/
    printf("Enter your first value: \n");
    printf("==> ");

    /*Invalid number statement.
    which do not allow user to input any character*/
    while (scanf("%d", &x) != 1 || x <= -1) {
        printf("Invalid input. Please enter a positive integer: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    printf("Enter your second value: \n");
    printf("==> ");

    /*Invalid number statement.
    which do not allow user to input any character*/
    while (scanf("%d", &y) != 1 || y <= -1) {
    printf("Invalid input. Please enter a positive integer: ");
    while (getchar() != '\n'); // Clear input buffer
    }

    /*Operation outcome*/
    switch (op)
    {
    case '+' : printf("Output: %d\n", x+y);
        break;
    case '-' : printf("Output: %d\n", x-y);
        break;
    case '*' : printf("Output: %d\n", x*y);
        break;
    case '/' : printf("Output: %d\n", x/y);
        break;
    case '^' : power(x, y);
        break;
    case '!' : factorial(x);
        break;
    
    default:
    printf("Something wents wrong...\n");
    break;
    }

    return 0; 

}   /*Project end*/