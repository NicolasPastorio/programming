<?php

require_once 'src/Conta.php';
require_once 'src/Titular.php';
require_once 'src/CPF.php';

//criando conta e titular
$vinicius = new Titular(new CPF('123.456.789-10'), 'Vinicius Dias');
$primeiraConta = new Conta($vinicius);
//utilizando métodos da conta
$primeiraConta->depositar(500);
$primeiraConta->sacar(300);

//mostrando informações da conta
echo "Nome: " . $primeiraConta->recuperaNomeTitular() . PHP_EOL;
echo "CPF: " . $primeiraConta->recuperaCpfTitular() . PHP_EOL;
echo "Saldo: " . $primeiraConta->recuperarSaldo() . PHP_EOL;

$patricia = new Titular(new CPF('698.549.548-10'), 'Patricia');
$segundaConta = new Conta($patricia);
//mostrando informações da conta
echo "Nome: " . $segundaConta->recuperaNomeTitular() . PHP_EOL;
echo "CPF: " . $segundaConta->recuperaCpfTitular() . PHP_EOL;
echo "Saldo: " . $segundaConta->recuperarSaldo() . PHP_EOL;

// unset($segundaConta);

echo Conta::recuperarNumeroDeContas() . " contas.". PHP_EOL;


var_dump($primeiraConta);
var_dump($segundaConta);
