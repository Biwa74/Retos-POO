#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A){
    int i;
    int faltante;
    sort(A.begin(), A.end());
    for (i=0;i<=A.size()-1;i++){
        if (A[i]!=i+1){
             faltante=0;
             faltante=i+1;
             break;
        }
        else{
            faltante=A.size()+1;
        }
    }
    return faltante;
}

int main(){
    int f;
    vector <int> A={-3,-1};
    f= solution(A);
    cout<< "Falta el numero: "<<endl;
    cout<< f <<endl;
}