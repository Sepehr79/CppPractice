#include<iostream>
#include<string>

using namespace std;

// simple oop in c++

enum Gender{
	MALE, FEMALE
};

class Person{
private:
	string name;
	string lastName;
	int age;
	Gender gender;
	
public:	
	Person(string nameInput, string lastNameInput, int ageInput, Gender genderInput){
		name = nameInput;
		lastName = lastNameInput;
		age = ageInput;
		gender = genderInput;
	}
	
	// setters
	void setName(string variable){
		name = variable;
	}
	
	void setLastName(string variable){
		lastName = variable;
	}
	
	void setAge(int variable){
		age = variable;
	}
	
	void setGender(Gender variable){
		gender = variable;
	}
	
	// getters
	string getName(){
		return name;
	}
	
	string getLastName(){
		return lastName;
	}
	
	int getAge(){
		return age;
	}
	
	Gender getGender(){
		return gender;
	}
	
};

int main(){
	
	Person person = Person("sepehr", "mollaei", 20, MALE);
	
	cout << person.getName() << " " << person.getLastName() << endl; 
	
}
