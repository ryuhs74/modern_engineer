#include <stdio.h>

struct SHuman
{
    /* data */
    char name[12];
    int age;
};

void IntroHuman(SHuman who)
{
    printf("이름 = %s, 나이=%d\n", who.name, who.age);
}


int main()
{
    SHuman kim = {"김상형", 29};
    IntroHuman(kim);
}