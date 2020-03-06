#include <iostream>
#include<vector>
using namespace std;

vector<int> rotacion(vector<int>A, int k){
    vector<int> copia;
    int knew= k%A.size();
    for(int j=0;j<knew;j++){
        copia=A;
        //cout<<A.size()<<endl;
        for (int i=0;i <copia.size();i++){
            if(i==0){
                A[i]=copia[copia.size()-1];

            }else {
                A[i]=copia[i-1];

            }

        }
    }
    return A;
}

int main(){
    vector<int> datos{1,2,3};
    vector<int> res;
    res= rotacion(datos,33333032);
    for(int i=0;i<datos.size();i++){
        cout<<res[i]<<endl;

    }


}