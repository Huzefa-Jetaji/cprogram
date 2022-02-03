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
void takepassword(char pwd[50])
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == ENTER || ch == TAB)
        {
            pwd[i] = '\0';
            break;
        }
        else if (ch == BACKSPACE)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            pwd[i++] = ch;
            printf("* \b");
        }
    }
}
char generateUsername(char email[50], char username[50])
{
    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] == '@')
            break;
        else
            username[i] = email[i];
    }
}

int main()
{
    system("color 0b");
    FILE *fp;
    int opt,usrFound=0;
    struct user user;
    char password2[50];
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
        printf("Enter your full name: \t");
        takeINput(user.fullName);
        printf("Enter your email: \t");
        takeINput(user.email);
        printf("Enter your Contact no: \t");
        takeINput(user.phone);
        printf("Enter your password : \t");
        takepassword(user.password);
        printf("\nConfirm your password:\t");
        takepassword(password2);

        if (!strcmp(user.password, password2))
        {
            generateUsername(user.email, user.username);
            fp=fopen("Users.dat","a+");
            fwrite(&user,sizeof(struct user),1,fp);
            if(fwrite!=0) printf("\n\nUser registration is success, Your username is %s",user.username);
            else printf("\n\n Sorry! Something went wrong.");
            fclose(fp);
        }
        else{
            printf("\n\nYour password did not matched.\n");
            Beep(500,200);
        }
        break;

        case 2:
            char username[50],pword[50];
            struct user usr;

            printf("\nEnter your username:\t");
            takeINput(username);
            printf("\nEnter your password:\t");
            takepassword(pword);

            fp=fopen("Users.dat","r");
            while(fread(&usr,sizeof(struct user),1,fp)){
                if(!strcmp(usr.username,username)){
                    if(!strcmp(usr.password,pword)){
                        printf("\n\t\t\t\t\\tWelcome %s",usr.fullName);
                        printf("\n\nFull Name:\t%s",usr.fullName);
                        printf("\nEmail:\t\t%s",usr.email);
                        printf("\nUsername:\t%s",usr.username);
                        printf("\nContact No.:\t%s",usr.phone);
                    }
                    else{
                        printf("\nInvalid password!");
                        Beep(500,200);
                    }
                    usrFound=1;
                }
                
            }
            if(!usrFound)
                printf("\n\nUser is not registered.");
            fclose(fp);
            break;
    }
    return 0;
}