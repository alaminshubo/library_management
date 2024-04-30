// C program for the E-library
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create Structure of Library
struct library
{
    char book_name[20];
    char author[20];
    int pages;
    float price;
};

// Driver Code
int main()
{
    // Create a instance
    struct library lib[100];

    char ar_nm[30], bk_nm[30];

    // Keep the track of the number of
    // of books available in the library
    int i, input, count;

    i = input = count = 0;

// Iterate the loop
    while (input != 5)
    {

        printf("\n\n********######"
               "WELCOME TO E-LIBRARY "
               "#####********\n");
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf(
            "4. List the count of books in the library\n");
        printf("5. Exit");

        // Enter the book details
        printf("\n\nEnter one of the above: ");
        scanf("%d", &input);

        // Process the input
        switch (input)
        {
        // Add book
        case 1:
            printf("Enter book name = ");
            scanf("%s", lib[count].book_name);

            printf("Enter author name = ");
            scanf("%s", lib[count].author);

            printf("Enter pages = ");
            scanf("%d", &lib[count].pages);

            printf("Enter price = ");
            scanf("%f", &lib[count].price);
            count++;

            break;

        // Print book information
        case 2:
            printf("You have entered the following information:\n\n");
            for (int j = 0; j < count; j++)
            {
                printf("Book name: %s\n", lib[j].book_name);
                printf("Author name: %s\n", lib[j].author);
                printf("Pages: %d\n", lib[j].pages);
                printf("Price: %f\n\n", lib[j].price);
            }
            break;

        // Take the author name as input
        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (int j = 0; j < count; j++)
            {
                if (strcmp(ar_nm, lib[j].author) == 0)
                    printf("Book Name: %s \nAuthor Name: %s \nPages: %d \nPrice: %f\n", lib[j].book_name, lib[j].author, lib[j].pages, lib[j].price);
            }
            break;

        // Print total count
        case 4:
            printf("\n Number of books in library : %d\n", count);
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}

