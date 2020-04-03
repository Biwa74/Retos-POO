#include <iostream>
using namespace std;

int j=0;
int solution(int A, int B, int K){
    int i;
    for (i=A;i<=B;i++){
        if (i%K==0){
           j=j+1;

        }

    }
    return j;

}




int main(){
    int A,B,K;
    cout<<"Ingresa valor de A:"<<endl;
    cin >> A;
    cout<<"Ingresa valor de B:"<<endl;
    cin >> B;
    cout<<"Ingresa valor de K:"<<endl;
    cin >> K;
    cout<<"La respuesta es:"<<endl;
    cout<<solution(A,B,K)<<endl;
}