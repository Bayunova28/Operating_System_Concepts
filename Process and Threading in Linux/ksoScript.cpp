#include <iostream>
#include <string>
#include "class2Essential.h"
#include "ksoEssential.h"
using namespace std;

void ksoEssential::cetakString(const std::string tulisan){
  cout<<tulisan<<"\n";
}

void class2Essential::cekPrima(int angka, const std::string tipe){
  if(tipe.compare("a")==0){
    if(hitungPrima(angka)==-1)cout<<"Bilangan harus bilangan bulat lebih besar dari 1";
    if(hitungPrima(angka)==0)cout<<"Bilangan "<<angka<<"adalah bukan bilangan prima";
    if(hitungPrima(angka)==1)cout<<"Bilangan "<<angka<<"adalah bilangan prima";
  } else if(tipe.compare("s")==0)hitungPrima(angka);
  else cout<<"Argumen salah";
}

int class2Essential::hitungPrima(int angka) {
  if(angka<2)return -1;
  if(angka==2)return 1;
  if(angka==4)reaturn 0;
  if(angka>2){
    bool prima = true;
    cout<<"\n";
    if(prima)return 1;
    else return 0;
  }
}
