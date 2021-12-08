#include <iostream>
#include <string>
#include <thread>
#include "ksoEssential.h"
#include "class2Essential.h"

using namespace std;

int maxInteger = 2147483647;

void cetakHelloWorld(){
  ksoEssential abc;
  abc.cetakString("Hello World");
}

void cetakPrima(int limitAtas){
  class2Essential abc;
  for (int i=2;i<=limitAtas;i++){
    abc.cekPrima(i, "a");
    cout<<"\n";
  }
}

int main(){
  cetakHelloWord();
  cariPrima(maxInteger);
  return 0;
} 
