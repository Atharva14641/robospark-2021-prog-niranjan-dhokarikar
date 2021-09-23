// Task 06 by chinmayi londhe

#include<bits/stdc++.h>
using namespace std;

//class for personal data
class Personal_data{
protected:
string name;
string surname;
string address;
int mobile_no;
string dob;

public:
//constructor for personal_data

Personal_data(){

}
void set_Personaldata(){
    cout<<"ENTER YOUR PERSONAL DATA";
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter surname: ";
    cin>>surname;
    cout<<"\nEnter address: ";
    cin>>address;
    cout<<"\nEnter mobile no: ";
    cin>>mobile_no;
    cout<<"\nEnter date of birth :";
    cin>>dob;
}


};

//class for Profesional data
class Profesional_data{
protected:
string name_of_organization;
string job_profile;
string project;

public:

//constructor for profestional_data
Profesional_data(){

}
void set_Profesionaldata(){
    cout<<"\nENTER YOUR PROFESSIONAL DATA\n";
    cout<<"\nEnter name of organization: ";
    cin>>name_of_organization;
    cout<<"\nEnter job profile: ";
    cin>>job_profile;
    cout<<"\nEnter Project name: ";
    cin>>project;
}

};

//class for academic data
class Academic_data{
protected:
int year_of_passing;
float cgpa;
string college_name;
string branch;

public:

//constructor for Academic_data
Academic_data(){

}
void set_Academicdata(){
    cout<<"ENTER YOUR ACADEMIC DATA\n";
    cout<<"Enter year of passing: ";
    cin>>year_of_passing;
    cout<<"\nEnter cgpa: ";
    cin>>cgpa;
    cout<<"\nEnter college name: ";
    cin>>college_name;
    cout<<"\nEnter branch: ";
    cin>>branch;

}
};

//class for biodata
class biodata:public Personal_data,public Profesional_data,public Academic_data
{
    public:
    void display(){
    cout<<"\nYOUR BIODATA :"<<"\n";
    cout<<"\nName: "<<name;
    cout<<"\nSurname: "<<surname;
    cout<<"\nAddress: "<<address;
    cout<<"\nMobile no: "<<mobile_no;
    cout<<"\nDate of Birth: "<<dob;
    cout<<"\nName of Organization: "<<name_of_organization;
    cout<<"\nJob Profile: "<<job_profile;
    cout<<"\nProject: "<<project;
    cout<<"\nYear of Passing: "<<year_of_passing;
    cout<<"\nCGPA: "<<cgpa;
    cout<<"\nCollege name: "<<college_name;
    cout<<"\nBranch: "<<branch<<"\n";
    }
};

int main(){
    biodata B;            //creation object of class biodata
    B.set_Personaldata();
    B.set_Profesionaldata();
    B.set_Academicdata();

    B.display();     //displaying data through object of class biodata

    return 0;
}