// // 1. Simple program to print a square with 4 rows and with each row having numbers 1 to 4

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i =0; i<n; i++){
//         int num = 1;
//         for(int j=0; j<4; j++){
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
// }

// 2. Simple program to print a square with 4 rows and each row having ABCDE...

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 4; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < 4; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }

// 3. Simple program to print a square with 4 rows and items as numbers from 1 to 16

// #include <iostream>
// using namespace std;

// int main()
// {

//     int num = 1;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
// }

// 4. Simple program to

#include <iostream>
using namespace std;

int main()
{

    int num = 1;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
        }
        num = num +1;
        cout << endl;
    }
}