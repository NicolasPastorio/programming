<?php

$alunos2021 = [
  'Vinicius',
  'João',
  'Ana',
  'Roberto',
  'Maria',
];

$novosAlunos = [
  'Patricia',
  'Nico',
  'Kilderson',
  'Daiane',
];

// $alunos2022 = array_merge($alunos2021, $novosAlunos);
// var_dump($alunos2022);
// $alunos2022 = $alunos2021 + $novosAlunos;
// var_dump($alunos2022);

$alunos2022 = [...$alunos2021, 'Janice', ...$novosAlunos];
//adicionar elementos ao final do array
array_push($alunos2022, 'Alice', 'Bob', 'Charlie');
//adicionar um elemento no final do array
$alunos2022[] = 'Luiz';
//adicionar elementos no início do array
array_unshift($alunos2022, 'Stephanie', 'Rafaela');

//remove o primeiro elemento do array
echo array_shift($alunos2022) . PHP_EOL;
//remove o últiomo elemento do array
echo array_pop($alunos2022) . PHP_EOL;

var_dump($alunos2022);
?>
