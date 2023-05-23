#include <iostream>
#include <string>
using namespace std;

class Exam;
class Student{ //학생클래스
public :

	Student(char* name, int id, int c);
	Student(Exam exam);
	Student();
	void SetID(int num);
	void SetName(char *str);
	void SetName(string name_str);
	int GetID( );
	char *GetName( ) const;
	int testMe(int a[5], int *b, int c[]);
	char name[30] ; // 이름
private :
	int id ; // 학생ID
	string name_str;
} ;
