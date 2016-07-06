// Calculates pay given rate and hours
//
#include <iostream>
#include <string>

using namespace std;

//   grades     "A+", "A", "A-",   "B+", "B", "B-",  "C+",   "C", "C-",  "D+",  "D", "D-"
enum grade {Aplus = 0, A,  Aminus, Bplus, B,  Bminus, Cplus,  C,  Cminus, Dplus,  D,  Dminus };
int gradeCutoff[] =
           {   96,    90,      88,   86, 80,      79,    77, 70,      68,    66, 60,     57 };

int main()
{
	double average;

	cout << "Enter average:  ";
	cin  >> average;
	if ( average > 105 )
	{
		cout << "Cut the crap." << endl;
		return 17;
	}

	string grade =
		average >= gradeCutoff[ Aplus  ] ? "A+" :
		average >= gradeCutoff[ A      ] ? "A"  :
		average >= gradeCutoff[ Aminus ] ? "A-" :
		average >= gradeCutoff[ Bplus  ] ? "B+" :
		average >= gradeCutoff[ B      ] ? "B"  :
		average >= gradeCutoff[ Bminus ] ? "B-" :
		average >= gradeCutoff[ Cplus  ] ? "C+" :
		average >= gradeCutoff[ C      ] ? "C"  :
		average >= gradeCutoff[ Cminus ] ? "C-" :
		average >= gradeCutoff[ Dplus  ] ? "D+" :
		average >= gradeCutoff[ D      ] ? "D"  :
		average >= gradeCutoff[ Dminus ] ? "D-" : "F";

	cout << "Semester grade: " << grade << endl;
//	cout << "size of gradeCutoff: " << sizeof( gradeCutoff ) << endl;

	return 0;
}


