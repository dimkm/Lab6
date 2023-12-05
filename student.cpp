#include<iostream>
#include<string>

using namespace std;


class Student {
public:
	int age;
	string gender;
	int scholarship; 

	Student() : age(0), gender("Невизначена"), scholarship(0) {
		cout << "Конструктор був визваний!" << endl;
	}

	Student(int agestudent, string genderstudent, int scholarshipstudent) {
		age = agestudent;
		gender = genderstudent;
		scholarship = scholarshipstudent;
	}
	~Student() {
		cout << "Деструктор був визваний!" << endl;
	}

	void studentinfo() {
		cout << "Вік: " << age << endl;
		cout << "Стать: " << gender << endl;
		cout << "Стипендія: " << scholarship << endl;
	}

	void inputinfo() {	
		cout << "Введіть вік: " << endl;
		cin >> age;
		cout << "Введіть стать" << endl;
		cin >> gender;
		cout << "Введіть стипендію" << endl;
		cin >> scholarship;
	}

};

int main() {

	setlocale(LC_ALL, "ukr");

	//Перший студент
	Student student1;
	student1.inputinfo();
	cout << "Перший студент" << endl;
	student1.studentinfo();

	//Другий студент
	Student student2;
	student2.inputinfo();
	cout << "Другий студент" << endl;
	student2.studentinfo();

	
}




	

