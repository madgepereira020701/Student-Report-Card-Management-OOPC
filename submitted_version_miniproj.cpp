#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class STUDENT
{
public:
	char name[50], deptName[30], Class[3];
	char gender,Div;
	int roll_no, Admission_No;
	void get();
};
void STUDENT::get()
{
	cout << "\n\nNAME:";
	cin >> name;
	cout << "\nSTREAM:";
	cin >> deptName;
	cout << "\nCLASS:";
	cin >> Class;
	cout << "\nDIVISION:";
	cin >> Div;
	cout << "\nGENDER:";
	cin >> gender;
	cout << "\nROLL NO:";
	cin >> roll_no;
	cout << "\nADMISSION NO:";
	cin >> Admission_No;

};
class MARKS :public STUDENT
{
public:
	string SUBJECTS[15] = { "\n    CHEMISTRY","PHYSICS","MATHS","BIOLOGY","ENGLISH CORE"};
       char GRADE[5] = { 'C','C','A','A','A' };
	int Marks[5] = { 50,70,95,100,99 };
	void getw();
};
void MARKS::getw()
{
	STUDENT::get();
	cout.width(13);
	cout << "SUBJECTS";
	cout.width(15);
	cout << "MARKS";
	cout.width(8);
	cout << "GRADE";
}
class Calculate :public MARKS
{
	int total = 0;
	char grade;
	float percentage;
public:
	void RESULT()
	{
		MARKS::getw();
		for (int i = 0; i < 5; i++)
		{
			cout.width(13);
			cout << SUBJECTS[i];
			cout.width(15);
			cout << Marks[i];
			cout.width(8);
			cout << GRADE[i] << endl;
			total += Marks[i];
			percentage = total / 5;
		}
		cout.width(2);
		cout << "\nTOTAL:" << total << endl;
		cout << "PERCENTAGE:" << percentage << endl;
		cout << "ATTENDANCE:100%";
		check();
		cout << "\nGRADE:" << grade;
		Remark();
	}
	void  check()
	{
		if (percentage >= 60)
			grade = 'A';
		else if (percentage >= 50 && percentage  > 60)
			grade = 'B';
		else if (percentage  >= 33 && percentage > 50)
			grade = 'C';
		else
			grade = 'F';
	}

	void Remark()
	{
		if (percentage > 40)
			cout << "\nREMARKS:PASSED,QUALIFIED FOR HIGHER STUDIES ";
		else
			cout << "FAILED!!";
	}
};
int main()
{
	cout << "................ST XAVIER'S COLLEGE...................";
	cout << "\n...................MAPUSA, GOA............................";
	Calculate C;
	C.RESULT();

}
