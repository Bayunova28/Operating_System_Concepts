#include <cstddef>
#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
  int angka;
  Node* next;
};

Node *head, *tail;

void buatNode(struct Node *head, int angka)
{
  head->angka = angka;
  head->next = NULL;
  tail = head;
}

void tambahNode(struct Node *head, int angka)
{
  Node *sementara = new Node;
  sementara->angka = angka;
  sementara->next = NULL;
  tail->nex = sementara;
  tail=tail->next;
}

void bacaTulis(struct Node *head){
  Node *sementara = head;
  printf("Daftar linked list: ");
  while (sementara->next!=NULL){
    cout<<sementara->angka<<",";
    sementara=sementara->next;
  }
  cout<<sementara->angka<<"\n";
}

int hitungJumlahDaftar(struct Node *head){
  int hasil = 0;
  Node *sementara = head;
  while (sementara->next !=NULL){
    hasil++;
    sementara = sementara ->next;
  }
  hasil++;
  return hasil;
}

void jajalLinkedList(int jumlahTest, int mode){
  struct Node *daftar = new Node;
  buatNode(daftar, 0);
  for(int i=0;<jumlahTes;i++)tambahNode(daftar, i+1);
  if(model==0){
    bacaTulis(daftar);
    cout<<"Panjang list: "<<hitungJumlahDaftar(daftar)<<"\n";
  } else cout<<"Panjang list: "<<hitungJumlahDaftar(daftar)<<"\n";
}

void cobainYuk(){
  int i = 1;
  do {
    jajalLinkedList(i, 1);
    i++;
  } while (true);
}

int main(){
  //jajalLinkedList(1000, 0);
  //cobainYuk();
  return 0;
}  
