#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct book
{
    char book_name[50], author_name[50];
    int page, price;
};
struct book ccb1, ccb2, ccb3, ecb1, ecb2, ecb3, mcb1, mcb2, mcb3; // ccb1 = computer category book 1 and so on

void computerCategory()
{
    printf("You have choosed Computer category\n");
    printf("1)Introduction to C Programming\n2)Introduction to Python Programming\n3)Compiler Design\n");
    int choice;
    printf("Choose a book according to the number : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have choosed Introduction to C Programming book\n");
        printf("Ebter book name : ");
        scanf("%s", &ccb1.book_name);
        printf("Ebter book author name : ");
        scanf("%s", &ccb1.author_name);
        printf("Ebter book page : ");
        scanf("%d", &ccb1.page);
        printf("Ebter book price : ");
        scanf("%d", &ccb1.price);
    }
    else if (choice == 2)
    {
        printf("You have choosed Introduction to Python Programming book\n");
        printf("Ebter book name : ");
        scanf("%s", &ccb2.book_name);
        printf("Ebter book author name : ");
        scanf("%s", &ccb2.author_name);
        printf("Ebter book page : ");
        scanf("%d", &ccb2.page);
        printf("Ebter book price : ");
        scanf("%d", &ccb2.price);
    }
    else if (choice == 3)
    {
        printf("You have choosed Compiler Design book\n");
        printf("Ebter book name : ");
        scanf("%s", &ccb3.book_name);
        printf("Ebter book author name : ");
        scanf("%s", &ccb3.author_name);
        printf("Ebter book page : ");
        scanf("%d", &ccb3.page);
        printf("Ebter book price : ");
        scanf("%d", &ccb3.price);
    }
    else
    {
        printf("Invalid Input\n");
    }
}

void electronicsCategory()
{
    printf("You have choosed Electronics category\n");
    printf("1)Practical Electronics for Investing\n2)The art of Electronics\n3)Fundamentals of Digital Circuits\n");
    int choice;
    printf("Choose a book according to the number : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have choosed Practical Electronics for Investing book\n");
        printf("Enter book name : ");
        scanf("%s", &ecb1.book_name);
        printf("Enter book author name : ");
        scanf("%s", &ecb1.author_name);
        printf("Enter book page : ");
        scanf("%d", &ecb1.page);
        printf("Enter book price : ");
        scanf("%d", &ecb1.price);
    }
    else if (choice == 2)
    {
        printf("You have choosed The art of Electronics book\n");
        printf("Enter book name : ");
        scanf("%s", &ecb2.book_name);
        printf("Enter book author name : ");
        scanf("%s", &ecb2.author_name);
        printf("Enter book page : ");
        scanf("%d", &ecb2.page);
        printf("Enter book price : ");
        scanf("%d", &ecb2.price);
    }
    else if (choice == 3)
    {
        printf("You have choosed Fundamentals of Digital Circuits book\n");
        printf("Enter book name : ");
        scanf("%s", &ecb3.book_name);
        printf("Enter book author name : ");
        scanf("%s", &ecb3.author_name);
        printf("Enter book page : ");
        scanf("%d", &ecb3.page);
        printf("Enter book price : ");
        scanf("%d", &ecb3.price);
    }
    else
    {
        printf("Invalid Input\n");
    }
}

void mechanicalCategory()
{
    printf("You have choosed Mechanical category\n");
    printf("1)Introduction to AutoCad\n2)fundamentals of Thermodynamics\n3)Mechanical Engineering : Convectional and Objective Type\n");
    int choice;
    printf("Choose a book according to the number : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have choosed Introduction to AutoCad book\n");
        printf("Enter book name : ");
        scanf("%s", &mcb1.book_name);
        printf("Enter book author name : ");
        scanf("%s", &mcb1.author_name);
        printf("Enter book page : ");
        scanf("%d", &mcb1.page);
        printf("Enter book price : ");
        scanf("%d", &mcb1.price);
    }
    else if (choice == 2)
    {
        printf("You have choosed The art of Electronics book\n");
        printf("Enter book name : ");
        scanf("%s", &mcb2.book_name);
        printf("Enter book author name : ");
        scanf("%s", &mcb2.author_name);
        printf("Enter book page : ");
        scanf("%d", &mcb2.page);
        printf("Enter book price : ");
        scanf("%d", &mcb2.price);
    }
    else if (choice == 3)
    {
        printf("You have choosed Fundamentals of Digital Circuits book\n");
        printf("Enter book name : ");
        scanf("%s", &mcb3.book_name);
        printf("Enter book author name : ");
        scanf("%s", &mcb3.author_name);
        printf("Enter book page : ");
        scanf("%d", &mcb3.page);
        printf("Enter book price : ");
        scanf("%d", &mcb3.price);
    }
    else
    {
        printf("Invalid Input\n");
    }
}

