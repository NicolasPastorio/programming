<?php

// require_once 'src/modelo/conta/Conta.php';
// require_once 'src/modelo/Endereco.php';
// require_once 'src/modelo/Pessoa.php';
// require_once 'src/modelo/conta/Titular.php';
// require_once 'src/modelo/Cpf.php';
require_once 'autoload.php';

use Alura\Banco\modelo\conta\Titular;
use Alura\Banco\modelo\Endereco;
use Alura\Banco\modelo\CPF;
use Alura\Banco\modelo\conta\Conta;

//Vinicius
$endereco = new Endereco('Petrópolis', 'um bairro', 'minha rua', '71b');
$vinicius = new Titular(new CPF('123.456.789-10'), 'Vinicius Dias', $endereco);
$primeiraConta = new Conta($vinicius);
//utilizando métodos da conta
$primeiraConta->depositar(500);
$primeiraConta->sacar(300);

//mostrando informações da conta
echo "Nome: " . $primeiraConta->recuperaNomeTitular() . PHP_EOL;
echo "CPF: " . $primeiraConta->recuperaCpfTitular() . PHP_EOL;
echo "Saldo: " . $primeiraConta->recuperarSaldo() . PHP_EOL;

//Patricia

$patricia = new Titular(new CPF('698.549.548-10'), 'Patricia', $endereco);
$segundaConta = new Conta($patricia);
//mostrando informações da conta
echo "Nome: " . $segundaConta->recuperaNomeTitular() . PHP_EOL;
echo "CPF: " . $segundaConta->recuperaCpfTitular() . PHP_EOL;
echo "Saldo: " . $segundaConta->recuperarSaldo() . PHP_EOL;

$outroEndereco = new Endereco(cidade: 'A', bairro: 'b', rua: 'c', numero: '1D');
$outra = new Conta(new Titular(new CPF('123.654.789-01'), 'Carlos', $outroEndereco));
// unset($segundaConta);

echo Conta::recuperarNumeroDeContas() . " contas.". PHP_EOL;


var_dump($primeiraConta);
var_dump($segundaConta);
