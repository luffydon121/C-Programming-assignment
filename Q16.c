#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
	char name[20];
	int roll;
	char address[30];
	char faculty[20];
};

int main(){
	struct Student s[3], st[3];
	FILE *fp;
	if(fp==NULL){
		printf("file could not be opened.");
		exit(0);
	}
	printf("Enter the information of 3 students: \n");
	for(int i=0; i<3; i++){
		printf("Enter name, roll, address and faculty: ");
		scanf("%s%d%s%s", s[i].name, &s[i].roll, s[i].address, s[i].faculty);
	}
	printf("\nWriting data to file... \n");
	fwrite(&s, sizeof(s), 3, fp);
	
	rewind(fp);
	printf("\nReading same content from file... \n");
	fread(&st, sizeof(st), 3, fp);
	printf("Displaying the information on the screen: \n");
	for(int i=0; i<3; i++){
		if(strcmp(st[i].address, "Kathmandu")!=0){
			printf("Name: %s \n", st[i].name);
			printf("Roll: %d \n", st[i].roll);
			printf("Address: %s \n", st[i].address);
			printf("Faculty: %s \n", st[i].faculty);
		}
	}
	return 0;
}