void showBookDetailsByCategory()
{
    printf("Books in these library (Category Wise)\n\n");
    printf("** ** ** ** Computer ** ** ** **\n\n");
    printf("-- -- Introduction to C Programming -- --\n\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ccb1.book_name, ccb1.author_name, ccb1.page, ccb1.price);
    printf("-- -- Introduction to Python Programming -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ccb2.book_name, ccb2.author_name, ccb2.page, ccb2.price);
    printf("-- -- Compiler Design -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ccb3.book_name, ccb3.author_name, ccb3.page, ccb3.price);

    printf("** ** ** ** Electronics ** ** ** **\n\n");
    printf("-- -- Practical Electronics for Investing -- --\n\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ecb1.book_name, ecb1.author_name, ecb1.page, ecb1.price);
    printf("-- -- The art of Electronics -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ecb2.book_name, ecb2.author_name, ecb2.page, ecb2.price);
    printf("-- -- Fundamentals of Digital Circuits -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", ecb3.book_name, ecb3.author_name, ecb3.page, ecb3.price);

    printf("** ** ** ** Mechanical ** ** ** **\n\n");
    printf("-- -- Introduction to AutoCad -- --\n\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", mcb1.book_name, mcb1.author_name, mcb1.page, mcb1.price);
    printf("-- -- Fundamentals of Thermodynamics -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", mcb2.book_name, mcb2.author_name, mcb2.page, mcb2.price);
    printf("-- -- Mechanical Engineering : Convectional and Objective Type -- --\n");
    printf("Book Name :- %s\nAuthor Name :- %s\nNumber of Pages :- %d\nPrice of the Book :- $%d\n", mcb3.book_name, mcb3.author_name, mcb3.page, mcb3.price);
}

void searchBookStatus()
{
    int choice;
    printf("You can search the book (Book Status) by Category :- \n\nEnter the code:123 for Computer Category\nEnter the code:456 for Electronics Category\nEnter the code:789 for Mechanical Category\n");
    printf("Enter the book to search(USE THE CODE) : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 123:
        printf("---------- Computer Category -----------\n\n");
        printf("Book Name : Introduction to C Programming\nBook Status : 2 copies left in stock\n");
        printf("Book Name : Introduction to Python Programming\nBook Status : 21 copies left in stock\n");
        printf("Book Name : Compiler Design\nBook Status : 6 copies left in stock\n\n");
        break;
    case 456:
        printf("---------- Electronics Category -----------\n\n");
        printf("Book Name : Practical Electronics for Investing\nBook Status : 10 copies left in stock\n");
        printf("Book Name : The art of Electronics\nBook Status : 5 copies left in stock\n");
        printf("Book Name : Fundamentals of Digital Circuits\nBook Status : 14 copies left in stock\n\n");
        break;
    case 789:
        printf("---------- Mechanical Category -----------\n\n");
        printf("Book Name : Introduction to AutoCad\nBook Status : 33 copies left in stock\n");
        printf("Book Name : Fundamentals of Thermodynamics\nBook Status : 23 copies left in stock\n");
        printf("Book Name : Mechanical Engineering : Convectional and Objective Type\nBook Status : 20 copies left in stock\n");
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
}

int main()
{
    printf("************************** Welcome To Shubham's Library ************************\n\n");
    int choice, choice1;
    while (1)
    {
        printf("-- -- -- -- -- Main Menu -- -- -- -- -- -- --\n");
        printf("1) Add Books\n2) Display All Book Information(Category Wise)\n3) Search Books(Books Status)\n4) Exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            system("cls");
            printf("************ You can add Book Information **************\n---------- Choose the Category ---------\n");
            printf("1) Computer\n2) Electronics\n3) Mechanical\n");
            printf("Choose a category according to the number : ");
            scanf("%d", &choice1);
            if (choice1 == 1)
            {
                system("cls");
                computerCategory();
            }
            else if (choice1 == 2)
            {
                system("cls");
                electronicsCategory();
            }
            else if (choice1 == 3)
            {
                system("cls");
                mechanicalCategory();
            }
            else
            {
                system("cls");
                printf("Invalid Input\n");
            }
        }
        else if (choice == 2)
        {
            system("cls");
            showBookDetailsByCategory();
        }
        else if (choice == 3)
        {
            system("cls");
            searchBookStatus();
        }
        else if (choice == 4)
        {
            system("cls");
            printf("The Library is Closed!!!!!!!!!!!\nHave a nice day :)");
            exit(0);
        }
        else
        {
            printf("Ivalid Input\n");
        }
    }
    return 0;
}