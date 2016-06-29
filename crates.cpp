//Crate size and costs

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        const double costPerFoot = 0.23;
        const double chargePerFoot = 0.5;
        const double costCardboard = 0.15;
        const double costWood = 0.6;
        const double costMetal = 0.9;
        const double chargeCardboard = 0.3;
        const double chargeWood = 1.0;
        const double chargeMetal = 1.4;


        double length, width, height, volume, cost, charge, profit;

        char w_c_m = 0;
        char y_n = 0;

        cout << setprecision(2) << fixed << showpoint;

        cout << "What type of material will your crate be using? (w for wood, m for metal, c for cardboard) " << endl;

        cin >> w_c_m;

        if (w_c_m == 'w')
        {

                cout << "You chose a wooden crate." << endl;
                cout << "Please enter all dimensions in feet." << endl;
                cout << "Enter the length of the crate: ";
                cin >> length;
                cout << "Enter the width of the crate: ";
                cin >> width;
                cout << "Enter the height of the crate: ";
                cin >> height;

                volume = length*width*height;

                cout << "Does your crate need a lid? (y/n) " << endl;
                cin >> y_n;
                if (y_n == 'y')
                {
                cost = costWood*volume;
                charge = chargeWood*volume;
                profit = charge-cost;

                cout << "The crate has a volume of " << volume << " cubic feet. " << endl;
                cout << "The cost to build it is: $ " << cost << endl;
                cout << "The charge to the customer is: $ " << charge << endl;
                cout << "Our profit is: $" << profit << endl;
                }
                if (y_n == 'n')
                {

                cost = costWood*((5/6)*volume);
                charge =chargeWood*((5/6)*volume);
                profit = charge-cost;

                cout << "The crate has a volume of " << volume << " cubic feet." << endl;
                cout << "The cost to build it is: $ " << cost << endl;
                cout << "The charge to the customer is: $ " << charge << endl;
                cout << "Our profit is: $ " << profit << endl;
                }
        }


        if (w_c_m == 'c')
        {

                cout << "You chose a cardboard crate." << endl;
                cout << "Please enter all dimensions in feet." << endl;
                cout << "Enter the length of the crate: ";
                cin >> length;
                cout << "Enter the width of the crate: ";
                cin >> width;
                cout << "Enter the height of the crate: ";
                cin >> height;

                volume = length*width*height;

                cout << "Does your crate need a lid? (y/n) " << endl;
                if (y_n == 'y')
                {

                cost = costCardboard*volume;
                charge = chargeCardboard*volume;
                profit = charge-cost;

                cout << "The crate has a volume of " << volume << " cubic feet." << endl;
                cout << "The cost to build it is: $ " << cost << endl;
                cout << "The charge to the customer is: $ " << charge << endl;
                cout << "Our profit is: $ " << profit << endl;
                }
                if (y_n == 'n')
                {

                cost = costCardboard*((5/6)*volume);
                charge = chargeCardboard*((5/6)*volume);
                profit = charge-cost;

                cout << "The crate has a volume of " << volume << " cubic feet." << endl;
                cout << "The cost to build it is: $ " << cost << endl;
                cout << "The charge to the customer is: $ " << charge << endl;
                cout << "Our profit is: $ " << profit << endl;
                }
        }
        return 0;
}
