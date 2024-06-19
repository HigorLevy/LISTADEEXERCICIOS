#include <iostream>
#include <string>
using namespace std;
int main(){

  int vetor[6];

  cout << "Digite os seis numeros inteiros do vetor: \n";
  
  for(int i = 0; i < 6; i++){
  cin >> vetor[i];
  }

  for(int i = 0; i < 6; i++){
    cout << "o numero da posicao " << i << " é: " << vetor[i] << endl;
  }
  
  return 0;
}