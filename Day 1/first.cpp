// 1. Simple program to print sum of 2 numbers a and b 

#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the  value of a \n";
    cin >> a;
    cout << "Enter the value of b \n";
    cin >> b;
    int sum = a + b;
    cout << "The sum of a and b is " << sum << endl;

    return 0;
}





// 2. Simple program to find wether a character is uppercase or lowercase 

#include <iostream>
using namespace std;

int main(){
    char Char;
    cout << "Enter a Character : \n";
    cin >> Char;
    if(Char > 'a' && Char < 'z'){
        cout << "This is an LowerCase Character \n";
    }else{
        cout << "This is a UpperCase Character \n";
    }

}


// 3. Simple program to print a pattern of stars 

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int a=0; a<=n; a++){
        int m =a;
            for(int b =0; b<=m; b++){
                cout << " *";
            }
            cout << endl;
        }
}


// 4. Simple program to print sum of numbers divible by 3 

#include <iostream>
using namespace std;

int main(){
    int n = 15;
    for(int i=0; i<=n; i++){
        if(i%3 == 0 && i !=0){
            cout << "Number divisible by 3\n";
        }else{
            cout << "Number not divisible by 3\n";
        };
    }
}