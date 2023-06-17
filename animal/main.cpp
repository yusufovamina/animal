#include <iostream>
using namespace std;
class Animal {
private:
	char name[20];
	char breed[30];
	char color[20];
	char clas[20];
	int age;

public:
	Animal(const char name[20],const char breed[30],const char color[20], const char clas[20], int age) :age(age) {
		strcpy_s(this->name, name);
		strcpy_s(this->breed, breed);
		strcpy_s(this->color, color);
		strcpy_s(this->clas, clas);
	}
	Animal() {}

	void show_info() {
		cout<<"Name: "<<name<<endl;
		cout<<"Breed: "<<breed<<endl;
		cout<<"Color: "<<color<<endl;
		cout<<"Class: "<<clas<<endl;
		cout << "Age: " << age << endl << endl;
	}
};

class Cat :public Animal {
public:
	Cat(const char name[20], const char breed[30],const char color[20],const char clas[20], int age):Animal(name,breed,color,clas,age) {

	}
	void show_info() {
		cout << "--Cat's characteristics--" <<endl<< endl;
		Animal::show_info();
	}
};

class Dog :public Animal {
public:
	Dog(const char name[20], const char breed[30], const char color[20], const char clas[20], int age) :Animal(name, breed, color, clas, age) {

	}
	void show_info() {
		cout << "--Dog's characteristics--" << endl << endl;
		Animal::show_info();
	}
};

class Parrot :public Animal {
public:
	Parrot(const char name[20], const char breed[30], const char color[20], const char clas[20], int age) :Animal(name, breed, color, clas, age) {

	}
	void show_info() {
		cout << "--Parrot's characteristics--" << endl << endl;
		Animal::show_info();
	}
};


int main() {
	Cat cat1("kitty","royal","gray","mammal",2);
	cat1.show_info();
	Dog dog1("Lucky", "Retriever", "Golden", "Mammal", 2);
	dog1.show_info();
	Parrot parrot1("Kesha", "Ara", "Blue", "Birds", 1);
	parrot1.show_info();
}