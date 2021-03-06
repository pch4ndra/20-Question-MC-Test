// 20 Question MC Test.cpp
// PRANAV CHANDRA

// imports
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "windows.h"


using namespace std;


// variables
int score;
const int AnsReportSpacing = 20, ROWS = 20, COLS = 3;


// arrays
char TestAnswersCaps[] = "CDABCABCDADABCDCABBC";
char TestAnswersLows[] = "cdabcabcdadabcdcabbc";
char TestInput[] = "these are inputs";
char AnsReport[ROWS][COLS];


// color function
void SetColor(int value) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}
// COLOR CODES
/*
0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/

// test infrastructure functions
	// introduces the test
void Introduction() {
	cout << "Welcome to the Test.\n";
	cout << "This Test was created by Pranav Chandra.\n";
	cout << "You need 15 correct answers to pass.\n";
	cout << "The answers are NOT case sensitive.\n";
	cout << "Good Luck!\n";
	cout << "_______________________________________________\n";
	system("pause");
	system("cls");
}
	// holds the questions
int QuestionPicker(int QuestionChoice) {
	switch (QuestionChoice) {
		case 1: cout <<
				"What is the capital of the US state New Hampshire?\n" <<
				"A. Dover\nB. Hartford\nC. Concord\nD. Annapolis\n";
				break;
		case 2: cout <<
				"How many carbon atoms are there in an aspirin molecule?\n" <<
				"A. 10\nB. 11\nC. 8\nD. 9\n";
				break;
		case 3: cout <<
				"What is the chemical symbol for iron?\n" <<
				"A. Fe\nB. Ir\nC. Ti\nD. I\n";
				break;
		case 4: cout <<
				"What year did the Mau Mau Uprising end?\n" <<
				"A. 1955\nB. 1960\nC. 1962\nD. 1969\n";
				break;
		case 5: cout <<
				"What is a \"Sam Browne\"?\n" <<
				"A. Brownie\nB. Gun\nC. Military Belt\nD. Nickname for \"Uncle Sam\"\n";
				break;
		case 6: cout <<
				"An onomastician studies what?\n" <<
				"A. Names\nB. World Languages\nC. Eyes\nD. Politics\n";
				break;
		case 7: cout <<
				"When was the White House destroyed by fire in the War of 1812?\n" <<
				"A. 1813\nB. 1814\nC. 1812\nD. 1815\n";
				break;
		case 8: cout <<
				"What sea lies between Greece and Turkey?\n" <<
				"A. Black Sea\nB. Mediterranean Sea\nC. Aegean Sea\nD. Red Sea\n";
				break;
		case 9: cout <<
				"Which modern instrument was called the sackbut until the nineteenth century?\n" <<
				"A. Tuba\nB. Saxaphone\nC. Trumpet\nD. Trombone\n";
				break;
		case 10: cout <<
				"Which is the only body cell with no nucleus?\n" <<
				"A. Red Blood Cell\nB. White Blood Cells\nC. Platelets\nD. Nerve Cells\n";
				 break;
		case 11: cout <<
				"What year was the Hubble telescope launched into orbit?\n" <<
				"A. 1991\nB. 1992\nC. 1989\nD. 1990\n";
				 break;
		case 12: cout <<
				"How many US States begin with the letter \"O\"?\n" <<
				"A. 3\nB. 2\nC. 5\nD. 4\n";
				 break;
		case 13: cout <<
				"What is the warmest continent?\n" <<
				"A. Asia\nB. Africa\nC. Europe\nD. South America\n";
				 break;
		case 14: cout <<
				"What country is home to more species of primates, amphibians, and plants than any other in the world?\n" <<
				"A. China\nB. Colombia\nC. Brazil\nD. Indonesia\n";
				 break;
		case 15: cout <<
				"What element of the periodic table is named for a Jewish woman?\n" <<
				"A. Promethium\nB. Ytterbium\nC. Samarium\nD. Meitnerium\n";
				 break;
		case 16: cout <<
				"What was the true name of ship known by the nickname Old Ironsides that fought in the War of 1812?\n" <<
				"A. HMS Macedonian\nB. USS Hornet\nC. USS Constitution\nD. HMS Detroit\n";
				 break;
		case 17: cout <<
				"What day did Barack Obama assume office as the 44th President of the United States??\n" <<
				"A. January 20, 2009\nB. January 20, 2005\nC. January 20, 2013\nD. January 20, 2017\n";
				 break;
		case 18: cout <<
				"What date is inscribed in the tablet held by the Statue of Liberty?\n" <<
				"A. December 25, 1776\nB. July 4, 1776\nC. November 2, 1772\nD. September 3, 1783\n";
				 break;
		case 19: cout <<
				"India became a republic in what year?\n" <<
				"A. 1971\nB. 1950\nC. 1947\nD. 1952\n";
				 break;
		case 20: cout <<
				"Who was \"The Wizard of Menlo Park\"?\n" <<
				"A. Alexander Graham Bell\nB. Nikola Tesla\nC. Thomas Edison\nD. Edwin J. Houston\n";
				 break;
	}
	return 0;
}
	// asks for user entries IN THE DOMAIN
void AnsEntry() {
	for (int a = 0; a <= 19; a++) {
		cout << a + 1 << ". ";
		QuestionPicker(a + 1);
		cout << "-----------------------------------\n" << "Your Answer: ";
		cin >> TestInput[a];
		while ((TestInput[a] != 'A') && (TestInput[a] != 'a') &&
			(TestInput[a] != 'B') && (TestInput[a] != 'b') &&
			(TestInput[a] != 'C') && (TestInput[a] != 'c') &&
			(TestInput[a] != 'D') && (TestInput[a] != 'd')) {
			cout << "Invalid Input. " << a + 1 << ": ";
			cin >> TestInput[a];
			if ((TestInput[a] == 'A') || (TestInput[a] == 'a') ||
				(TestInput[a] == 'B') || (TestInput[a] == 'b') ||
				(TestInput[a] == 'C') || (TestInput[a] == 'c') ||
				(TestInput[a] == 'D') || (TestInput[a] == 'd')) {
				break;
			}
		}
		system("cls");
	}
}
	// calculates the score
void FindScore() {
	for (int b = 0; b <= 19; b++) {
		if ((TestInput[b] == TestAnswersCaps[b]) || (TestInput[b] == TestAnswersLows[b])) {
			score++;
		}
	}

	if (score >= 15) {
		cout << "Congratulations! You passed!\n";
		cout << "Score: " << score << " out of 20\n\n";
	}
	else if (score < 15) {
		cout << "Good Try. Better luck next time.\n";
		cout << "Score: " << score << " out of 20\n\n";
	}
}
	// prints answer report and questions
void PrintAnsReport() {
	cout << "\a" <<
		setw(AnsReportSpacing) << "Question Number" <<
		setw(AnsReportSpacing) << "Your Answer" <<
		setw(AnsReportSpacing) << "Correct Answer" <<
		setw(AnsReportSpacing) << "Correct?" <<
		endl;

	for (int c = 0; c <= 19; c++) {
		AnsReport[c][0] = TestInput[c];
		AnsReport[c][1] = TestAnswersCaps[c];
		if ((TestInput[c] == TestAnswersCaps[c]) || (TestInput[c] == TestAnswersLows[c])) {
			SetColor(10);
			AnsReport[c][2] = 'Y';
		}
		else if ((TestInput[c] != TestAnswersCaps[c]) && (TestInput[c] != TestAnswersLows[c])) {
			SetColor(12);
			AnsReport[c][2] = 'N';
		}

		cout <<
			setw(AnsReportSpacing) << c + 1 <<
			setw(AnsReportSpacing) << AnsReport[c][0] <<
			setw(AnsReportSpacing) << AnsReport[c][1] <<
			setw(AnsReportSpacing) << AnsReport[c][2] <<
			endl;
	}	

	SetColor(7);
	cout <<
		"___________________________________________________________________________________________________\n" <<
		"Questions: \n" <<
		"---------------\n";
	for (int e = 1; e <= 20; e++) {
		cout << e << ". ";
		QuestionPicker(e);
		cout << "------------------------\n" << endl;
	}
}


// main
int main() {
	Introduction();
	AnsEntry();
	FindScore();
	PrintAnsReport();
}


// end of file