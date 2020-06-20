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
