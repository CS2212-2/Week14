#ifndef SECTION_H_
#define SECTION_H_


#include"Course.h"
#include"Faculty.h"
#include"student.h"

#include <iostream>
#include <string>

using namespace std;

class Section
{
	private:

		int sectionID;


		string course_Name;
		string sectionRoom;

		int CurrentSize;

		bool CanRegisterMore();



	public:

		Section (int section_ID);
		Section (string courseName, int section_ID);

		bool RegisterStudent(Student);
		bool RegisterStudentbyID(int);

		void DropStudent(Student);

		void PrintDetails();

		friend class Course;
		friend class Faculty;
		friend class Student;




};
#endif /*SECTION_H_*/
