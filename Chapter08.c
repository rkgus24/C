#include <stdio.h>
#include <string.h>
 
struct phone {
    char name[20];
    char number[20];
    int age;
};
 
void phone_sort(struct phone[], int);
void phone_print(struct phone[], int);
void call(int n);

struct phone table[10];
int count;
 
int main()
{
    printf("등록할 정보 입력(최대 10명)\n");
    printf("그만입력하려면 0 입력\n");

    call(10);

    phone_sort(table, count);
    phone_print(table, count);
    return 0;
}
 
void phone_sort(struct phone table[], int count)
{
    int i, j;
    struct phone temp;
    for (i = 0; i < count - 1; i++)
        for (j = i + 1; j < count; j++)
            if (strcmp(table[i].name, table[j].name) == 1)
            {
                temp = table[i];
                table[i] = table[j];
                table[j] = temp;
            }
}
 
void phone_print(struct phone table[], int count)
{
    int i;
    printf("\n---------------------------------\n");
    printf("%8s %16s %6s\n", "이름", "전화번호", "나이");
    printf("---------------------------------\n");
    for (i = 0; i < count; i++)
        printf("%8s %16s %6d\n", table[i].name, table[i].number, table[i].age);
    printf("---------------------------------\n\n");
}

void call(int n) {
    if(n == 0) return;

    count++;
    printf("이름 입력 : ");
    scanf_s("%s", table[n].name, sizeof(table[n].name));
    if (strcmp(table[n].name, "0") == 0)
        return;
    printf("전화번호 입력 : ");
    scanf_s("%s", table[n].number, sizeof(table[n].number));
    printf("나이 입력 : ");
    scanf_s("%d", &table[n].age);
    fflush(stdin);

    call(n-1);
}