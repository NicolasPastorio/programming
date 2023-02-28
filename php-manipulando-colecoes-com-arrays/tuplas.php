<?php

$dados = ['Vinicius', 10, 24];
// $nome = $dados[0];
// $nota = $dados[1];
// $idade = $dados[2];
// list($nome, $nota, $idade) = $dados;
[$nome, $nota, $idade] = $dados;

var_dump($nome, $nota, $idade);

echo PHP_EOL;
$outrosDados = [
  'nome' => 'Vinicius',
  'nota' => 10,
  'idade' => 24,
];
['nome' => $dadoNome, 'nota' => $dadoNota, 'idade' => $dadoIdade] = $outrosDados;
var_dump($dadoNome, $dadoNota, $dadoIdade);
?>
