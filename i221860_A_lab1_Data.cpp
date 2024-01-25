//...............................................Q1.........................................................
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int day=0;
//	int month=0;
//	int year=0;
//
//	cout << "enter day --> : ";
//	cin >> day;
//	cout << "enter month --> : ";
//	cin >> month;
//	cout << "enter year --> : ";
//	cin >> year;
//
//
//	cout << endl << " the day month and year is --> : " << day << "/" << month << "/" << year;
//}

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,Q2,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class point {
//	int X;
//	int Y;
//public:
//	point (){}
//	point(int x, int y) : X(x),Y(y){}
//	
//	int getX()const {
//		return X;
//	}
//	int getY()const {
//		return Y;
//	}
//	void setX(int x) {
//		X = x;
//
//	}
//	void setY(int y) {
//		Y = y;
//
//	}
//	double distance(point& p)const {
//		double xd = X - p.getX();
//		double yd = Y - p.getY();
//		return sqrt(xd * xd + yd * yd);
//
//	}
//
//
//};
//
//
//int main() {
//	point p1(2, 4);
//	point p2(4, 8);
//	cout << " distance between points --> :  " << p1.distance(p2) << endl;
//
//}
//
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,Q3,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,



#include<iostream>
using namespace std;




const int MAX_SIZE = 10;


void inputMatrix(int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "enter elements in matrix : "<< endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int sumOfElements(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void rowWiseSum(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << "\n";
    }
}

void columnWiseSum(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << "\n";
    }
}

void transposeMatrix(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    int transposed[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[i][j] = A[j][i];
        }
    }

   cout << "transpose of the matrix --> :"<< endl;
    displayMatrix(transposed, n, m);
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int m, n, choice;

    cout << "enter the number of rows (m): ";
    cin >> m;
    cout << "enter the number of columns (n): ";
    cin >> n;

    do {
        // Display menu
       cout << "\nMenu:\n";
       cout << "1. Input elements into the matrix\n";
       cout << "2. Display elements of the matrix\n";
       cout << "3. Sum of all elements of the matrix\n";
       cout << "4. Display row-wise sum of the matrix\n";
       cout << "5. Display column-wise sum of the matrix\n";
       cout << "6. Create transpose of the matrix\n";
       cout << "0. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            std::cout << "Sum of all elements: " << sumOfElements(matrix, m, n) << std::endl;
            break;
        case 4:
            rowWiseSum(matrix, m, n);
            break;
        case 5:
            columnWiseSum(matrix, m, n);
            break;
        case 6:
            transposeMatrix(matrix, m, n);
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}

