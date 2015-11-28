#include "student.h"

#include<iostream>
#include <string>

using namespace std;

// intialization for static Data Member "Serial ID"..
//int Student::SerialId=1000000;


// Constructor function will intialize Data Members..& the System will generats the Serial number automatically..

Student::Student (string StudentName, int StudentID)
{
		studentID=StudentID;

		studentName=StudentName;


}

void Student::setStudentID(int StudentID){
	studentID=StudentID;
}

int Student::getStudentID(){
	return studentID;
}
bool Student::RegisterCourse(Course c)
{

			if ((CurrentCredits + c.get_Credits())<=10)
				{
					CurrentCredits= CurrentCredits+ c.get_Credits();

					cout<<"You Have Registered Sucssefuly"<<endl;

					cout<<endl;

					return true;
				}


	else
			{
				cout<<"You have reached the allowed number of Credits for this semester"<<endl;

				cout<<endl;

				return false;
			}
}

void Student::DropCourse(Course c)
{
	if (CurrentCredits<c.get_Credits())
		{
			cout<<"You don't have enough Credits to drop from"<<endl;

			cout<<endl;
		}
	else
		{
			CurrentCredits=CurrentCredits - c.get_Credits();

			cout<<"You Have Dropped sucssefuly"<<endl;

			cout<<endl;
		}

}

// Function " Print Details" to print Student object information about the student " Name/Serial ID/Current Credits"...\

void Student::PrintDetails()
{
	cout<<"** Your Informations are:-"<<endl;

	cout<<endl;

	cout<<"1] Name: "<<studentName<<endl;

	cout<<"2] Serial ID : "<<studentID<<endl;

	cout<<"3] Your Number Of Credits : "<<CurrentCredits<<endl;


	cout<<endl;
}






