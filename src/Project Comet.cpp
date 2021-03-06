#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>

using namespace std;

//===================================================//
//                     boot()                        //
//                 Input = None                      //
//                 Output = Show Boot Screen         //
//                                                   //
// This Function will display the boot screen        //
//===================================================//

void boot()
{
	cout << "       _                               _   _____           _                                   _       " << endl;
	cout << "      | |                             | | |_   _|         | |                                 | |      " << endl;
	cout << "      | | ___  _ __   __ _  __ _  ___ | |   | |  _ __  ___| |_ _ __ _   _ _ __ ___   ___ _ __ | |_ ___ " << endl;
	cout << "  _   | |/ _ \\| '_ \\ / _` |/ _` |/ _ \\| |   | | | '_ \\/ __| __| '__| | | | '_ ` _ \\ / _ \\ '_ \\| __/ __|" << endl;
	cout << " | |__| | (_) | | | | (_| | (_| | (_) | |  _| |_| | | \\__ \\ |_| |  | |_| | | | | | |  __/ | | | |_\\__ \\" << endl;
	cout << "  \\____/ \\___/|_| |_|\\__, |\\__, |\\___/|_| |_____|_| |_|___/\\__|_|   \\__,_|_| |_| |_|\\___|_| |_|\\__|___/" << endl;
	cout << "                      __/ | __/ |                                                                      " << endl;
	cout << "                     |___/ |___/                                                                       " << endl;
}

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
	cout << " (Ignore the [], Number can be Integer or Decimal) : " << endl;
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
	cout << " (Ignore the [], Number can be Integer or Decimal) : " << endl;
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
//                 Output = Upper LU triangle        //
//							Lower LU triangle        //
//							y-value                  //
//							x-value                  //
//                                                   //
// This function will calculate the x-value          //
// using Doolittle Algorithm                         //
//===================================================//

void factorLU()
{
	const int n = 3;
	double matrix[n][n];
    double b[n];
	double lower[n][n];
	double upper[n][n];

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "     LU Factorization      " << endl;
	cout << "    Doolittle Algorithm    " << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;

	cout << " a.x1 + b.x2 + c.x3 = d\n"
		 << " e.x1 + f.x2 + g.x3 = h\n"
		 << " i.x1 + j.x2 + k.x3 = l\n\n";

	cout << "Example Input :" << endl
		 << " 1  2  3  4" << endl
		 << " 5  6  7  8" << endl
		 << " 9 10 11 12" << endl;
	
	cout << endl << endl << "Please input the number based on the example above"
		 <<" (Number can be Integer or Decimal):" << endl;

	cin >> matrix[0][0];
	cin >> matrix[0][1];
	cin >> matrix[0][2];
	cin >> b[0];
	cin >> matrix[1][0];
	cin >> matrix[1][1];
	cin >> matrix[1][2];
	cin >> b[1];
	cin >> matrix[2][0];
	cin >> matrix[2][1];		 
	cin >> matrix[2][2];
	cin >> b[2];

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
    
	//print lower and upper triangular
    cout << endl << endl << right << setw(6) << "   Lower Triangular"
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

	//finding y and x
    double y[n];
    y[0] = lower[0][0] * b[0];
    y[1] = b[1] - (lower[1][0] * y[0]);
    y[2] = b[2] - (lower[2][0] * y[0]) - (lower[2][1] * y[1]);
	cout << "\n";
    cout << " y: [" << y[0] << " " << y[1] << " " << y[2] << "]\n"; //y check

	double x[n];
	x[2] = y[2] / upper[2][2];
	x[1] = (y[1] - (upper[1][2] * x[2])) / upper[1][1];
    x[0] = (y[0] - (upper[0][1] * x[1]) - (upper[0][2] * x[2])) / upper[0][0];
	cout << "\n";
    cout << " x: [" << x[0] << " " << x[1] << " " << x[2] << "]\n"; //x check
	cout << "\n";
}

