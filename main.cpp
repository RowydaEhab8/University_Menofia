#include <iostream>
#include <string>

using namespace std;


class University {
	private:
		static Singleton *instance_ptr;
		Singleton(){}
	public:
	 Singleton(const Singleton& obj )= delete;
	 static Singleton *get_instance(){
	 	if(instance_ptr== NULL){
	 		instance_ptr=new Singleton();
		 }
		 return instance_ptr;
};



class Department {
private:
    string name;
    int capacity;
    double required_gpa;

public:

    Department() {
        name = "";
        capacity = 0;
        required_gpa = 0.0;
    }



    Department(string name, int capacity, double required_gpa) {
        name=name;
        capacity=capacity;
        required_gpa=required_gpa;
    }



    string get_name(){
        return name;
    }
    void set_name(string name) {
        name=name;
    }


    int get_capacity(){
        return capacity;
    }
    void set_capacity(int capacity) {
        capacity = capacity;
    }


    double get_required_gpa(){
        return required_gpa;
    }

    void set_required_gpa(double required_gpa) {
        required_gpa = required_gpa;
    }
    
};

class Person {
private:
    int id;
    string name;
    int age;
    char gender;

public:

    Person() {
        id = 0
        name = "";
        age = 0
        gender = 'p';
    }



    Person(int id, string name , int age , char gender) {
        id=id;
        name=name;
        age=age;
        gender=gender;
    }



    int get_id(){
        return id;
    }

    void set_id(int id) {
        id=id;
    }

    string get_name(){
        return name;
    }

    void set_name(string name) {
        name=name;
    }


    int get_age(){
        return age;
    }

    void set_age(int age) {
        age=age;
    }


    char get_gender(){
        return gender;
    }

    void set_gender(char gender) {
        gender=gender;
    }

};
Singleton *Singleton::instance_ptr = NULL;
int main() {
	Singleton * s = Singleton :: get_instance();

    return 0;
}

