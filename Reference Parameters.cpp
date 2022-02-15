// Reference Parameters
// - I CAN explain and use reference parameters

#include <iostream>
using namespace std;

//** Functions start here **

void purchaseTickets(int qty, int cost) {
	while (true) {
		//Ask user if they want to buy something else
		cout << "Buy a raffle ticket for $5.00? ";
		string answer;
		cin >> answer;
		if (answer == "yes") {
			qty++;
			cost = cost + 5;
		}
		else {
			break;
		}
	}
}

void circleArea(int radius, double area) {
	area = 3.14 * pow(radius, 2);
}

//** Functions end here **


void main()
{
	int qty = 0;
	int cost = 0;
	
	cout << "You bought " << qty << " totalling $" << cost << endl;

	//Reference parameters (denoted by & in the function) give the function
	//permission to modify the parameters
	//When we DON'T use reference parameters, the function is working on
	//copies, so changing parameters has no effect on the original values

	//Problem 4.6 (See canvas for instructions)
	int r, double a;
	cout << "Please enter the radius of your circle: ";
	cin >> r;
	circleArea(r, a);
	cout << "The area of a circle with radius " << r << " is " << a << endl;


	// Problem 4.7 (See Canvas for instructions)
	int minRange = 0, maxRange = 0, age = 0;
	cout << "Please enter your age: ";
	cin >> age;
	//write your function above and call it here
	cout << "The target aerobic range is " << minRange << "-" << maxRange << "BPM" << endl;




	system("pause");
}