#include<iostream>
using namespace std;
 
//* OOPS Class-I

class StudentClassEmpty{};

class Student{
private:
  string gf;

public:
  int id;
  int age;
  bool present;
  string name;
  int nos;

  //* Constructor
  // Student(){
  //   cout<< "Student ctor Called"<< endl;
  // }

  //! if you create a parameterized constructor then you also have to create a default constructor if you donot create a default constructor(khola ctor) then parametrized constructor will became default constructor
  Student(){
    cout<< "Student ctor Called"<< endl;
  }


  //* Parameterized Constructor
  Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname){
    id = _id;
    age = _age;
    present = _present;
    name = _name;
    nos = _nos;
    gf = _gfname;
    cout<< "Student parameterized Constructor"<<endl;
  }

  Student(int id, int age, bool present, string name, int nos){
    this->id = id;
    this->age = age;
    this->present = present;
    this->name = name;
    this->nos = nos;
    cout<< "Student parameterized Constructor without girlfriend"<<endl;
  }

  void study(){
    cout<<"Studying"<<endl;
  }

  void sleeping(){
    cout<<"Sleeping"<<endl;
  }

  void bunk(){
    cout<<"Bunking"<<endl;
  }

private:
  void gfChatting(){
    cout<< "Chating with Girlfriend"<<endl;
  }

};

int main(){

  //*If oops is not present 
  // int id1, id2;
  // string name1, name2;
  // int age1, age2;
  // int nos1, nos2;
  // int marks[5], marks[5];

  //* With OOPS
  //! if you create a parameterized constructor then you also have to create a default constructor if you donot create a default constructor(khola ctor) then parametrized constructor will became default constructor
  Student s1;// Default constructor called
  // s1.name = "Kuldeep Saini";
  // s1.age = 20;
  // s1.id = 1;
  // s1.nos = 5;
  // s1.present = 0;
  

  Student s2(1,12,1,"Kuldeep Saini",5, "IDK");
  // cout<<s2.gf<<endl; //! Will show error because gf is private 
  cout<<s2.name<<endl;
  cout<<s2.id<<endl;
  cout<<s2.present<<endl;
  cout<<s2.nos<<endl;
  cout<<s2.age<<endl;

  // s2.name = "Prikshit Saini";
  // s2.age = 19;
  // s2.id = 2;
  // s2.nos = 5;
  // s2.present = 1;  

  Student s3(2,15,0,"Lokesh",5);
  cout<<s3.name<<endl;

  //* Allocating Memory n Heap
  Student *s4 = new Student(3,34,1,"Chintu",6);
  cout<< s4->name<<endl; 
  cout<< (*s4).name<<endl;
  //! Deleting s4 object because it is allocating in the heap
  delete s4;

  //! Deleting object that were assigned in

  cout<<"Ye toh Size hh"<<endl;
  cout<<sizeof(StudentClassEmpty)<<endl;
  cout<<sizeof(Student)<<endl;


 return 0;
}