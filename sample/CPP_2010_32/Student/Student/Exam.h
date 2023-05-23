#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std ;

enum Subjects{ Math, English, Science} ;

class Exam{ // ����Ŭ����
public :		
	Exam();
	Exam(Student sutdent);
	void SetInfo( int id, char *name,Subjects s, int num) ;
	int GetPoint( ) const;
	void GetResult(char *buf) const ;
	double GetAvg(Exam *exam, int num);
	Student student ;
	Exam& referenceTest(Exam &exam, int num);	
	Student *studentPtr;
	void constructorTest(Exam exam);
	void useGlobalStudent();
	Student generateStudent();
	~Exam();
	
private :
	Subjects subject ; // ���
	int point ; // ����
	
} ;

class Account {  
public:  
   Account( double d );   // Constructor.  
   virtual double GetBalance();   // Obtain balance.  
   virtual int PrintBalance() = 0;   // Pure virtual function.
private:  
    double _balance;  
}; 
