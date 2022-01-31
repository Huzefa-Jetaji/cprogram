#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define ENTER 13
#define TAB 9
#define BACKSPACE 8

struct user
{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
};
void takeINput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}
void takepassword(char pwd[50]){
    int i;
    char ch;
    while(1){
        ch=getch();
        if(ch==ENTER|| ch== TAB){
            pwd[i]='\0';
            break;
        }
        else if(ch==BACKSPACE){
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else{
            pwd[i++]=ch;
            printf("* \b");
        }
    }
}
void generateUsername(char email[50], char username[50])
{
    for (int i = 0; i < strlen(email); i++)
        if (email[i] = '@')
            break;
        else
            username[i] = email[i];
}

int main()
{
    system("color 0b");
    int opt;
    struct user user;

    printf("\n\t\t\t...........Welcome to Authentication System................");
    printf("\nPlease choose your operation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\nYour choice : \t");
    scanf("%d", &opt);

    fgetc(stdin);
    switch (opt)
    {
    case 1:
        printf("Enter your full name : \t");
        takeINput(user.fullName);
        printf("Enter your email: \t");
        takeINput(user.email);
        printf("Enter your Contact no : \t");
        takeINput(user.phone);
        printf("Enter your password : \t");
        takepassword(user.password);
    }
    return 0;
}