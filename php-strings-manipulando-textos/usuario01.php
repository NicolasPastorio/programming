<?php

$email = 'ana@alura.com.br';
$senha = '123';

// echo $senha[0] . PHP_EOL;
//
// for($i = 0; $i < 3; $i++){
//   echo $senha[$i] . PHP_EOL;
// }
//
// echo strlen($senha) . PHP_EOL;

if(strlen($senha) < 8){
  echo 'Senha insegura' . PHP_EOL;
}

$posicaoDoArroba = 3;
echo substr($email, 0, $posicaoDoArroba) . PHP_EOL;
echo substr($email, $posicaoDoArroba + 1) . PHP_EOL;

$posicaoDoArroba = strpos($email, '@');
echo substr($email, 0, $posicaoDoArroba) . PHP_EOL;
echo substr($email, $posicaoDoArroba + 1) . PHP_EOL;
?>
