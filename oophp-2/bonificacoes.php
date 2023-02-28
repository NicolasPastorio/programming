<?php 

require_once 'autoload.php';

use Alura\Banco\servico\ControladorDeBonificacoes;
use Alura\Banco\modelo\{CPF}; 
use Alura\Banco\modelo\funcionario\{Desenvolvedor, Gerente, Diretor, EditorVideo};


$umFuncionario = new Desenvolvedor(
    'Vinicius Dias',
    new CPF('123.456.678-10'),
    1000
);

$umaFuncionaria = new Gerente(
    'Patricia',
    new CPF('987.654.321-10'),
    3000
);

$umDiretor = new Diretor(
    'Ana Paula',
    new CPF('123.651.789-11'),
    5000
);

$umEditor = new EditorVideo(
    'Paulo',
    new CPF('456.987.231-11'),
    1500
);


$umFuncionario->sobeDeNivel();

$controlador = new ControladorDeBonificacoes();
$controlador->adicionaBonificacaoDe($umFuncionario);
$controlador->adicionaBonificacaoDe($umaFuncionaria);
$controlador->adicionaBonificacaoDe($umDiretor);
$controlador->adicionaBonificacaoDe($umEditor);

echo $controlador->recuperaTotal();