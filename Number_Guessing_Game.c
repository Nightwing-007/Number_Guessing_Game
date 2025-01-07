#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main() {
	
    int num, guess, tries = 0, need,range;
    srand(time(0));
    
    printf("Welcome to the Number Guessing Game!\n");
    
    printf("Enter the number of digits the guessing number should have:");
    scanf("%d",&range);
    
    range = pow(10,range);
    num = rand() % range + 1;
    
    printf("A random number between 1 and %d is generated. Can you guess it?\n\n",range);
    
    printf("The number of tries you need to find the number: ");
    scanf("%d",&need);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        tries++;

        if (guess - 30 > num)
            printf("Too high! Try again.\n");
		else if (guess + 30< num)
            printf("Too low! Try again.\n");
        else if (guess > num)
            printf("High, Try again.\n");
		else if (guess < num)
            printf("Low, Try again.\n");
		else
            printf("You guessed that the number is %d in %d tries.\n",num, tries);
    } while (guess != num && tries < need);
	
	if(guess != num)
		printf("You did not guess the number %d right, after %d tries.",num,tries);
	
    return 0;
}