#ifndef FACULTY_H_
#define FACULTY_H_


#include "Faculty.h"

#include <iostream>
#include <string>

using namespace std;

class Faculty
{
	private:

		int FacultyId;



		string Facultyname;





	public:

		Faculty (string FacultyName, int FacultyID);

		void PrintDetails();

		friend class Course;




};
#endif /*FACULTY_H_*/
