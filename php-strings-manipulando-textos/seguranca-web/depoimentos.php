<?php

/** @var PDO $conexao */
$conexao = require_once 'conexao.php';

$stm = $conexao->query('SELECT depoimento FROM depoimentos');
$depoimentos = $stm->fetchAll(PDO::FETCH_COLUMN, 0);

require_once 'view-depoimentos.php';
?>
