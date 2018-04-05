#include<iostream>
#include<string>
using namespace std;

int main() {
	
	

	int rows, col;
	cout << "How many rows?";
	cin >> rows;
	int *rowCnt = new int[rows];

	string **ary = new string*[rows];

	//set rows and columns
	for (int i = 0; i < rows; i++) {
		cout << "How many computers in row " << i + 1 << "?\n";
		int temp;
		cin >> temp;
		rowCnt[i] = temp;
		
		for (int ii = 0; ii < rowCnt[i]; ++ii) {
			ary[ii] = new string[rowCnt[i]];
		}

	}
	
	//sets all to empty
	for (int i = 0; i < rows; i++) {
		for (int ii = 0; ii < rowCnt[i]; ii++) {
			 ary[i][ii] = "empty";
		}
	}
	//outputs array
	for (int i = 0; i < rows; i++) {
		for (int ii = 0; ii < rowCnt[i]; ii++) {
			cout << ary[i][ii] << " ";
		}
		cout << endl;
	}

	//edit in array
	char go = 'y';
	while(go = 'y')
		
		
		if (go = 'y') {
			int gradeRow, gradePC, grade;
			cout << "Whose grade would you like to change? row computer ie (4 6)";
			cin >> gradeRow >> gradePC;
			gradeRow -= 1;
			gradePC -= 1;
			/*if (gradeRow < 1 || gradeRow >  || gradePC < 0 || gradePC > 10) {
				cout << "Those coordinates are invalid\n";
			}*/
			cout << "What is this persons grade?";
			cin >> grade;
			
			ary[gradeRow][gradePC] = grade;

			//outputs array
			for (int i = 0; i < rows; i++) {
				for (int ii = 0; ii < rowCnt[i]; ii++) {
					cout << ary[i][ii] << " ";
				}
				cout << endl;

				
			}
			cout << "input new grade? 'y'\n";
			cin >> go;
		}



	//delete
	/*for (int i = 0; i < rows; i++) {
		for (int ii = 0; ii < rowCnt[i]; ii++) {
			delete[i] ary[ii];
		}
		delete[i] ary;

	}*/



	return 0;
}

