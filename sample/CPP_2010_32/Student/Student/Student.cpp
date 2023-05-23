#include "Student.h"

int gloabalD;

void Student::SetID(int num){
	id = num;
}

void Student::SetName(char *str){
	strcpy(name, str) ;
}

void Student::SetName(string name_str){
	this->name_str = name_str;
}

int Student::GetID(){
	return id ;
}

char* Student::GetName() const{
	return (char *) name ;
}

Student::Student(char* name, int id, int c){
	strcpy(this->name, name) ;
	this->id = id;
}

Student::Student(){	
}


int Student::testMe(int a[5], int *b, int c[]){
	return 0;
}
