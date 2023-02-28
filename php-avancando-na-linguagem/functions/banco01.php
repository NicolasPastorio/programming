<?php

$contasCorrentes = [
  '123.546.789-10' => [
    'titular' => 'Maria',
    'saldo' => 10000
  ],
  '123.456.789-11' => [
    'titular' => 'Alberto',
    'saldo' => 300
  ],
  '123.256.789-12' =>[
    'titular' => 'Vivicius',
    'saldo' => 100
  ]
];

// sacando 500 da conta da Maria
$contasCorrentes['123.546.789-10']['saldo'] -= 500;
// depositando 900 na conta do Vinicius
$contasCorrentes['123.256.789-12']['saldo'] += 900;

// Mostrar o resultado na tela
echo '--------------------------------------' . PHP_EOL;
foreach($contasCorrentes as $cpf => $conta){
  echo $conta['titular'] . " - " . $cpf . " - saldo " . $conta['saldo'] . PHP_EOL;
}
echo '--------------------------------------' . PHP_EOL;
