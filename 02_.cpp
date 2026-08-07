#include<iostream>
using namespace std;
int main()
{
    char StudentName[30],
      StudentEnrollmentNumber[10],
      Branch[20],
      MobileNumber[11],
      DateOfBirth[10],
      BloodGroup[10],
      Gender[10];
    int Semester(10);
   
    cout<<"******************************************************************************"<<endl;
    cout<<".                     STUDENT RECORD MANAGMENT SYSTEM                         "<<endl;
    cout<<"******************************************************************************"<<endl;
    
    
    cout<<("Enter Student Name :");
    cin.ignore();  
    cin.getline(StudentName,30);
   
   
    cout<<"Enter Student Enrollment Number :";
    cin>>StudentEnrollmentNumber;
    
    
    cout<<"Enter Branch :";
    cin>>Branch;
    
    
    cout<<"Enter Mobile Number :";
    cin>>MobileNumber;
    
    
    cout<<"Enter Date Of Birth :";
    cin>>DateOfBirth;
    
    
    cout<<"Enter Blood Group :";
    cin>>BloodGroup;
    
    
    cout<<"Enter Gender :";
    cin>>Gender;
    
    cout<<"Enter Semester :";
    cin>>Semester; 


    cout<<"---------------------------------------------------------------------------------"<<endl;
    cout<<"                              STUDENT INFORMATION                                "<<endl;
    cout<<"---------------------------------------------------------------------------------"<<endl;
    
    
    cout<<"Student Name :"<<StudentName<<endl;
    cout<<"Student Enrollment Number :"<<StudentEnrollmentNumber<<endl;
    cout<<"Branch :"<<Branch<<endl;
    cout<<"Mobile Number :"<<MobileNumber<<endl;
    cout<<"Date of Birth :"<<DateOfBirth<<endl;
    cout<<"Blood Group :"<<BloodGroup<<endl;
    cout<<"Gender :"<<Gender<<endl;
    cout<<"Semester"<<Semester<<endl;
}    
    