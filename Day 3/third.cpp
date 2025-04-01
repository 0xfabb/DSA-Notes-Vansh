 #include <iostream>
using namespace std;


void Greet() {
	string name; 
	cout << "What's your name?\n";
	cin >> name;
	cout << "Hello " << name << endl;
	}



int findingFactorial(int n){
	int factorial = 1;
	for(int i=1; i<=n; i++){        
	   factorial*=i;
	}
	return factorial;
}


int main(){
	int day;
	int month;
	int year;
	cout << "Enter your day\n";
	cin >> day;
	cout << "Enter your month\n"; 
	cin >> month;
	cout << "Enter your Year\n";
	cin >> year;
	Greet();
	cout << "Your date of birth is " << day << " " << month << " " << year << endl;
	cout << "Factorial is " << findingFactorial(28) << endl; 
}


