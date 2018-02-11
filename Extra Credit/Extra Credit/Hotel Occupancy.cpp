//courseID:CIS265-00HY
//name: Nihar Patel
//Prof. Wang
//Assignment#1
//Due by 02/01/2015

/* 
steps
1. Input:
   a.floor
   b.total rooms
   c.occupied rooms
   d.total floors
   e.total occupied rooms
   f.percent occupied
2. Processing:
   a. percentOccupied = (totalOccupiedRooms * 1.0 / totalRooms) * 100.00
   b. total rooms - total occupied
3. Output
   a. percent occupied
   b. total floors
   c. total rooms
   d. total occupied rooms
   e. total empty rooms
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int floor = 0;
	int totalRooms = 0;
	int totalFloors = 0;
	int occupiedRooms = 0;
	int totalOccupiedRooms = 0;
	double percentOccupied = 0;

	cout << "Enter numbers of floors: ";
	cin >> totalFloors;

	while (totalFloors < 1)
	{
		cout << "The numbers of floors must be greater than 0. ";
		cin >> totalFloors;
	}

	for(int i = 1; i <= totalFloors; i++)
	{
		if (i != 13)
		{
			cout << "Enter the number of rooms: ";
			cin >> floor;

			while(floor < 10)
			{
				cout << "The numbers of rooms on floor must be greater than 10. ";
				cin >> floor;
			}
		
            cout << "Enter the rooms are occupied: ";
		    cin >> occupiedRooms;
	    }
	
		totalRooms += floor;
		totalOccupiedRooms += occupiedRooms;
	}

	percentOccupied = (totalOccupiedRooms * 1.0 / totalRooms) * 100.00;

	cout << "The hotel has the total of " << totalFloors << " floors\n";
	cout << "The hotel has the total of " << totalRooms << " rooms\n";
	cout << "There are " <<  totalOccupiedRooms << " rooms occupied\n";
	cout << "There are " << totalRooms - totalOccupiedRooms << " empty rooms\n";
	cout << "Percentage of occupied rooms is " << setprecision(2) << fixed << percentOccupied << "% \n";

	system("pause");
	return 0;
}