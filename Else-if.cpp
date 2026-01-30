#include<iostream>
using namespace std;
int main(){
    int package;
    cout << "Enter the Package";
    cin >> package;
    if(package<=10){
        cout << "Valid Package";
    }
    else{
        cout << "Invalid Package";
    }
}


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter The First Number";
    cin >> a;
    cout << "Enter The Second Number";
    cin >> b;
    if(a>b){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}



#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"Enter the Nemuber: ";
    cin >> number;
    if(number%2 == 0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin >> age;
    if(age<18){
        cout << "You are a Teenager";
    }
  else{
    cout << "You are an Adult";
  }
}

#include<iostream>
using namespace std;
int main(){
    char c ;
    cout<<"Enter The Chatecter";
    cin >> c;
    if(c=='a'){
        cout <<"Vowel";
    }
    else if (c=='e'){
        cout <<"Vowel";
    }
    else if (c=='i'){
        cout <<"Vowel";
    }
    else if (c=='o'){
        cout <<"Vowel";
    }
    else if (c=='u'){
        cout <<"Vowel";
    }
    else{
        cout <<"Consonant";
    }
    
}
