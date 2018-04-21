//============================================================================
// Name        : Ch9_Ex01.cpp
// Author      : Justin Hurley
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayListType.h"
using namespace std;


//lower level function prototype
void printListInfo(arrayListType<int>& passedList);

// object instantiation
				arrayListType<int> myIntList;

int main()
{


				//declare the variables
				int userInput = 0;
				int numLocation = 0;
			


			cout << "WELCOME TO THE ARRAY POSITION FINDER";
			cout << endl << endl;

			cout << "Enter integer values (-999 to Quit): " << endl;
			cin >> userInput;
			while ( userInput != -999)
			{

				myIntList.insert( userInput);
				cin >> userInput;

			}

				printListInfo(myIntList);
				cout << endl << endl;

				cout << "What number in the list do you want to search for? ";
				cin >> userInput;
				numLocation = myIntList.recSeqSearchImp(userInput);
				cout << numLocation << endl;
				if (numLocation != -1)
				{
					cout << userInput << " was found in position " << numLocation  << " of the list.";
				}
				else
				{
					cout << userInput + " was not found in the list....";
				}
				cout << endl << endl ;
				cout << "End of Program.";
return 0;


}
void printListInfo(arrayListType<int>& passedList)
{
	int size = passedList.listSize();
	cout << endl;
	cout << "The list you entered --- > " ;
	passedList.print();
	cout << endl << "List Size is: " << size;




}


































