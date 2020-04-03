#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A){
    int i;
    int permutacion;
    sort(A.begin(), A.end());
    for (i=0;i<A.size();i++){
        if (A[i]!=i+1){
             permutacion=0;
             break;
        }
        else{
             permutacion=1;


        }
    }
    return permutacion;

}

int main(){
    int f;
    vector <int> A={2,5,1,3,7,4,6,10,8,8};
    f= solution(A);
    if (f==1){
        cout<<"Es permutacion"<<endl;
    }
    else{
        cout<<"No es permutacion"<<endl;
    }


}