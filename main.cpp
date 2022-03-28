#include <iostream>
#include <string>

using namespace std;

class People {

	string P_Name;

	int p_Age;

public:

	People() {

		P_Name = "My Name";
		p_Age = 0;
	}
	friend ostream& operator<<(ostream& ostr, People& P);
	friend istream& operator>>(istream& istr, People& P);

};

int main() {

	cout << "Enter your age and Name" << endl;
		People K;
		cin >> K;
		cout << K;


	return 0;

}

ostream& operator<<(ostream& ostr, People& P)
{
	ostr << "Hello to the world of IT" << endl;
	ostr << "My Name is :" << P.P_Name << " and My Age is :" << P.p_Age << endl;
	return ostr;
	// TODO: insert return statement here
}

istream& operator>>(istream& istr, People& P)
{
	istr >> P.P_Name >> P.p_Age;
	return istr;
	// TODO: insert return statement here
}
