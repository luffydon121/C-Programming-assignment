#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
	char name[20];
	char faculty[20];
	char program[20];
	float GPA;
};

int main(){
	struct Student s[3], st[3];
	FILE *fp;
	fp=fopen("RESULT.DAT", "w+b");
	if(fp==NULL){
		printf("file could not be opened.");
		exit(0);
	}
	printf("Enter the information of 3 students: \n");
	for(int i=0; i<3; i++){
		printf("Enter name, faculty, program and GPA:  ");
		scanf("%s%s%s%f", s[i].name, s[i].faculty, s[i].program, &s[i].GPA);
	}
	printf("\nWriting data to file...\n");
	fwrite(&s, sizeof(s), 3,fp);
	
	rewind(fp);
	printf("\nReading same content from file...\n");
	fread(&st, sizeof(st), 3, fp);
	printf("Displaying the information on the screen: \n");
	for(int i=0; i<3; i++){
		if(strcmp(st[i].faculty, "Engineering")==0 && st[i].GPA > 3.5){
			printf("Name: %s \n", st[i].name);
			printf("faculty: %s \n", st[i].faculty);
			printf("Program: %s \n", st[i].program);
			printf("GPA: %f \n", st[i].GPA);
		}
	}
	return 0;
}
