#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    int a;
    float total_bill = 0.0;
    char movie_name[50];

    clrscr();
    printf("1. Hollywood\n");
    printf("2. Bollywood\n");
    printf("Enter your choice: ");
    scanf("%d", &a);

    switch(a) {
        case 1:
            printf("Hollywood\n");
            printf("1. Action\n");
            printf("2. Comedy\n");
            printf("3. Horror\n");
            printf("4. Sci-Fi\n");
            printf("Enter your choice: ");
	    scanf("%d", &a);

	    switch(a) {
		case 1:
		    printf("Action\n");
		    printf("1. Lucy\n");
		    printf("2. Extraction\n");
		    printf("3. Escape\n");
		    printf("4. Matrix\n");
		    printf("Enter your choice: ");
		    scanf("%d", &a);
		    switch(a) {
			case 1:
			    printf("Your movie: Lucy\n");
			    strcpy(movie_name, "Lucy");
			    total_bill += 10.0; // Assume the price for each movie is $10
			    break;
			// Add cases for other action movies and update the total bill similarly
			default:
			    printf("Sorry, not available\n");
		    }
		    break;
		case 2:
		    // Add cases for Comedy movies
		    printf("enter pokon");
		    x
		    break;
		case 3:
                    // Add cases for Horror movies
                    break;
                case 4:
                    // Add cases for Sci-Fi movies
                    break;
                default:
                    printf("Sorry, not available\n");
            }
            break;

        case 2:
            printf("Bollywood\n");
            // Add cases for Bollywood movies
            break;

        default:
            printf("Sorry, not available\n");
    }

    printf("Total Bill: $%.2f\n", total_bill);

    getch();
    return 0;
}
