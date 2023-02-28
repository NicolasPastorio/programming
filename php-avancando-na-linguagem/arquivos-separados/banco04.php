<?php
require_once 'funcoes.php';

//array associativo
$contasCorrentes = [
  '123.546.789-10' => [
    'titular' => 'Maria',
    'saldo' => 10000
  ],
  '123.456.689-11' => [
    'titular' => 'Alberto',
    'saldo' => '300'
  ],
  '123.256.789-12' =>[
    'titular' => 'Vivicius',
    'saldo' => 100
  ]
];

// sacando...
$contasCorrentes['123.546.789-10'] = sacar($contasCorrentes['123.546.789-10'], 500, $contasCorrentes['123.546.789-10']['titular']);
$contasCorrentes['123.456.689-11'] = sacar($contasCorrentes['123.456.689-11'], 50, $contasCorrentes['123.456.689-11']['titular']);
// depositando...
$contasCorrentes['123.256.789-12'] = depositar(
  $contasCorrentes['123.256.789-12'],
  900
);

// removendo uma variável da memória
unset($contasCorrentes['123.456.689-11']);

titularComLetrasMaiusculas($contasCorrentes['123.256.789-12']);

// Mostrar o resultado na tela
echo '--------------------------------------' . PHP_EOL;
foreach($contasCorrentes as $cpf => $conta){
  // list('titular' => $titular, 'saldo' => $saldo) = $conta;
  ['titular' => $titular, 'saldo' => $saldo] = $conta;
  exibeMensagem(
  "$cpf $titular $saldo"
  );
}
echo '--------------------------------------' . PHP_EOL;
