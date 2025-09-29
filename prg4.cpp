#include<iostream>
using namespace std;
class Student{
public:
string name;
int age;
void display(){
cout<<"Name :"<<name<<"\nAge:"<<age<<endl;
}
};
int main()
{
Student s1;
s1.name = "Shreekant";
s1.age = 19;
s1.display();
return 0;
}
