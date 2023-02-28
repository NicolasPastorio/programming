<?php

$conta1 = [
  'titular' => 'Vinicius',
  'saldo' => 1000
];
$conta2 = [
  'titular' => 'Maria',
  'saldo' => 10000
];
$conta3 = [
  'titular' => 'Alberto',
  'saldo' => 300
];

// $contasCorrentes = [
//   12345678910 => $conta1,
//   12345648911 => $conta2,
//   12325678910 => $conta3
// ];

$contasCorrentes = [
  12 => [
    'titular' => 'Vinicius',
    'saldo' => 1000
  ],
  13 => [
    'titular' => 'Maria',
    'saldo' => 10000
  ],
  14 => [
    'titular' => 'Alberto',
    'saldo' => 300
  ]
];

//adicionando um item em um arrray associativo
$contasCorrentes[15] = [
  'titular' => 'Claudia',
  'saldo' => 2000,
];
$contasCorrentes[] = [
  'titular' => 'Fonceca',
  'saldo' => 120
];

foreach ($contasCorrentes as $cpf => $conta) {
  echo $cpf . " " . $conta['titular'] . PHP_EOL;
}
