<?php
// Caso o arquivo não seja encontrado, include lançará um aviso
// (E_WARNING)
include 'funcoes.php';
// Caso o arquivo não seja encontrado, require lançará um erro
// e não permitirá a execução do programa
require 'funcoes.php';
//Neste último caso ele verificará se o arquivo já foi incluido
require_once 'funcoes.php';
?>
