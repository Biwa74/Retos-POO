#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> A){
    vector <int> vect1;
    vector <int> vect2;
    int p;
    for (p=1;p<A.size();p++){
        if (p==1){
            vect1=A[0];
        }
        vect1=(A.begin(),A.begin()+p-1);
        vect2=(A.begin()+p,A.end());
        
    }

}


int main(){
    vector<int> A={ 10, 20, 30, 40, 50, 60 };
    cout<<solution(A)<< endl;
}


