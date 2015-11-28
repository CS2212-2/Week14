#include "Faculty.h"

#include<iostream>
#include <string>

using namespace std;


Faculty::Faculty (string facultyName, int facultyID)
{
	FacultyId=facultyID;

	Facultyname=facultyName;


}






void Faculty::PrintDetails()
{
	cout<<"** Yor Informations are:-"<<endl;

	cout<<endl;

	cout<<"1] Name: "<<Facultyname<<endl;

	cout<<"2] Serial ID : "<<FacultyId<<endl;

	cout<<endl;

	cout<<"///////////////////////////////////////////////"<<endl;

	cout<<endl;
}