void interpolation()
{
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "       Interpolation       " << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
	
	cout << "The format will be like this:" << endl;
	cout << "X| a, b, c, d" << endl;
	cout << "Y| a, b, c, d" << endl;
	
	int n;
	double x[7];
	double y[7];
	double xi;
	double m[3][4] = {};
	double b;
	
	double s[5] = {};
	double a[3] = {};
	double v[3] = {};
	
	cout << "Enter data count(Max. 7) = ";
	cin >> n;

	cout << "Enter x values =" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	
	cout << "Enter y values =" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
	}
	
	cout << "Enter Xi value = ";
	cin >> xi;
	
	//cout << "Input Xi = ";
	//cin >> xi;
	
	for(int i = 0; i < 5; i++)  // Calculate X Values
	{
		for(int j = 0; j < n; j++)
		{
			s[i] += pow(x[j], i);
		}
	}

	for(int i = 0; i < 3; i++) // Calculate Y Values
	{
		for(int j = 0; j < n; j++)
		{
			v[i] += pow(x[j], i) * y[j];
		}
	}
	
	//Matrix form
	cout << "\nMatrix" << endl;
	m[0][0] = s[0];
	m[0][1] = s[1];
	m[0][2] = s[2]; 
	m[1][0] = s[1]; 
	m[1][1] = s[2];
	m[1][2] = s[3];
	m[2][0] = s[2];
	m[2][1] = s[3]; 
	m[2][2] = s[4];
	m[0][3] = v[0];
	m[1][3] = v[1];
	m[2][3] = v[2];	
	
	for (int i = 0; i < 3; i++)            //print the new matrix
    {
        for (int j = 0; j <= 3; j++)
        {
            cout << left << setw(16) << m[i][j];
    	}
    	cout << endl;
    }   
    cout << endl;
    
	m[0][1] = m[0][1] / m[0][0];
	m[0][2] = m[0][2] / m[0][0];
	m[0][3] = m[0][3] / m[0][0];
	m[0][0] = m[0][0] / m[0][0];
	
	// Loop to perform the gauss elimination
	for (int i = 0; i < 3-1; i++)
	{           
        for (int k = i+1; k < 3; k++)
            {
                double t = m[k][i] / m[i][i];
                for (int j = 0 ; j < 4; j++)
                {
            		m[k][j] = m[k][j] - t * m[i][j]; // Make the elements below the pivot elements equal to zero or elimnate the variables
				}   
            }
	}
	
	for (int i = 0; i < 3; i++)            //print the new matrix
    {
        for (int j = 0; j <= 3; j++)
        {
            cout << left << setw(16) << m[i][j];
    	}
    	cout << endl;
    }
    cout << endl;
    
    a[2] = m[2][3] / m[2][2];
	a[1] = (m[1][3] - (m[1][2] * a[2])) / m[1][1];
	a[0] = (m[0][3] - (m[0][1] * a[1]) - (m[0][2] * a[2])) / m[0][0];
	
    cout << "The values of the variables are as follows:" << endl;
    cout << "P(x) = " << a[2] << ".x^2" << " + " << a[1] << ".x" << " + " << a[0] << endl;
    
    // Xi calculations
    b = (a[2] * pow(xi, 2)) + (a[1] * xi) + a[0];
    cout << "P(" << xi << ") = " << b << endl; 
}

int main ()
{
	int choice; // Variable for Choice
	boot();
	Sleep(5000);
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
		Sleep(1000);
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
				factorLU(); // Calling Function factorLU
				system("pause"); // Pausing the Program
				break;
			case 3 :
				interpolation(); // Calling Function interpolation
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
				break; // Exit the Program;
			default :
				cout << "Input Not Recognized!!!" << endl << endl;
				system("pause"); // Pausing the Program
		}
	} while (choice != 4);
	
	cout << "\n";
	system("pause");
	return 0;
}
