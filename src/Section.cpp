#include "Section.h"

#include<iostream>
#include <string>

using namespace std;


Section::Section (int SectionID)
{
		sectionID=SectionID;




}
Section::Section (string courseName, int SectionID)
{
		sectionID=SectionID;
		course_Name=courseName;



}


bool Section::RegisterStudent(Student s)
{

			if(CurrentSize <10){
				CurrentSize++;
				cout<<"You have registered successfully"<<endl;

							cout<<endl;
							return true;
			}
			else{
				cout<<"Sorry Class is full"<<endl;

							cout<<endl;
							return false;
			}
}

bool Section::RegisterStudentbyID(int studentID)
{

			if(CurrentSize <10){
				CurrentSize++;
				cout<<"You have registered successfully"<<endl;

							cout<<endl;
							return true;
			}
			else{
				cout<<"Sorry Class is full"<<endl;

							cout<<endl;
							return false;
			}
}

void Section::DropStudent(Student s)
{
	CurrentSize--;
					cout<<"You have withdrawn successfully"<<endl;

								cout<<endl;

}

// Function " Print Details" to print Student object information about the student " Name/Serial ID/Current Credits"...\

void Section::PrintDetails()
{
	cout<<"** Your Informations are:-"<<endl;

	cout<<endl;

	cout<<"1] Room: "<<sectionRoom<<endl;

	cout<<"2] Serial ID : "<<sectionID<<endl;
	cout<<"3] Course Name : "<<course_Name<<endl;

	cout<<"4] Section current size : "<<CurrentSize<<endl;


	cout<<endl;
}





