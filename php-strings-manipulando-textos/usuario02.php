<?php

$nome = 'Vinícius Dias';
$email = 'Vinícius@alura.com.br';
$senha = 'kasdkjfklcsdjfas';

echo mb_strlen($senha) . PHP_EOL;

if(mb_strlen($senha) < 8){
  echo 'Senha insegura' . PHP_EOL;
}

$posicaoDoArroba = strpos($email, '@');

$usuario = substr($email, 0, $posicaoDoArroba);

echo strtoupper($usuario) . PHP_EOL;
echo strtolower($usuario) . PHP_EOL;
echo substr($email, $posicaoDoArroba + 1) . PHP_EOL;

echo mb_strtoupper($usuario) . PHP_EOL;

list($nome, $sobrenome) = explode(' ',$nome);
echo 'Nome: ' . $nome . PHP_EOL;
echo 'Sobrenome: ' . $sobrenome . PHP_EOL;

$csv = 'Vinicius Dias, 24, vinicius@alura.com.br';
var_dump(explode(',', $csv));

?>
