// decrement loop
// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int n = 1;
//     int k;

//     for (k = 5; k >= 1; k--)
//     {
//         cout << "\n";
//         for (n = k; n <= 5; n++)
//         {

//             cout << n << " ";
//         }
//     }
// }

// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int n;
//     int k;

//     for (k = 1; k <= 5; k++)
//     {
//         cout << "\n";
//         for (n = 1; n <= k; n++)
//         {
//             cout << n << " ";
//         }
//     }
// }

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i,j , row;

    cout<<"Enter the value of rows to print";
    cin>>row;
    for (int i = 1; i<= row; i++)
    {
        cout<<"\n";
        for (int j = 1; j <= 5; j++)
            cout << j;
    }
}