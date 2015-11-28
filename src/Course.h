#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
	private:

		int Credits;

		string CourseID;

		static int Num_ID;

	public:

		Course(string,int);

		void set_Credits(int);

		int get_Credits();

		void Print();

		friend class Student;




};

#endif /*COURSE_H_*/
