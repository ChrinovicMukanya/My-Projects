#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IT_COURSE_FEE 72000.00
#define BUSINESS_COURSE_FEE 65000.00
#define STR_LEN 250

const char * _IT = "IT";
const char * _Business = "Business";

typedef struct Student{
	size_t student_id;
	char name[STR_LEN + 1];
	char surname[STR_LEN + 1];
	char course[STR_LEN + 1];
	double current_fees;
	double outstanding_fees; 
}Student;

typedef Student * student_pointer;
double disply_balance(Student student){
	return  student.current_fees;
}
typedef struct Student_Database{
		Student s_arr[5];
} Student_Database;

void update_fees(Student * student,char *course,double amount){
	student_pointer s_ptr = student;
	s_ptr->current_fees =+ amount;

	if (strcmp(course, _IT) == 0){
		if (student->current_fees >= IT_COURSE_FEE){
			s_ptr->outstanding_fees = 0;
		}else
			s_ptr->outstanding_fees = IT_COURSE_FEE - amount;
	}else if (strcmp(course, _Business) == 0){
		if (student->current_fees >= BUSINESS_COURSE_FEE){
			s_ptr->outstanding_fees = 0;
		}else
			s_ptr->outstanding_fees = BUSINESS_COURSE_FEE - amount;
	}else
		printf("Invalid course\n");
}

void create_student(Student *new_student, char nme[],char sur[],char crs[] ,double crf){
	student_pointer s_ptr = new_student;
	strncpy(new_student->name, nme, sizeof(new_student->name -1));
	strncpy(new_student->surname, sur, sizeof(new_student->surname -1));
	strncpy(new_student->course, crs, sizeof(new_student->course -1));
	s_ptr->current_fees = crf;
}

void search_student(Student s_database[], int len,  char s_info[]){
		int x;
		for(x = 0; x < len; ++x){
			if ((strcmp(s_info ,s_database[x].name)) == 0 || (strcmp(s_info, s_database[x].surname) == 0)){
				printf("Name    :\t%s\n", s_database[x].name);
				printf("Surname :\t%s\n", s_database[x].surname);
				printf("Course  :\t%s\n", s_database[x].course);
				printf("fees paid : %0.2f\n", s_database[x].current_fees);
			}
		}printf("No Student Records\n");
}

int main(int argc, char * argv[])
{
	Student student_database[5];
        int len = sizeof(student_database) / sizeof(student_database[0]);
	
	int st_num;
	printf("How Many student do you want to add? \n");
	scanf("%d", &st_num);
	
	int x = 0;
	while (x < st_num){
		getchar();
		char name[STR_LEN];
		printf("Insert name : ");
		fgets(name, STR_LEN, stdin);

		char surname[STR_LEN];
		printf("Insert surname : ");
		fgets(surname, STR_LEN, stdin);

		char course[STR_LEN];
		printf("Insert course (IT/Business) : ");
		fgets(course, STR_LEN, stdin);
	
		double current_fees;
		printf("Insert fees paid : ");
		scanf("%s", &current_fees);
		
		double outstanding_fees;

		if(strcmp(course, _IT) == 0){
			outstanding_fees = IT_COURSE_FEE - current_fees;
		}else if (strcmp(course, _Business) == 0){

			outstanding_fees = BUSINESS_COURSE_FEE - current_fees;
		}

		Student n_student = {1391374, "NONE", "NONE","NONE",0.0};
		create_student(&n_student, name, surname , course , current_fees);
	
		student_database[x] = n_student;
		++x;
	}
	printf("\n");

	char search_name[STR_LEN];
	printf("Insert name to search :  ");
	scanf("%s", &search_name);

	search_student(student_database, st_num , search_name);
}
	
