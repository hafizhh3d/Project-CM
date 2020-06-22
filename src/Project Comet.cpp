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
//===================================================//
//                     factorLU()                    //
//                 Input = None                      //
//                 Output = ...                      //
//                                                   //
// Using Doolittle method                            //
// ...                                               //
//===================================================//

void factorLU()
{
	const int n = 3;
	double matrix[n][n] = {{1, 2, 1},
                        {3, 1, 1},
                        {1, 4, 2}};
    double b[n] = {8, 11, 14};
	double lower[n][n];
	double upper[n][n];

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "     LU Factorization      " << endl;
	cout << "    Doolittle Algorithm    " << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;

	cout << " Format: 3 variables, 3 equations\n\n"
		 << " ax1 + bx2 + cx3 = d\n"
		 << " ex1 + fx2 + gx3 = h\n"
		 << " ix1 + jx2 + kx3 = l\n\n";

	cout << "Input a: ";
	cin >> matrix[0][0];
	cout << "Input b: ";
	cin >> matrix[0][1];
	cout << "Input c: ";
	cin >> matrix[0][2];
	cout << "Input d: ";
	cin >> b[0];
	cout << "Input e: ";
	cin >> matrix[1][0];
	cout << "Input f: ";
	cin >> matrix[1][1];
	cout << "Input g: ";
	cin >> matrix[1][2];
	cout << "Input h: ";
	cin >> b[1];
	cout << "Input i: ";
	cin >> matrix[2][0];
	cout << "Input j: ";
	cin >> matrix[2][1];		 
	cout << "Input k: ";
	cin >> matrix[2][2];
	cout << "Input l: ";
	cin >> b[2];
	cout << "\n";

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            lower[i][j] = 0;
            upper[i][j] = 0;
        }
    }
    
	for(int i = 0; i < n; i-=-1)
	{
		//upper
		for(int k = i; k < n; ++k)
		{
			double sum = 0;
			for(int j = 0; j < i; ++j)
			{
				sum += lower[i][j] * upper[j][k];
			}
			upper[i][k] = matrix[i][k] - sum;
		}
		//lower
		for(int k = i; k < n; ++k)
		{
			if(i == k) { lower[i][i] = 1; }
			else
			{
				double sum = 0;
				for(int j = 0; j < i; ++j)
				{
					sum += lower[k][j] * upper[j][i];
				}
				lower[k][i] = (matrix[k][i] - sum) / upper[i][i];
			}
		}
	}
    
    cout << setw(6) << "   Lower Triangular"
         << setw(32) << "Upper Triangular\n";

    for(int i = 0; i < n; ++i)
    {
        //lower
        for(int j = 0; j < n; ++j)
        {
            cout << setw(6) << lower[i][j] << "\t";
        }
        cout << "\t";

        //upper
        for(int j = 0; j < n; ++j)
        {
            cout << setw(6) << upper[i][j] << "\t";
        }
        cout << "\n";
    }

    double y[n];
    y[0] = lower[0][0] * b[0];
    y[1] = b[1] - (lower[1][0] * y[0]);
    y[2] = b[2] - (lower[2][0] * y[0]) - (lower[2][1] * y[1]);
    cout << "y: " << y[0] << "\t" << y[1] << "\t" << y[2] << "\n\n"; //y check

	double x[n];
	x[2] = y[2] / upper[2][2];
	x[1] = (y[1] - (upper[1][2] * x[2])) / upper[1][1];
    x[0] = (y[0] - (upper[0][1] * x[1]) - (upper[0][2] * x[2])) / upper[0][0];
    cout << "x: " << x[0] << "\t" << x[1] << "\t" << x[2] << "\n\n"; //x check
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
				factorLU(); // Calling Function factorLU
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
	
	cout << "\n";
	system("pause");
	return 0;
}
