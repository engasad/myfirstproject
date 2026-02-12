#include<iostream>
using namespace std;

int main()
{
 
 float s1,s2,s3,avg;
    cout << "Please enteS1" << endl;
    cin >> s1;
    cout << "Please Enter S2" << endl;
    cin >> s2;
    cout << "enter s3"<< endl;
    cin >> s3;
    avg=(s1+s2+s3)/3;
    if(avg<50 && avg>33){
    cout << "Grade is C" << endl;
    }
    else if(avg<80 && avg>50){
    cout << "Grade is B" << endl;}
    else if(avg>80){
    cout << "Grade is A" << endl;}
    else if(avg<33){
    cout << "grade is F" << endl;
    }
    else{
    cout << "you ender wrong characters" << endl;
    }
    return 0;
}