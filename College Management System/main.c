#include <stdio.h>
#include <stdlib.h>
#define IT_COURSE_FEE 72000.00
#define BUSINESS_COURSE_FEE 65000.00

typedef struct Student{
	const int student_id;
	char * name;
	char * surname;
	char * course;
	double current_fees;
	double outstanding_fees; 
}Student;

typedef Student * student_pointer;

double disply_balance(Student student){
	return  student.current_fees;
}

void update_fees(Student * student,char *course,double amount){
	student_pointer s_ptr = student;
	s_ptr->current_fees =+ amount;

	if (course == "information_Technology"){
		if (student->current_fees >= IT_COURSE_FEE){
			s_ptr->outstanding_fees = 0;
		}else
			s_ptr->outstanding_fees = IT_COURSE_FEE - amount;
	}else if (course == "business"){
		if (student->current_fees >= BUSINESS_COURSE_FEE){
			s_ptr->outstanding_fees = 0;
		}else
			s_ptr->outstanding_fees = BUSINESS_COURSE_FEE - amount;
	}else
		printf("Invalid course/n");
}

void create_student(Student *new_student,char *nme,char *sur,char *crs, double crf){
	 student_pointer s_ptr = new_student;
	 s_ptr->name = nme;
	 s_ptr->surname = sur;
	 s_ptr->course = crs;
	 s_ptr->current_fees = crf;
}
void search_student(Student s_database[], int len,  char * s_name){
		int x;
		for(x = 0; x < len; ++x){
			if (s_name == s_database[x].name){
				printf("Name    :\t%s\n", s_database[x].name);
				printf("Surname :\t%s\n", s_database[x].surname);
				printf("Course  :\t%s\n", s_database[x].course);
				printf("fees paid : %d\n", s_database[x].current_fees);
			}
		}
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
		char * name;
		printf("Insert name : ");
		scanf("%s", &name);

		char * surname;
		printf("Insert surname : ");
		scanf("%s", &surname);

		char * course;
		printf("Insert course : ");
		scanf("%s", &course);
	
		double current_fees;
		printf("Insert fees paid :");
		scanf("%s", &current_fees);
		
		double outstanding_fees;

		if (course == "information_technology"){
			outstanding_fees = IT_COURSE_FEE - current_fees;
		}else if (course == "business"){
			outstanding_fees = BUSINESS_COURSE_FEE - current_fees;
		}

		Student n_student = {1391374, NULL, NULL, NULL};
		create_student(&n_student, name, surname , course , current_fees);
		student_pointer s_ptr = student_database[x];
		s_ptr = n_student;
		x++;
	}
}

