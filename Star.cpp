// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout << "Enter The Rows: ";
//     cin >> n;
//     for(j=1;j<=n;j++){
//         for(i=1;i<=j;i++){
//             cout << "*";
//         }
//         cout << endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     cout << "Enter The Rows: ";
//     cin >>row;
//     cout << "Enter The Coloumns: ";
//     cin >> col;
//     for(int j=1;j<=row; j++){
//         for(int i=1; i<=col; i++){
//             cout << 10<< "";
//         }
//         cout << endl;
//     }
// } // namespace name



// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row =1; row<=5; row++){
//         for(col=1;col<=5;col++){
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row++){
        for(col=5; col>=1;col--){
            cout << col << " ";
        }
        cout << endl;
    }
}