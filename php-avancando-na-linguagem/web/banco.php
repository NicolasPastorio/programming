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
echo "<ul>";
foreach($contasCorrentes as $cpf => $conta){
  exibeConta($conta);
}
echo "</ul>";
?>

<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <meta name="viewport"
      content="width=device-width, user-scalable=no, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Srvidor PHP</title>
  </head>
  <body>
    <h1>Contas correntes</h1>
    <dl>
      <?php foreach($contasCorrentes as $cpf => $conta){ ?>
        <dt>
          <h3><?= $conta['titular']; ?> - <?= $cpf; ?></h3></dt>
        <dd>
           Saldo: <?= $conta['saldo']; ?>
         </dd>
      <?php } ?>
    </dl>
  </body>
</html>
