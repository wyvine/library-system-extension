#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();//prototype
void execute_action(int action);
int main()
{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("WELCOME Ivyne Wambui\n");
    execute_action(menu());
    return 0;
}
int menu()
{
	int action;
     do	{
        printf("select an action below:\n");
        printf("1. Add new patron\n");
        printf("2. view all patrons\n");
        printf("3. Add new book\n");
        printf("4. view all books\n");
        printf("your action(1-4): \n");
        scanf("%d",&action);
        if(action<1 || action > 4) {
            system("cls");
            printf("invalid action. Try again.\n");

        }

    }while(action< 1 || action > 4);
    return action
 }
void execute_action(int action) {
    printf("The action is %d",action);
}

