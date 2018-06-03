#include <iostream>
using namespace std;

int main() {
        int n, m, arr[100][100];
        cout << "Enter the value of n: " << endl;
        cin >> n;
        cout << "Enter the value of m: " << endl;
        cin >> m;

        //Enter the values in the Matrix.
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        cin >> arr[i][j];
                }
        }

        int topRow = 0, bottomRow = n-1, leftColumn = 0, rightColumn = m-1;

        while(topRow <= bottomRow || leftColumn <= rightColumn){
                //top row print.
                for(int i = topRow; i <= rightColumn; i++)
                        cout << arr[topRow][i] << " ";
                topRow++;


                //right column.
                for(int i = topRow; i <= bottomRow; i++)
                        cout << arr[i][rightColumn] << " ";
                rightColumn--;

                //bottom Row.
                for(int i = rightColumn; i >= leftColumn; i--)
                        cout << arr[bottomRow][i] << " ";
                bottomRow--;

                //left column.
                for(int i = bottomRow; i >= topRow; i--)
                        cout << arr[i][leftColumn] << " ";
                leftColumn++;

        }
                cout << endl;
}
