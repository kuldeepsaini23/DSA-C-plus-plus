#include<iostream>
using namespace std;

//! OOPS-II
class Student{
private:
  string gf;

public:
  int id;
  int age;
  bool present;
  string name;
  int nos;
  int *v;

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
    this->v = new int(10);
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

  //! OOPS-II
  //*Copy ctor
  Student(const Student&srcobj){
    //*hacker
    // srcobj.gf = "Mausi"; canot change because srcobj is const

    cout<<"Studen Copy constructor called"<<endl;
    this->name = srcobj.name;
    this->age = srcobj.age;
    this->gf = srcobj.gf;
    this->nos = srcobj.nos;
    this->present = srcobj.present;
    this->id = srcobj.id;
  }

  //*Getter and Setter
  string getGFName(){
    // return gf;
    return this->gf;
  }

  void setGFName(string gf){
    this->gf = gf;
  } 

  //! OOPS-II end

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

  //! Deafult Constructor
public:
  ~Student(){
    cout<<"Student Dtor called"<<endl;
    delete v;
  }

};

 
int main(){
  //! Copy ctor
  // Student s1(1,12,1,"Chota Bheem",1,"Chutki");

  // Student s2 = s1; //* No Default constructor called

  // Student s2; //* Defauult constructor called
  // s2 = s1;//* if copy constructor is called here it will ot be called instead simple copy is happening

  //* Method-1 to call copy constructor
  // Student s2 = s1;

  //* Method-2 to call copy constructor
  // Student s2(s1);
  // cout<<s1.name<<endl;
  // cout<<s2.name<<endl;
  
  //! dtor
  // Student s1(1,12,1,"Chota Bheem",1,"Chutki");
  // cout<<s1.name<<endl;

  // {
  //   Student s1(1,12,1,"Chota Bheem",1,"Chutki");
  //   cout<<s1.name<<endl;
  // }

  // Student s2;

  // Student s1(1,12,1,"Chota Bheem",1,"Chutki");

  //*Getter and Setter
  Student s1(1,12,1,"Chota Bheem",1,"Chutki");
  cout<<s1.getGFName()<<endl;
  s1.setGFName("Indumati");
  cout<<s1.getGFName()<<endl;

 return 0;
}
