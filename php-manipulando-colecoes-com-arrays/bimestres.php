<?php

$notasBimestre1 = [
  'Vinicius' => 6,
  'João' => 8,
  'Ana' => 10,
  'Roberto' => 7,
  'Maria' => 9,
];

$notasBimestre2 = [
  'Vinicius' => 6,
  'João' => 8,
  'Ana' => 9,
  'Roberto' => 7,
  'Maria' => 10
];
// retorna um array contendo todos os elementos do
// primeiro parâmetro que não estejam nos próximos
// array passados por parâmetro (leva em consideração
// os valores do elementos do array e não as chaves)
var_dump(array_diff($notasBimestre1, $notasBimestre2));
//levando em consideração as chaves
var_dump(array_diff_key($notasBimestre1, $notasBimestre2));
//levando em consideração a chave e o valor
var_dump(array_diff_assoc($notasBimestre1, $notasBimestre2));



?>
