<?php

//funcão para exibir mensagem
function exibeMensagem(string $mensagem): void
{
  echo $mensagem . '<br>';
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

function titularComLetrasMaiusculas(array &$conta)
{
  $conta['titular'] = mb_strtoupper($conta['titular']);
}

function exibeConta(array $conta)
{
  ['titular' => $titular, 'saldo' => $saldo] = $conta;
  echo "<li>Titular $titular. Saldo: $saldo</li>";
  // echo "<li>Titular: $conta[titular]. Saldo: {$conta['saldo']}</li>";
}
