#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
struct student{
    string name;
    int roll;
    struct marks{
        int tamil;
        int eng;
        int maths;
        int bio;
        int che;
        int phy;

    }marks;

    
};
void record(student s[] ,int x ){
    for(int i = 0; i < x ; i++){
        cout<<"ENTER A SUDENT NAME:  "<<endl;;
        cin>>s[i].name;
        cout<<"ENTER A STUDENT ROLL NUMBER: "<<endl;;
        cin>>s[i].roll;
        cout<<"*******STUDENT MARKS***********"<<endl;
        cout<<"ENTER A TAMIL MARK: "<<endl;
        cin>>s[i].marks.tamil;
        cout<<"ENTER A ENGLISH MARK: "<<endl;
        cin>>s[i].marks.eng;
         cout<<"ENTER A  MARK MATHS: "<<endl;
        cin>>s[i].marks.maths;
         cout<<"ENTER A BIOLOGY MARK: "<<endl;
        cin>>s[i].marks.bio;
        cout<<"ENTER A CHEMISTRY MARK: "<<endl;
        cin>>s[i].marks.che;
        cout<<"ENTER A PHYSICE MARK: "<<endl;
        cin>>s[i].marks.phy;
        cout<<endl;
        
    }
}
void display(student s[], int n){
    float total;
    float average;
    char grade;
    int y;
            cout<<"ENTER A YOUR ROLL NUMBER: "<<endl;
            cin>>y;
    for (int j = 0; j < n ; j++){
        
    if(y == s[j].roll){
        cout<<"STUDENT RECORDS\n"<<endl;
        cout<<"ENTER A SUDENT NAME:  "<<s[j].name<<endl;
         cout<<"ENTER A STUDENT ROLL NUMBER: "<<s[j].roll<<endl;
        cout<<"*******STUDENT MARKS***********"<<endl;
        cout<<" A TAMIL MARK: "<<s[j].marks.tamil<<endl;
        cout<<" A ENGLISH MARK: "<<s[j].marks.eng<<endl;
         cout<<"A  MARK MATHS: "<<s[j].marks.maths<<endl;
         cout<<" A BIOLOGY MARK: "<<s[j].marks.bio<<endl;
        cout<<"A CHEMISTRY MARK: "<<s[j].marks.che<<endl;
        cout<<" A PHYSICE MARK: "<<s[j].marks.phy<<endl;
        cout<<endl;
         

    
    

    total = s[j].marks.tamil +  s[j].marks.eng +  s[j].marks.maths +  s[j].marks.bio +  s[j].marks.che +  s[j].marks.phy;
    cout<<"TOTAL: "<<total<<endl;
     average = (s[j].marks.tamil +  s[j].marks.eng +  s[j].marks.maths +  s[j].marks.bio +  s[j].marks.che +  s[j].marks.phy) / 6.0;
    cout<< "AVERAGE: "<<average<<endl;
    int maximum = max({s[j].marks.tamil,  s[j].marks.eng,
    s[j].marks.maths,
    s[j].marks.bio,
    s[j].marks.che,
    s[j].marks.phy});

    cout << "MAX MARK: " << maximum << endl;
    int minimum = min({
    s[j].marks.tamil,
    s[j].marks.eng,
    s[j].marks.maths,
    s[j].marks.bio,
    s[j].marks.che,
    s[j].marks.phy
});

cout << "MIN MARK: " << minimum << endl;

if (average >= 90)
{
    grade = 'A';
}
else if (average >= 80)
{
    grade = 'B';
}
else if (average >= 70)
{
    grade = 'C';
}
else if (average >= 60)
{
    grade = 'D';
}
else if (average >= 50)
{
    grade = 'E';
}
else
{
    grade = 'F';
}
cout << "Grade = " << grade << endl;
    }
}
}
int main(){
    int choice ;
    int n;
    cout<<"ENTER A NUMBER OF STUDENT\n";
    cin>>n;
    student s[n];

    while(1){
        cout<<"1.ENTER A STUDENT RECORD"<<endl<<"2.DISPLAY THE STUDENT RESULTS "<<endl<<"ANY KEY FOR EXIT "<<endl;
        cin>>choice;
        switch (choice){
            case 1:
            record(s,n);
            break;
            case 2:
            display(s,n);
            break;
            default:
            return 0;

            
            
        }
    }
    return 0;
}
