#include <iostream>
#include "student.h"
#include "Course.h"
#include "Faculty.h"
#include "Section.h"
#include <fstream>
#include <string>
//#include "Class2_Section.cpp"
//#include "Class2_Courses.cpp"

#include <vector>
using namespace std;
 int main() {
	 cout << "welcome to Week 14" << endl;

	 std::ifstream file("Names.txt");
	    std::string str;
	    int counter=0;
	    while (std::getline(file, str))
	    {
	    //	std::cout << str << '\n';
	    	Student* st1 = new Student(str.c_str(), counter);
	    	st1->PrintDetails();
	    	counter++;
	    }

	    std::ifstream file1("Courses.txt");
	    	    std::string str1;
	    	    int counter1=0;
	    	    while (std::getline(file1, str1))
	    	    {
	    	    //	std::cout << str << '\n';
	    	    	Course* cs1 = new Course(str1.c_str(), counter1);
	    	    	cs1->Print();
	    	    	counter1++;
	    	    }

	// Student* st1 = new Student("Jack", 1234);
	 //Course* c1 = new Course("CS_C++_Programming", 1234);
	 //Faculty* f1 = new Faculty("Izzat alsmadi", 7777);
	 //f1->PrintDetails();
     // Section* s1 = new Section(22322);
     // s1->PrintDetails();
     // bool test=s1->RegisterStudentbyID(st1->getStudentID());
     // s1->PrintDetails();
     //vector<Student> sarray(size);
     //sarray[0]=st1;
     //sarray[1]=st2;

     return 0;
 }
