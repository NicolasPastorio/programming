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

$contasCorrentes = [$conta1, $conta2, $conta3];

echo $conta1['titular'] . PHP_EOL;

for($i = 0; $i < count($contasCorrentes); $i++){
  echo $contasCorrentes[$i]['titular'] . PHP_EOL;
  echo $contasCorrentes[$i]['saldo'] . PHP_EOL;
}
