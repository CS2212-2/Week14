#include"Course.h"
#include"student.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int Course::Num_ID=200;

// Constructor function will intialize Data Members..& the System will generats the Course ID number automatically..
Course::Course(string course_ID ,int ccredit)
{
	 set_Credits(ccredit);

	 char buffer[10];

	 Num_ID++;

	// Converting Int to string..
	sprintf(buffer,"%d",Num_ID);

	// Storing the Course ID after conervting ..
    CourseID=course_ID+buffer;
}

void Course::set_Credits(int ccredit)
{
	Credits=ccredit;
}

int Course::get_Credits()
{
	return Credits;
}

//Function "Print" to print Course object Information's about Courses " Course ID / Credits "..

void Course::Print()
{
	cout<<setw(10)<<"Course: "<<setw(5)<<"|"<<setw(15)<<"Credits:"<<endl;

	cout<<setw(8)<<CourseID<<setw(7)<<"|"<<setw(8)<<Credits<<" "<<"Hours."<<endl;

	cout<<"-----------------------------------";

	cout<<endl<<endl;

}




