//GRADE ASSIGNMENT PROGRAM
#include<iostream>
using namespace std;
int main()
{
 
int marks;
    cout<<"enter the marks"<<endl;
    cin>> marks;
    if(marks>=0&&marks<=49){
    cout <<"grade=F"<< endl;}
    else if(marks>=50&&marks<=59){
    cout<<"grade=D"<<endl;} 
    else if(marks>=60&&marks<=69){
    cout<<"grade=C"<<endl;}
    else if(marks>=70&&marks<=79){
    cout<<"grade=B"<<endl;}
    else if (marks>=80&&marks<=100){
    cout<<"grade=A"<<endl;}
    else if(marks<0||marks>100){
    cout<<"invalid input"<<endl;}
    return 0;
}