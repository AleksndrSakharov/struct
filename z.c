#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Person{
    char name[100];
    char sername[100];
    int gender;
    struct Date bornDate;
};

void AddPerson(struct Person** persons, int size){
    struct Person* tmp = malloc(sizeof(struct Person));
    scanf("%s", tmp->name);
    scanf("%s", tmp->sername);
    scanf("%d", &tmp->gender);
    scanf("%hhd", &tmp->bornDate.day);
    scanf("%hhd", &tmp->bornDate.month);
    scanf("%d", &tmp->bornDate.year);
    int i = 0;

    for (i = 0; i < size; i++){
        if(persons[i] == NULL){
            persons[i] = tmp;
            break;
        }
    }
}

void DeletePerson(struct Person** persons, int size, int i){
    persons[i-1] = NULL;
}

void FindPerson(struct Person** persons, int size, char Name[], char Sername[]){
    int flag = 0;
    for(int i = 0; i < size; i++){
        if(persons[i] != NULL && strcmp(persons[i]->name, Name) == 0 && strcmp(persons[i]->sername, Sername) == 0){
            printf("Name: %s;\nSurname: %s;\nGender: %d;\nBorn date: %d-%d-%d;\n", persons[i]->name, persons[i]->sername, persons[i]->gender, persons[i]->bornDate.day, persons[i]->bornDate.month, persons[i]->bornDate.year);
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        printf("This person not in list");
    }
}

int main(){
    struct Person** persons = malloc(sizeof(struct Person*) * 20);
    AddPerson(persons, 20);
    // AddPerson(persons, 20);
    // AddPerson(persons, 20);
    // AddPerson(persons, 20);
    // AddPerson(persons, 20);
    // AddPerson(persons, 20);
    FindPerson(persons, 20, "Ola", "Pola");
    DeletePerson(persons, 20, 1);
    

    return 0;
}