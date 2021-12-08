#!/bin/bash

totalAngka = 0
jumlahLoop = 0

for((;;))
do
  if [$totalAngka -gt 700]
  then
      break
  fi
  angkaRandom=$((RANDOM%200+100))
  echo "Dapat angka $angkaRandom"
  if[$angkaRandom -lt 120]
  then
      totalAngka=$((totalAngka+angkaRandom))
  fi
  jumlahLoop=$((jumlahLoop+1))
done

echo "Jumlah nilai akhir $totalAngka diraih dari perulangan sebanyak $jumlahLoop kali."
