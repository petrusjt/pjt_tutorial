#include <stdio.h>
#include <stdlib.h>

struct Person
{
    int age;
    char* name;
    struct Car
    {
        char* license_plate;
        char* brand;
    } car;
};

typedef struct Person Person;

int main()
{
    struct Person* p = (struct Person*) malloc(sizeof(struct Person));
    p->age = 15;
    p->name = "Béla";
    
    p->car.brand = "Ford";
    p->car.license_plate = "AAA-000";
    printf("%s\t%d\n%s\t%s\n", p->name, p->age, p->car.brand, p->car.license_plate);
    free(p);
    return 0;
}