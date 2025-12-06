#include<stdio.h>

struct student{
	
	char *name;
	int age;
	char *name2;
	int age2;
};
int main(){
	struct student s;
	s.name="John";
	s.age=15;
	s.name2="Carmack";
	s.age2=10;
	
	printf("%s\n%d\n%s\n%d",s.name,s.age,s.name2,s.age2);

	return 0;
}
