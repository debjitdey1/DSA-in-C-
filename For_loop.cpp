// #include<iostream>
// using namespace std;
// int main(){
//     int count;
//     for (count = 1; count <=15; count++){
//         cout << "Hey " << count << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char name;
//     for(name = 'a';name<='z'; name= name+1){
//         cout << name << endl;

//     }
// }



#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the Number: ";
    cin>>i;
    for(i=10;i>=1;i--){
        cout<< i <<" x " << i << " = " << i*i << endl;
    }
}