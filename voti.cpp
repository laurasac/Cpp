#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
  int n, k;
  cout << "Inserisci numero dei candidati: ";
  cin >> k; 
  cout << "Inserisci numero dei giudici: ";
  cin >> n;
  int voti[k][n], sommaVoti[k], max= 0, maxIn, min = 100, minIn;
  double mediaVoti[n];

  srand(time(NULL));
  for(int i = 0 ; i <k; i++){
    cout << i+1 << "°:  ";
    for(int j = 0; j < n; j++){
      voti[i][j] = rand()%6;// carico voti casuali da 0 5
      cout << voti[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0 ; i < k ; i++) sommaVoti[i] = 0;
  for(int i = 0 ; i < n ; i++) mediaVoti[i] = 0;

  for(int i = 0 ; i <k; i++){
    for(int j = 0; j < n; j++) sommaVoti[i] += voti[i][j];
    if(sommaVoti[i]> max){ // trovo il candidato con i voti maggiori
      max = sommaVoti[i];
      maxIn = i;
      }
  }

  for(int i = 0 ; i <n; i++){
    for(int j = 0; j < k; j++) mediaVoti[i] += voti[j][i];
    mediaVoti[i] = mediaVoti[i]/k;//trovo il giudice più severo
    if( mediaVoti[i] < min){
      min = mediaVoti[i];
      minIn = i;
    }
  }

  cout << "Candidato più intelligente: " << maxIn+1 << endl;
  cout << "Giudice più severo: "  << minIn+1 << endl;
  return 0;
}