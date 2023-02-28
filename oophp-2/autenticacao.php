<?php 

use Alura\Banco\modelo\CPF;
use Alura\Banco\modelo\funcionario\{Diretor, Gerente};
use Alura\Banco\servico\Autenticador;

require_once 'autoload.php';

$autenticador = new Autenticador();
$umDiretor = new Gerente(
    'João da Silva', 
    new CPF('123.456.789-10'), 
    10000
);

$autenticador->tentaLogin($umDiretor, '4321');

?>