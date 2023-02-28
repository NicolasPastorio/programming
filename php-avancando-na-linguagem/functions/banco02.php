<?php

//funcão para exibir mensagem
function exibeMensagem(string $mensagem): void
{
  echo $mensagem . PHP_EOL;
}
//função de saque
function sacar(array $conta, float $valorASacar, $nome): array
{
  if($valorASacar > $conta['saldo']){
    exibeMensagem("Você não pode sacar Pois a conta de $nome");
    exibeMensagem("tem saldo insuficiente para R$ $valorASacar");
  }else{
    $conta['saldo'] -= $valorASacar;
  }
  return $conta;
}
//função de deposito
function depositar(array $conta, float $valorADepositar): array
{
  if($valorADepositar > 0){
    $conta['saldo'] += $valorADepositar;
  }else{
    exibeMensagem("Depósitos precisam ser positivos!");
  }
  return $conta;
}

//array associativo
$contasCorrentes = [
  '123.546.789-10' => [
    'titular' => 'Maria',
    'saldo' => 10000
  ],
  '123.456.789-11' => [
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
$contasCorrentes['123.456.789-11'] = sacar($contasCorrentes['123.456.789-11'], 50, $contasCorrentes['123.456.789-11']['titular']);
// $contasCorrentes['123.256.789-12'] = sacar($contasCorrentes['123.256.789-12'], 120, $contasCorrentes['123.256.789-12']['titular']);
// depositando...
// $contasCorrentes['123.256.789-12'] = depositar(
//   $contasCorrentes['123.256.789-12'],
//   -10
// );
$contasCorrentes['123.256.789-12'] = depositar(
  $contasCorrentes['123.256.789-12'],
  900
);

// Mostrar o resultado na tela
echo '--------------------------------------' . PHP_EOL;
foreach($contasCorrentes as $cpf => $conta){
  exibeMensagem(
  "{$conta['titular']} - $cpf - saldo {$conta['saldo']}"
  );
}
echo '--------------------------------------' . PHP_EOL;
