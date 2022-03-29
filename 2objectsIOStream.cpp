#include <iostream>
#include <string>

using namespace std;

class People {

	string P_Name; //member variable
	int p_Age; 
	double salary;// member variable

public:
	// default constructor. // will initialize member variables here

	People() {

		P_Name = "noName";
		p_Age = 0;
		salary = 23000;
	}
	//insertion and extraction operator overloading
	friend ostream& operator<<(ostream& ostr, People& P);
	friend istream& operator>>(istream& istr, People& P);

};

int main() {

	cout << "Enter your Name Age and Salary" << endl;
		People K;
		cin >> K;
		cout << K;
		People M;
		cin >> M;
		cout << M;

	return 0;

}

ostream& operator<<(ostream& ostr, People& P)
{
	ostr << "Hello to the world of IT" << endl;
	ostr << "My Name is :" << P.P_Name << " and My Age is :" << P.p_Age << "My Salary is :" << P.salary << endl;
	return ostr;
	// TODO: insert return statement here
}

istream& operator>>(istream& istr, People& P)
{
	istr >> P.P_Name >> P.p_Age >> P.salary;
	return istr;
	// TODO: insert return statement here
}
