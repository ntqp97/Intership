#include"People.h"
#include"Staff.h"
#include"Student.h"
#include"Teacher.h"
int People::countPeople = 0;
int Staff::countStaff = 0;
int Teacher::countTeacher = 0;
int Student::countStudent = 0;

int main() {
	//explicit casting
	Teacher *t = new Teacher;//instance of teacher
	t->Input();

	Staff *s = (Staff*)(t);	//cast teacher to staff
	s->getCountStaff();
	People *p = (People*)(t);//cast teacher to people
	p->getCountPeople();

	Student* st = new Student;			
	st->Input();
	People *p2 = (People*)(st);//cast student to people
	p2->getCountPeople();
	
	Teacher *t1 = (Teacher*)(st);//cast student to teacher
	t1->getCountTeacher();

	//Dynamic casting
	Staff *s1 = dynamic_cast<Staff*>(t);		//cast teacher to staff
	s1->getCountStaff();
	People *p3 = dynamic_cast<People*>(t);		//cast teacher to people
	p3->getCountPeople();
	People *p4 = dynamic_cast<People*>(st);		//cast student to people
	p4->getCountPeople();
	Teacher *t2 = dynamic_cast<Teacher*>(st);		//cast student to teacher
	t2->getCountTeacher();
	
	//Static casting
	Staff *s2 = static_cast<Staff*>(t);		//cast teacher to staff
	s2->getCountStaff();
	People *p6 = static_cast<People*>(t);	//cast teacher to people
	p6->getCountPeople();
	People *p7 = static_cast<People*>(st);		//cast student to people
	p7->getCountPeople();

	People *p8 = static_cast<People*>(st);
	Teacher *t3 = static_cast<Teacher*>(p8); //cast student to teacher
	
	t3->getCountTeacher();
	//Teacher *t3 = static_cast<Teacher*>(st); // Couldn,t static_cast studen to teacher
	system("pause");
	return 0;
}