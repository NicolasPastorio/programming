<?php

$conta = ['titular' => 'Adalberto'];
$contaPoupanca = [
  'conta01' => ['titular' => 'Juliana', 'saldo' => 1232],
  'conta02' => ['titular' => 'Cruciano', 'saldo' => 450],
  'conta03' => ['titular' => 'Monica', 'saldo' => 122]
];
function mensagemBancaria(string $mensagem): void
{
    echo $mensagem . PHP_EOL;
}
// acessando $conta
echo '-----------------------------------' . PHP_EOL;
// formas para usar array associativo dentro de uma string
echo 'O titular da conta é ' . $conta['titular'] . PHP_EOL;
echo "O titular da conta é {$conta['titular']}" . PHP_EOL;
echo "O titular da conta é $conta[titular]" . PHP_EOL;
echo '-----------------------------------' . PHP_EOL;

echo "O titular da segunda conta é {$contaPoupanca['conta01']['titular']}" . PHP_EOL;
echo '-----------------------------------' . PHP_EOL;

foreach($contaPoupanca as $cliente => $dados){
  mensagemBancaria("Titular: {$dados['titular']} - Saldo: {$dados['saldo']}");
}
echo '-----------------------------------' . PHP_EOL;
?>
