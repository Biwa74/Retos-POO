#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>A){
    int N = A.size();
    int intersecciones = 0;

    for(int j = 0; j <= N-2; j++){
        for(int k = j+1; k <= N-1; k++){
            int di=j+A[j];
            int dd=k-A[k];
            if(di>=dd){
                intersecciones++;
            }

        }
    }
    return intersecciones;
}

int main(){
    vector<int> entrada {1,5,2,1,4,0};
    cout << solution(entrada) << endl;
}