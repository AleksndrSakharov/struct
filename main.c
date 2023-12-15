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
    char* phone;
    struct Person* BestFriend;
}Sasha;

void PrintPerson(struct Person* p){
    // printf("Name: %s;\nSurname: %s;\nGender: %d;\nBorn date: %d-%d-%d;\nPhone number: %d;\nBest friend: %s %s;\n", p->name, p->sername, p->bornDate.day, p);
}

int main(){
    struct Person Bill;
    struct Person Bill2 = {
        "Bill", "Alehandro", 1, {11, 11, 1111}, "88005553535", &Sasha
    };
    // printf("%s", Sasha.name);
    strcpy(Sasha.name, "Sasha");
    strcpy(Sasha.sername, "Saharov");
    struct Person* newPers = malloc(sizeof(struct Person));
    newPers->phone = "123456789";
    Sasha.bornDate.day = 16;
    Sasha.bornDate.month = 3;
    Sasha.bornDate.year = 2005;
    Sasha.gender = 1;
    Sasha.phone = "1234567";
    printf("%s", Sasha.name);
    return 0;
}