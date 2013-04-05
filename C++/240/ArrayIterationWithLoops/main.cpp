#include <iostream>
#include "main.h"
#include <cstdio> // for getchar()

int main()
{
	compare();
	calculateMaxWithLoop();
	testAccessOutOfBounds();
	
}
void testAccessOutOfBounds()
{
	using namespace std;
	int myArray[3] = {};
	cout << "Expected: Garbage. Actual: " << myArray[3] << endl;
	//YES, it compiles!!!
}
void calculateMaxWithLoop()
{
	using namespace std;
	// CALCULATING THE MAX OF SOMETHING
	const int nNumStudents = 5;
	int anScores[nNumStudents] = { 84, 92, 76, 81, 56 };
	int nMaxScore = 0;
	for (int nStudent = 0; nStudent < nNumStudents; nStudent++)
	    if (anScores[nStudent] > nMaxScore)
		nMaxScore = anScores[nStudent];
	 
	cout << "The best score was " << nMaxScore << endl;
}
void compare()
{
	using namespace std;
	{	
		//THIS:
		const int nNumStudents = 5;
		int nScore0 = 84;
		int nScore1 = 92;
		int nScore2 = 76;
		int nScore3 = 81;
		int nScore4 = 56;
		 
		int nTotalScore = nScore0 + nScore1 + nScore2 + nScore3 + nScore4;
		double dAverageScore = static_cast<double>(nTotalScore) / nNumStudents;
	}
	{
		//IS EQUIVALENT TO THIS:
		const int nNumStudents = 5;
		int anScores[nNumStudents] = { 84, 92, 76, 81, 56 };
		int nTotalScore = anScores[0] + anScores[1] + anScores[2] + anScores[3] + anScores[4];
		double dAverageScore = static_cast<double>(nTotalScore) / nNumStudents;
	}
	{
		//AND IS EQUIVALENT TO THIS:
		const int nNumStudents = 5;
		int anScores[nNumStudents] = { 84, 92, 76, 81, 56 };
		int nTotalScore = 0;
		for (int nStudent = 0; nStudent < nNumStudents; nStudent++)
		    nTotalScore += anScores[nStudent];
		 
		double dAverageScore = static_cast<double>(nTotalScore) / nNumStudents;
	}
}

