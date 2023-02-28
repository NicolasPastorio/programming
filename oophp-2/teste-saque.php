<?php

use Alura\Banco\modelo\conta\Conta\{ContaPoupanca, ContaCorrente, Titular};
use Alura\Banco\modelo\{CPF, Endereco};

require_once 'autoload.php';

$conta = new ContaCorrente(
    new Titular(
        new CPF('123.456.789-10'), 
        'Vinicius Dias', 
        new Endereco('Petrópolis', 'bairro teste', 'Rua lá', '37')
    )
);

$conta->transferir(100, $conta);
$conta->depositar(500);
$conta->sacar(100);

echo $conta->recuperarSaldo();