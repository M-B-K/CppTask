#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
int size1 = sizeof("PART i)") - 2;
int size2 = size1 + sizeof("PART ii)") - 2;
int size3 = size2 + sizeof("PART iii)") - 2;
int size4 = size3 + sizeof("PART iv)") - 2;
int size5 = size4 + sizeof("PART v)") - 2; 

for(int m = 1; m<=75; m++){
        if(m==1){
            cout<<"PART i)";        
        }
        else if(m==(17 - size1)){
           cout<<"PART ii)";
        }
        else if(m==(33 - size2)){
            cout<<"PART iii)";
        }
        else if(m==(49 - size3)){
            cout<<"PART iv)";
        }
        else if(m==(65 - size4)){
            cout<<"PART v)";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n\n";
    
    int l  = 5;
    for(int j=1; j<6; j++){
        for(int i=1; i<=70; i++){
            if(i>=1 && i<5){
                cout<<"*";
            }
            else if(i>=17  && i<23 && i<=(j + 16)){
                cout<<"*";
            }
            else if (i>=33 && i<38 && i<=(j + 32)){
                cout<<j;
            }
            else if(i>=49 && i<54 && i<=(l + 48)){
                cout<<"*";
            }
            else if(i>=65 && i<70 && i<=(l + 64) ){
                cout<<l;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        l--;

    }

    
}