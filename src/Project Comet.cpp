#include <iostream>
#include <iomanip>

using namespace std;

//===================================================//
//                     menu()                        //
//                 Input = None                      //
//                 Output = Show Menu                //
//                                                   //
// This Function will display the menu for the user  //
// to choose.                                        //
//===================================================//

void menu()
{
	cout << '\t' << '\t' << "Menu" << endl;
	
	cout << "1) Determinant Calculation" << endl;
	cout << "2) LU Factorization" << endl;
	cout << "3) Interpolation" << endl;
	cout << "4) Exit" << endl;
	
	cout << endl;
	cout << "Input Option : ";
}

//===================================================//
//                   calc2x2()                       //
//                 Input = None                      //
//                 Output = Calculate 2x2 Matrix     // 
//                          Determinant & Display    //
//                          them                     //
//                                                   //
// This Function will calculate the determinant of a //
// 2x2 Matrix and display the value of the           //
// calculation on the screen.                        //
//===================================================//

void calc2x2()
{
	double num[4]; // Variable for Matrix Index
	double det; // Variable for Determinant
	
	cout << endl;
	cout << "===========================" << endl;
	cout << "Calculating 2x2 Determinant" << endl;
	cout << "===========================" << endl << endl;
	
	cout << "[a b]" << endl;
	cout << "[c d]" << endl << endl;
	
	cout << "Example Input :" << endl;
	cout << "1 2" << endl;
	cout << "3 4" << endl;
	
	cout << endl << endl << "Please input the number based on the example above";
	cout << " (Ignore the [], Number can be Integer or Fraction) : " << endl;
	cin >> num[0] >> num[1];
	cin >> num[2] >> num[3];
	cout << endl;
	
	det = ((num[0]*num[3]) - (num[1]*num[2])); // Calculating 2x2 Determinant Matrix
	
	cout << endl << left;
	cout << "Matrix : " << setw(2) << "[" << setw(3) << num[0] << "  " << setw(2) << num[1] << setw(2) << "]" << endl;
	cout << "         " << setw(2) << "[" << setw(3) << num[2] << "  " << setw(2) << num[3] << setw(2) << "]" << endl << endl;
	
	cout << "Determinant = " << det << endl << endl; // Displaying Determinant
}

//===================================================//
//                   calc3x3()                       //
//                 Input = None                      //
//                 Output = Calculate 3x3 Matrix     // 
//                          Determinant & Display    //
//                          them                     //
//                                                   //
// This Function will calculate the determinant of a //
// 3x3 Matrix and display the value of the           //
// calculation on the screen.                        //
//===================================================//

void calc3x3()
{
	double num[9]; // Variable for Matrix Index
	double det; // Variable for Determinant
	
	cout << endl;
	cout << "===========================" << endl;
	cout << "Calculating 3x3 Determinant" << endl;
	cout << "===========================" << endl << endl;
	
	cout << "[a b c]" << endl;
	cout << "[d e f]" << endl;
	cout << "[g h i]" << endl << endl;
	
	cout << "Example Input :" << endl;
	cout << "1 2 3" << endl;
	cout << "4 5 6" << endl;
	cout << "7 8 9" << endl;
	
	cout << endl << endl << "Please input the number based on the example above";
	cout << " (Ignore the [], Number can be Integer or Fraction) : " << endl;
	cin >> num[0] >> num[1] >> num[2];
	cin >> num[3] >> num[4] >> num[5];
	cin >> num[6] >> num[7] >> num[8];
	cout << endl;
	
	det =  ( (num[0] * ((num[4]*num[8]) - (num[5]*num[7]))) - (num[1] * ((num[3]*num[8]) - (num[5]*num[6]))) + (num[2] * ((num[3]*num[7]) - (num[4]*num[6]))) ); // Calculating 3x3 Determinant Matrix
	
	cout << endl << left;
	cout << "Matrix : " << setw(2) << "[" << setw(3) << num[0] << "  " << setw(3) << num[1] << "  " << setw(3) << num[2] << setw(2) << "]" << endl;
	cout << "         " << setw(2) << "[" << setw(3) << num[3] << "  " << setw(3) << num[4] << "  " << setw(3) << num[5] << setw(2) << "]" << endl;
	cout << "         " << setw(2) << "[" << setw(3) << num[6] << "  " << setw(3) << num[7] << "  " << setw(3) << num[8] << setw(2) << "]" << endl << endl;
		
	cout << "Determinant = " << det << endl << endl; // Displaying Determinant
}

//===================================================//
//                determinantCalc()                  //
//                 Input = None                      //
//                 Output = Show Menu for Determinant// 
//                          Calculation              //
//                                                   //
// This Function will display the menu for the user  //
// to choose which Determinant Calculation they want //
// the program to calculate.                         //
//===================================================//

void determinantCalc()
{
	int choice; // Variable for Choice

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "  Determinant Calculation  " << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
	
	cout << "1. 2x2" << endl;
	cout << "2. 3x3" << endl << endl;
	
	cout << "Choose the Dimensions : ";
	cin >> choice; // User Input for Choice
	cout << endl;
	
	//------------------------------------------//
	//               Switch Case                //
	//                                          //
	// This Switch Case will take the user to   //
	// their desired choice, and will show error//
	// if the user input choice other than      //
	// what is provided.                        //
	//------------------------------------------//
	
	switch (choice)
	{
		case 1 :
			calc2x2(); // Calling Function calc2x2
			break;
		case 2 :
			calc3x3(); // Calling Function calc3x3
			break;
		default :
			cout << "Input Not Recogized" << endl;
			system("pause"); // Pausing the Program
			break;
	}	
}

int main ()
{
	int choice; // Variable for Choice
	
	//------------------------------------------//
	//               Do While Loop              //
	//                                          //
	// This Do While Loop will show the main    //
	// menu and redirect user to their desired  //
	// choice untill the user input 4, then the //
	// program will terminate.                  //
	//------------------------------------------//
	
	do
	{
		system("cls"); // Clear The Screen
		menu(); // Calling Function Menu
		cin >> choice; // User Input for Choice
		cout << endl;
		
		//------------------------------------------//
		//               Switch Case                //
		//                                          //
		// This Switch Case will take the user to   //
		// their desired choice, and will show error//
		// if the user input choice other than      //
		// what is provided.                        //
		//------------------------------------------//
		
		switch (choice)
		{
			case 1 :
				determinantCalc(); // Calling Function determinantCalc
				system("pause"); // Pausing the Program
				break;
			case 2 :
				cout << "FACTORIZATING LU!!!" << endl << endl; // JUST TEMPORARY, DELETE AFTER THE FUNCITON WORKING COMPLETELY
				// factorLU(); // Calling Function factorLU
				system("pause"); // Pausing the Program
				break;
			case 3 :
				cout << "INTERPOLATION!!!" << endl << endl; // JUST TEMPORARY, DELETE AFTER THE FUNCITON WORKING COMPLETELY
				// interpolation(); // Calling Function interpolation
				system("pause"); // Pausing the Program
				break;
				
			//------------------------------------------//
			//               Exit Case                  //
			//                                          //
			// If the user choose this case, then the   //
			// program will display a thank you message //
			// and then it will terminate.              //
			//------------------------------------------//
			
			case 4 :
				cout << "Thank you for using this Program. ^_^" << endl;
				cout << "Exiting Program..." << endl;
				exit(1); // Exit the Program;
			default :
				cout << "Input Not Recognized!!!" << endl << endl;
				system("pause"); // Pausing the Program
		}
	} while (choice != 4);
	
	return 0;
}
