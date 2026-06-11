#include<iostream>
using namespace std;

class Course{

    public:

    string name;
    int credit;
    float grade;
};

int main(){
    int n;
    cout<<"Enter the No of Courses : ";
    cin>>n;

    Course courses[n];
    
    float totalCredits = 0;
    int totalPoints = 0;

    for(int i=0;i<n;i++){

        cout<<"\nEnter Course Name : ";
        cin>>courses[i].name;

        cout<<"Enter Grade Points : ";
        cin>>courses[i].grade;

        cout<<"Enter Credits Hours: ";
        cin>>courses[i].credit;

        totalCredits +=  courses[i].grade*courses[i].credit;
        totalPoints += courses[i].credit;
    }

    float cgpa = totalCredits / totalPoints;

    cout<<"\n-------Result-------\n";

    for(int i=0;i<n;i++){
        cout<<"Course : "<<courses[i].name<<endl;
        cout<<"Grade : "<<courses[i].grade<<endl;
        cout<<"Credits : "<<courses[i].credit<<endl<<endl;
    }

    cout<<"Final CGPA : "<<cgpa;

    return 0;
}