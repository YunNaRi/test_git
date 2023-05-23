#include "Exam.h"

typedef int& iref_type;   

void PrintResult(const Exam &Exam)
{
	cout << Exam.student.GetName( ) << endl ;
	char buf[30] ;
	Exam.GetResult(buf) ;
	cout << buf << endl ;
}

char * getName(const Exam &exam){
	return exam.student.GetName();
}

Exam getExam(){
	return Exam();
}

Exam getExam(int a){
	return Exam();
}

int func(iref_type param) {
	return 0;
}
int& increment(int &val){
	val++;
	return val;
}

int increment2(int val){
	val = 100;
	return val;
}

int classArray(Exam *const arg[3]){
	return arg[0]->GetPoint();	
}

int pointerClass(Account *exam){
	return exam->PrintBalance();
}

int pointerClass2(Exam *exam){
	return exam->GetPoint();
}

int main( )
{
	Exam object_Exam; 
	Exam exam ; 
	int num  = 0; 

	/*Input*/
	num = 2;

	/* Exam & Exam::referenceTest(Exam &, signed int) */
	Exam & returnVar = object_Exam.referenceTest(exam,num);

	return 0;
}

int test(Student ar, Student Ar){
	return 0;
}
