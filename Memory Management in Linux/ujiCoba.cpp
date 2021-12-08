#include <iostream>
#include "linkedlist.cpp"

using namespace std;

int const ukuranAwal = 10000;
int const stepUkuran = 100;

void integerEdan(int ukuranAwal, int stepUkuran){
  int ukuranMatrix = ukuranAwal;
  do{
    cout<<"Tes ukuran matrix: "<<ukuranMatrix<<"\n";
    int matrix[ukuranMatrix];
    for(int = 0;i<ukuranMatrix;i++)matrix[i]=i;
    ukuranMatrix=ukuranMatrix+stepUkuran;
  } while (true);
}

int main(){
  //integerEdan(ukuranAwal, stepUkuran);
  //integerEdan(ukuranAwal, stepUkuran);
  return 0;
}
