#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, maior=0, posicao=1;
  for (int i=1; i<=100; i++){
    cin >> n;
    if (n > maior){
      maior = n;
      posicao = i;
    }
  }
  cout << maior << "\n" << posicao << endl;
  return 0;
}
