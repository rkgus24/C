#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NLEN 20 //Max Name Length
#define MAX_SUB 3   //Max Subject Number
#define MAX_STU 20  //Max Student Number
typedef struct _s{
	char name[MAX_NLEN + 1];
	int stuNum;//학번
	int scores[MAX_SUB];//국영수 과목 점수
}Student;

const char* subjName[MAX_SUB] = { "국어","영어","수학" };
Student gstu[MAX_STU];//global variable student
void Init();//초기화
void Run();
int main() {
	Init();
	Run();
	return 0;
}
