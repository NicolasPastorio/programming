<?php
// $array = ['chave' => 'valor'];
// array_key_exists = verifica se a chave existe
// in_array = verifica se o valor existe
// isset = verifica se a chave existe e não é nula
$notas = [
  'Vinicius' => null,
  'João' => 8,
  'Ana' => 10,
  'Roberto' => 7,
  'Maria' => 9,
];
//---------------------------------------
$temAluno;
foreach($notas as $aluno => $nota){
  if($aluno === 'Vinicius'){
     $temAluno = true;
  }
}
var_dump($temAluno);
//ou
echo 'Vinicius está na lista? ';
var_dump(array_key_exists('Vinicius', $notas));
//---------------------------------------
echo 'Vinicius fez a prova? ';
var_dump(isset($notas['Vinicius']));
//---------------------------------------

// Verificando se um valor existe dentro de um array
//---------------------------------------
echo 'Alguém tirou 10? ';
var_dump(in_array(10, $notas, true));
//---------------------------------------
echo 'Quem tirou 10?'. PHP_EOL;
echo array_search(10, $notas) . PHP_EOL;
var_dump(array_search(10, $notas, true));
?>
