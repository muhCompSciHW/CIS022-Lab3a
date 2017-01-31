/* Module: CIS022 -3A
   Project: Create a Visual C++ program that collects input and produces a formatted output.
   Developer: Morgan Shorter-McFarlane
   Date: Jan 31, 2017
   Purpose: To capture input text from the console using the string data type.Format the input data for display.
		Align the output data for clarity. Sooper cool.

*/


#include "stdafx.h" //include standard lib header

#include <iostream> //include IO lib
#include <iomanip>  //include input/ouput manipulation tools lib
#include <string>   //include the string lib

using namespace std; //use the standard C++ namespace

int main() //define the main function. make it return an integer.
{

	//declare string variables to store user input
	string muhName;    // declare string variable for the name
	string muhStreet;  // string variable for the street address
	string muhCity;    // declare string var for the city
	string muhState;   // state
	string muhZip;     // zip
	string a = "\n|  ";          //I wanted to reduce the amount of times I have to type the margins. Just a matter of convenience

	cout << "gimMeh yo name!  "; //prompt the user for their name
	getline(cin, muhName); //collect an input string and assign its value to the muhName variable
	cout << endl; //move the cursor down one line

	//prompt the user for for a street address. store their input in a string var. move down one line
	cout << "What is your street address?????  ";
	getline(cin, muhStreet);
	cout << endl;
	
	//prompt the user for for a City name. store their input in a string var. move down one line
	cout << "Insert your city...slowly:  ";
	getline(cin, muhCity);
	cout << endl;
	
	//prompt the user for for a State abrreviation. store their input in a string var. move down one line
	cout << "Input your state's two letter abbreviation. Incorrect answers will be sent to the FBI.  ";
	getline(cin, muhState);
	cout << endl;
	
	//prompt the user for for a zipcode. store their input in a string var. move down one line
	cout << "Tell me your zipcode...I promise I wont buy stuff with your card.  ";
	getline(cin, muhZip);
	cout << endl;

	cout << endl << endl; //insert some blank lines

	// Output the text collected abouve with some neat formatting tricks. 
	cout << "______________________________________" << a << muhName << a << muhStreet << a << muhCity << ", " << muhState << " " << muhZip << endl << endl << "Transmitting data to NSA. Please wait....\n\n";

	system("Pause");  //wait for it....
	return 0;  //send that zero back up the call stack!
}
