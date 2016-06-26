//Trying to calculate hourly wages

#include <iostream>
#include <string>
using namespace std;

int main()
{
        double  basepay,        //Base pay rate
                hours,          //Hours worked
                overtimeHours;  //OT worked

// base pay
        cout << "What is your base pay?  " ;
        cin >> basepay;

//Hours worked
        cout << "How many hours did you work?  ";
        cin >> hours;

//OT worked
        cout << "How much overtime did you work?  ";
        cin >> overtimeHours;

//Sort employee type
        if      (overtimeHours > 0)
        {
                char y_n = 0;
                const double overtimeRate = 1.5;

                cout << "Do you receive overtime pay? (y/n)  ";
                cin >> y_n;
                if (y_n == 'y')
                cout << "Your take home pay is " << (((overtimeRate*basepay)*overtimeHours)+(basepay*hours)) << endl;
                if (y_n == 'n')
                cout << overtimeHours << " overtime hours will be reported to your superior." << endl;
        }
        else
                        cout << "No overtime." << endl;
        return 0;
}
