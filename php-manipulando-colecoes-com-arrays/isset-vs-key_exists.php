<?php
// $array = ['chave' => 'valor'];
// array_key_exists = verifica se a chave existe
// in_array = verifica se o valor existe
// isset = verifica se a chave existe e não é nula
$array = [
  'chave1' => 'valor 1',
  'chave2' => 2,
  'chave3' => null,
];
// Verificando se determinada chave existe dentro de um array
//---------------------------------------
echo 'A chave existe? ';
if(array_key_exists('chave3', $array)){
  echo 'Sim.'. PHP_EOL;
}else{
  echo 'Não.' . PHP_EOL;
}
// Verificando se determinada chave existe e não é nula
echo 'O valor da chave é nulo? ';
// var_dump(isset($array['chave3']));
if(isset($array['chave3'])){
  echo 'Não.'. PHP_EOL;
}else{
  echo 'Sim.'. PHP_EOL;
}
//---------------------------------------

// Verificando se um valor existe dentro de um array
//---------------------------------------
echo 'Alguém tirou 10? ';
var_dump(in_array(10, $notas));
//---------------------------------------
?>
