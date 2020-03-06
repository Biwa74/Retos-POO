#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A){
    int i;
    int faltante;
    sort(A.begin(), A.end());
    cout<< A [0];
    cout<< A [1];
    cout<< A [2];
    cout<< A [3];
    cout<< A [4]<<endl;
    for (i=0;i>A.size()+1;i++){
        if (A[i]!=i+1){
            faltante=i+1;
        }


    }
    return faltante;
}

int main(){
    int f;
    vector <int> A={2,5,4,1,6};
    f= solution(A);
    cout<< "Falta el numero: "<<endl;
    cout<< f<<endl;

}