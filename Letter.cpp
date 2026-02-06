// #include<iostream>
// using namespace std;
// int main(){
//     for(int row = 1; row<=5;row++){
//         char name='a'+row-1;
//         for(int col=1; col<=5; col++){
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     for(row=1;row<=5;row++){
//         for(char name='a'; name<='e'; name++){
//             cout<<name<<" ";
//         }
//         cout<<endl; 
//     }
// }




#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}