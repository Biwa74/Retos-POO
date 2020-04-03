#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector <int> solution(string S, vector<int>P,vector <int>Q){
    int M= P.size();

    for(int k=0;k<M;k++){
        vector<int> frag;
        for(int i=P[k];i<Q[k];i++){
            if(S[i]=='A'){
                frag.push_back(1);
            }
            else if(S[i]=='B'){
                frag.push_back(2);
            }
            else if(S[i]=='C'){
                frag.push_back(3);
            }
            else if(S[i]=='D'){
                frag.push_back(4);
            }
        }
        for(int j=0;j<frag.size();j++)
            cout<<frag[j]<<endl;
    }
   // return frag;
}



int main(){
    string S= "CAGCCTA";
    vector <int> P {2,5,0};
    vector <int> Q {4,5,6};
    vector <int> solucion;
    solucion=solution(S,P,Q);
    cout<< solucion<< endl;

}