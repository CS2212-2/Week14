#ifndef STUDENT_H_
#define STUDENT_H_


#include"Course.h"

#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:

		int studentID;



		string studentName;

		int CurrentCredits;

		bool CanRegisterMore();



	public:

		Student (string studentName, int studentID);

		bool RegisterCourse(Course);

		void DropCourse(Course);
		void setStudentID(int studentID);
		int getStudentID();

		void PrintDetails();

		friend class Course;




};
#endif /*STUDENT_H_*/
