//courseID:CIS265-002HY
//name: Nihar Patel
//Prof. Wang
//Assignment#3
//Due by 02/08/2015

/* 
steps
1. Input:
   a.stay
   b.number of days
   c.total in
   d.total out
   e.lab
   f.medication
   g.rate per day
2. Processing
   a.totalCharges=(days*roomRate) + services + medication
   b.totalCharges= services + medication
3. Output
   a. sales
   b. totalCharges
   c. totalIn
   d. totalOut
   e. days
   f. service
   g. medication
   h. room rates
   
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
char getChoice();
double patientCharges(int, double, double, double); // In-patient
double patientCharges(double, double);			   	 // Out-patient

int main()
{
	char patientType;	          // I=in-patient, O=out-patient
	int  days;						 // Number of days of hospital stay
	double roomRate,	          // Daily room rate
		medication,          // Total medication charges
		services,            // Total for tests and other services
		totalCharges;	       // Total of all charges

	// Input and validate patient type
	cout << "This program will compute patient hospital charges.\n";
	cout << "Enter I for in-patient or O for out-patient: ";
	patientType=getChoice();


	//Process the menu selection
	switch (patientType)
	{
		//Inpatient
	case 'I':
	case 'i':	cout << " Enter the number of days spent in the hospital: " << endl;
		cin >> days;
		cout << "Enter the daily rate: " << endl;
		cin >> roomRate;
		cout << "Enter the charges for hospital service: " << endl;
		cin >> services;
		cout << " Enter the hospital medicaion charges; " << endl;
		cin >> medication;
		cout << patientCharges (days, roomRate, services, medication) << endl;
		totalCharges=(days*roomRate) + services + medication;
		break;

		//Outpatient
	case 'O':																
	case 'o':	cout << "Charges for hospital services: ";
		cin >> services;
		cout << "Hospital medication charges: ";
		cin >> medication;
		cout << patientCharges (services, medication) << endl;
		totalCharges= services + medication;
	}


	// Display the billing statment
	cout << fixed << showpoint << setprecision(2) << endl << endl;
	cout << "******************************\n";
	if (patientType == 'I' || patientType == 'i')
		cout << "Room charges    $" << setw(8) << days*roomRate << endl;
	if (services > 0.0)
		cout << "Lab & Services  $" << setw(8) << services << endl;
	if (medication > 0.0)
		cout << "Medication      $" << setw(8) << medication << endl;
	cout    << "Total charges   $" << setw(8) << totalCharges << endl;
	cout << "******************************\n";


	system("pause");
	return 0;
}// End of main function

//***********************************************************
// Definition of function getChoice                         *
// Accepts and returns user's validated menu choice.        *
//***********************************************************
char getChoice()
{
	char letter;        // Holds user's letter choice

	// Get the user's choice
	cin >> letter;
	// Validate the choice
	while (letter != 'I' && letter != 'i' 
		&& letter != 'O' && letter != 'o')
	{	
		cout << "Enter I or O: ";
		cin  >> letter;
	}
	// Return the choice
	return letter;
}
/*************************************************************
                        patientCharge                      *
* This function is called by main to calculate and return   *
* total patient charges for in-patients                     *
*************************************************************/
double patientCharges(int days, double rate, double med, double serv)
{

	return (days*rate) + med + serv;

}// end overload function patientCharges

/*************************************************************
*                        patientCharge                      *
* This function is called by main to calculate and return   *
* total patient charges for out-patients                    *
*************************************************************/
double patientCharges(double med, double serv)
{
	return med + serv;

}// end overload function patientCharges
