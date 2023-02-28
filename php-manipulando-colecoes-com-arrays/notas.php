<?php

$notas = [
  'Vinicius' => 6,
  'João' => 8,
  'Maria' => 9,
  'Roberto' => 7,
  'Ana' => 10
];

// //ordenação crescente
// sort($notas);
// var_dump($notas);
// //ordenação decrescente
// rsort($notas);
// var_dump($notas);
// //ordenação crescente mantendo as chaves
// asort($notas);
// var_dump($notas);
// //ordenação decrescente mantendo as chaves
// arsort($notas);
// var_dump($notas);
// //ordenação alfabética crescente utilizando as chaves
// ksort($notas);
// var_dump($notas);
//ordenação alfabética decrescente utilizando as chaves
krsort($notas);
var_dump($notas)


?>
