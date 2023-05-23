#include "Exam.h"

int *globalA;
char * globalB;
int gloabalC;
Student globalStudent;

void Exam::SetInfo(int id, char *name,
	Subjects s, int num)
{
	student.SetID(id) ;
	student.SetName(name) ;
	subject = s ;
	point = num ;
	//gloabalD = 0;
}
void Exam::GetResult(char *buf) const
{

}

void test (int* a) {

}

int Exam::GetPoint() const
{ 
	return point; 
}

Exam::Exam(){
	
}
Exam::~Exam(){

}
Exam::Exam(Student student){
	this->student.SetID(student.GetID());
}

/*double Exam::GetAvg(Exam *exam, int num)
{
	double sum = 0 ;
	for(int i = 0 ; i < num ; i++) sum += exam[i].GetPoint( ) ;
	return sum/num ;
}*/

Exam &Exam::referenceTest(Exam &exam, int num){
	double sum = 0 ;
	for(int i = 0 ; i < num ; i++) sum += exam.GetPoint( ) ;
	return exam;
}

Student Exam::generateStudent(){
	return Student();
}



void Exam::useGlobalStudent(){
	char * name = globalStudent.name;
	int id = globalStudent.GetID();
}
void test(Account* ac) {
	ac->GetBalance();
}
