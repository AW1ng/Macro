#include <iostream>
using namespace std;


#define MONDAY "Monday"
#define TUESDAY "Tuesday"
#define WEDNESDAY "Wednesday"
#define THURSDAY "Thursday"
#define FRIDAY "Friday"
#define SATURDAY "Saturday"
#define SUNDAY "Sunday"


void DayToStr( int day ) {
	if (day == 1) cout << MONDAY;
	else if( day == 2) cout << TUESDAY;
	else if( day == 3) cout << WEDNESDAY;
	else if( day == 4) cout << THURSDAY;
	else if( day == 5) cout << FRIDAY;
	else if( day == 6) cout << SATURDAY;
	else if( day == 7) cout << SUNDAY;
} 

int main() {
	int day;
	cout << "Enter day of the week(1 - 7)\n";
	cin >> day;
	DayToStr(day);
}