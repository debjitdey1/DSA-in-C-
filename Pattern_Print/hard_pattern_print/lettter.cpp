// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row= 1; row<=4; row++){
//         //space Print
//         for(col=1; col<=4-row; col++){
//             cout << " ";
//         }
//         for(col=1; col<=row; col++){
//             cout << row << " ";
//         }
//         cout << endl;
//     }
// }




#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter The Number: ";
    cin>> n;
    for(row=1; row<=n; row++){
        for(col=1;col<=n-row; col++){
            cout<<" ";
        }
        for(col=1;col<=row; col++){
            cout<<col;
        }
        cout<<endl;
    }
}