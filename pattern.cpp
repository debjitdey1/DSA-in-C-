#include<iostream>
using namespace std;
int main(){
    for(int row =1; row<=5; row++){ //
        for(int col=1; col<=row; col++){ //1<=1
            cout << "* ";//*,* *,
        }
        cout << endl;
    }
}



#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}





#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row =1; row<=5 ; row++){
        for(col=row; col>=1; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}




#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1; row<=5; row++){
        for(col=1; col<=5-row+1; col++){
            cout << col<< " ";
        }
        cout << endl;
    }
}


#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1;row<=5;row++){
        for(col=5; col>=5-row+1;col--){
            cout << col << " ";
        }
        cout << endl;
    }
}