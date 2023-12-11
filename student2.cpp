#include<iostream>
#include<string>

using namespace std;


class Student {
private:
	int age;
	string gender;
	int scholarship;

public:
	
	void SetAge(int setage) {
		age = setage;
	}

	int GetAge(){
		return age;
	}

	void SetGender(string setgender) {
		gender = setgender;
	}

	string GetGender() {
		return gender;
	}
	
	void SetScholarship(int setscholarship) {
		scholarship = setscholarship;
	}

	int GetScholarship() {
		return scholarship;
	}
	
};

int main() {

	setlocale(LC_ALL, "ukr");
	
	//Перший студент
	Student student1;
	int age1;
	cout << "Введіть вік першого студента: " << endl;
	cin >> age1;
	student1.SetAge(age1);

	string gender1;
	cout << "Введіть стать першого студента: " << endl;
	cin >> gender1;
	student1.SetGender(gender1);

	int scholarship1;
	cout << "ВВедіть стипеднію першого студента: " << endl;
	cin >> scholarship1;
	student1.SetScholarship(scholarship1);

	//Другий студент
	Student student2;
	int age2;
	cout << "Введіть вік другого студента: " << endl;
	cin >> age2;
	student2.SetAge(age2);

	string gender2;
	cout << "Введіть стать другого студента: " << endl;
	cin >> gender2;
	student2.SetGender(gender2);

	int scholarship2;
	cout << "ВВедіть стипеднію другого студента: " << endl;
	cin >> scholarship2;
	student2.SetScholarship(scholarship2);


	cout << "Інформація про першого студента: " << endl;
	cout << "Вік: " << student1.GetAge() << endl;
	cout<< "Стать: " << student1.GetGender() << endl;
	cout << "Стипендія: " << student1.GetScholarship() << endl;

	cout << "Інформація про другого студента: " << endl;
	cout << "Вік: " << student2.GetAge() << endl;
	cout << "Стать: " << student2.GetGender() << endl;
	cout << "Стипендія: " << student2.GetScholarship() << endl;

	double averageAge = (student1.GetAge() + student2.GetAge()) / 2.0;
	double totalScholarship = student1.GetScholarship() + student2.GetScholarship();
	
	cout << "Середній вік студентів: " << averageAge << endl;
	cout << "Сумарна стипендія студентів: " << totalScholarship << endl;
}