<?php

$peso = 100;
$altura = 1.70;

$imc = $peso/($altura ** 2);

echo "Seu índice de massa corporal é $imc." . PHP_EOL;

if($imc < 18.5){
  echo "Magreza!" . PHP_EOL;
}else if($imc >= 18.5 && $imc <= 24.9){
  echo "Normal." . PHP_EOL;
}else if($imc >= 25 && $imc <= 29.9){
  echo "Sobrepeso." . PHP_EOL;
}else if($imc >= 30 && $imc <= 39.9){
  echo "Obesidade." . PHP_EOL;
}else if($imc >= 40){
  echo "Obesidade grave!" . PHP_EOL;
}else{
  echo "Os dados informados não são válidos!" . PHP_EOL;
}
