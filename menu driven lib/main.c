/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_USER 100

struct books {
    char name[100];
    char author[100];
    float price;
};

struct user {
    
    char name[100];
    int age;
    char place[100];
    char username[100];
    char password[100];
};

struct  books books[MAX_BOOKS]; 
int bookcount = 0; 
struct user user[MAX_USER];
int userCount = 0;

char username[]= "admin";
char password[]= "1234";

void adminMenu();
void userMenu();
void addBook();
void displayBooks();
void updateBook();
void deleteBook();
void registration();  
void Login();
void userbookdisplay();
void searchBook();

int main() 
{
    int choice;
    do {
        printf("Main Menu:\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                adminMenu();
                break;
            case 2:
                userMenu();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}

void adminMenu() 
{
    char username[50];
    char password[50];

    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        
        printf("Login successful\n");
        int choice;
        do {
            printf("\nAdmin Menu:\n");
            printf("1. Add Book\n");
            printf("2. Display Books\n");
            printf("3. Update Book\n");
            printf("4. Delete Book\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    addBook();
                    break;
                case 2:
                    displayBooks();
                    break;
                case 3:
                    updateBook();
                    break;
                case 4:
                    deleteBook();
                    break;
                case 5:
                    return;
                default:
                    printf("Invalid choice.\n");
            }
        } while (choice != 5);
    } else {
        printf("Invalid credentials.\n");
    }
}

void addBook() {
    if (bookcount < MAX_BOOKS) {
        printf("Enter Book Name: \n");
        scanf("%s", books[bookcount].name);
        for(int i=0;i<bookcount;i++)
        {
        if (strcmp(books[i].name,books[bookcount].name)==0)
        {
            printf("Invalid\n");
            return addBook();
        }
        }
        printf("Enter Book Author: \n");
        scanf("%s", books[bookcount].author);
        printf("Enter Book Price: \n");
        scanf("%f", &books[bookcount].price);
        bookcount++;
        printf("Book added successfully\n");
    } else {
        printf("Book list is full\n");
    }
}

void displayBooks() {
    if (bookcount == 0) {
        printf("No books available\n");
        return;
    }
    for (int i = 0; i < bookcount; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Name: %s\n", books[i].name);  
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }
}

void updateBook() {
    char bookname[50];
     int temp=0;
    printf("book to be updated\n");
    scanf("%s",bookname);
    for( int i=0;i<bookcount;i++)
    {
        if (strcmp(books[i].name,bookname)==0) 
        {
            printf("Enter Book Name: ");
            scanf("%s",books[i].name);
            printf("Enter  Book Author: ");
            scanf("%s", books[i].author);
            printf("Enter  Book Price: ");
            scanf("%f", &books[i].price);
            printf("New Book updated\n");
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
    printf("not available");
    }
}

void deleteBook() 
{
   char bookName[50];
    int temp=0;

    printf("Enter the name of the book to delete: ");
    scanf("%s",bookName);

    for(int i=0;i<bookcount;i++)
    {
     if (strcmp(books[i].name,bookName)==0)
     {
        
       for(int j=i;j<bookcount;j++)
       {
            books[j]=books[j+1];
       }
       bookcount--;
       printf("Deleted\n");
        temp=1;
        break;
     }
    }
     if(temp==0)
     {
         
         printf("Book not found\n");
     }

}

void userMenu() 
{
    int choice;
    do
    {
        printf("\nUser Menu:\n");
        printf("1.Registration\n");
        printf("2.Login\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) 
        {
            case 1:
                registration();
                break;
            case 2:
                Login();
                break;
            case 3:
                return;
            default:
                printf("Invalid.\n");
        }
    }while(choice!=3);
   
}

void registration() 
{
    if(userCount<MAX_USER)
    {
        printf("Enter Name:");
        scanf("%s",user[userCount].name);
        printf("Enter Age: ");
        scanf("%d",&user[userCount].age);
        printf("Enter Place: ");
        scanf("%s",user[userCount].place);
        printf("Enter Username: ");
        scanf("%s",user[userCount].username);
        for(int i=0;i<userCount;i++)
        {
        if (strcmp(user[i].username,user[userCount].username)==0)
        {
            printf("Invalid\n");
            return registration();
        }
        }
        printf("Enter Password: ");
        scanf("%s",user[userCount].password);
        userCount++;
        printf("successfully registered.\n");
    } 
    else 
    {
        printf("filled\n");
    }
}

void Login() 
{

   char username[50];
   password[50];
   
   printf("Enter Username: ");
    scanf("%s",username);
    printf("Enter Password: ");
    scanf("%s",password);
    for(int i=0;i<userCount;i++)
    {
        if(strcmp(user[i].username,username)==0&&strcmp(user[i].password,password)==0)
        {
            printf("Login successful.\n");
            int choice;
            do 
            {
                printf("\nUser Menu:\n");
                printf("1.Display Books\n");
                printf("2.Search Book\n");
                printf("3.Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);

                switch (choice) 
                {
                    case 1:
                        userbookdisplay();
                        break;
                    case 2:
                        searchBook();
                        break;
                    case 3:
                        return;
                    default:
                        printf("Invalid.\n");
                }
            }
            while(choice!=3);
            break;
        }
    }
}
void userbookdisplay()
    {
       displayBooks();
    }
    
void searchBook()
{
    char bookname[50];
    if(bookcount==0)
    {
        printf("no books");
    }
    else{
    printf("Enter  the book to search: ");
    scanf("%s",bookname);
    for(int i=0;i<bookcount;i++)
    {
        if(strcmp(books[i].name,bookname)==0)
        {
            printf("Searched book:\n");
            printf("Name: %s\n",books[i].name);
            printf("Author: %s\n",books[i].author);
            printf("Price: %f\n",books[i].price);
            break;
        }
    }
    }
}


