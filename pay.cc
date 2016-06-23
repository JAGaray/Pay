//Trying to calculate hourly wages

#include <iostream>
#include <string>
using namespace std;

int main()
{
        double  		basepay,        //Base pay rate
						hours,          //Hours worked
						overtimeHours,  //OT worked
						total;          //Total
		const double	overtimeRate = 1.5; //OT Rate

// base pay
        cout << "What is your base pay?  " ;
        cin >> basepay;

//Hours worked
        cout << "How many hours did you work?  ";
        cin >> hours;

//OT worked
        cout << "How much overtime did you work?  ";
        cin >> overtimeHours;

//Total
		cout << ((basepay*hours)+(overtimeRate*basepay)*overtimeHours) << " is your pay" << endl;
		return 0;
}
