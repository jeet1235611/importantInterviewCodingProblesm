#include <iostream>
using namespace std;

int main() {
	int n, m, arr[100][100];
	cout << "Enter the value of n: " << endl;
	cin >> n;
	cout << "Enter the value of m: " << endl;
	cin >> m;

	//Input the matrix.
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j ++){
			cin >> arr[i][j];
		}
	}

	//Print the matrix.
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}
	
	cout << endl;

	int topRow = 0, bottomRow = n-1, leftColumn = 0, rightColumn = m-1;
	//Spiral Print.
	
	while(topRow <= bottomRow || leftColumn << rightColumn){
		//Top row print.
		for(int i = topRow; i <= rightColumn; i++)
			cout << arr[topRow][i] << " ";
		topRow++;
		
		//right Column print.
		for(int i = topRow; i <= bottomRow; i++)
			cout << arr[i][rightColumn] << " ";
		rightColumn--;

		//bottom row.
		for(int i = rightColumn; i >= leftColumn; i--)
			cout << arr[bottomRow][i] << " ";
		bottomRow--;

		//left Column.
		for(int i = bottomRow; i >= topRow; i--)
			cout << arr[i][leftColumn] << " ";
		leftColumn++;
	}

	cout << endl;
}
