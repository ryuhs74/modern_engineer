#include <stdio.h>
#include <string.h>


class Human
{
private:
    char name[12];
    int age;

public:
    //생성자
    Human(const char* aname, int aage) {
        strcpy(name, aname);
        age = aage;
    }

    void intro() {
        printf("이름 = %s\n나이 = %d\n", name, age);
    }
};


int main()
{
    Human kim("김상형", 29);
    kim.intro();
}

}