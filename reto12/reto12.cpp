#include <iostream>
using namespace std;
#include <vector>



int solution(vector<int> A){
    int prom_min=10000;
    int P;
    int Q;
    float suma;
    int pos;
    for (P=0;P<A.size()-1;P++){
        suma=0;
        for (Q=P+1;Q<A.size();Q++){
            for (int i=P;i<=Q;i++){
                suma=suma+A[i];
            }
            float promedio=suma/(Q-P+1);
            if(promedio<prom_min){
                prom_min=promedio;
                pos=P;
            }
        }

    }
    return pos;

}

int main(){
    vector <int>A{4,2,1,1};
    int res;
    res=solution(A);
    cout<< res<<endl;


}