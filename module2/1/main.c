#include <stdio.h>

struct contact
{
    char* FullName;
    char* WorkPlace;
    char* Email;
    char* Links;
};

void displayMenu();
/*
TODO:
void addContact();
void displayContacts();
void editContact();
void searchContact();
void deleteContact();
*/

int main()
{ 
    int point;
    
    while (point!=0){
        displayMenu();
        printf("Выберите действие: ");
        scanf("%d", &point);
        switch(point) {
            case 1:
 //               addContact();
                break;
            case 2:
 //               displayContacts();
                break;
            case 3:
  //              editContact();
                break;
            case 4:
  //              deleteContact();
                break;
            case 5:
  //              searchContact();
                break;
            case 0:
                printf("Выход из программы.\n");
                break;
            default:
                printf("Неверный выбор!\n");
        }
    };

    return 0;
}





void displayMenu()
{
    printf("\n=== МЕНЮ ===\n");
    printf("1. Добавить контакт\n");
    printf("2. Показать все контакты\n");
    printf("3. Редактировать контакт\n");
    printf("4. Удалить контакт\n");
    printf("5. Поиск контакта\n");
    printf("0. Выход\n");
}