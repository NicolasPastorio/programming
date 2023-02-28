<?php

$depoimento = filter_input(
  INPUT_POST,
  'depoimento',
  FILTER_SANITIZE_STRING
);

/** @var PDO $conexao */
$conecao = require_once 'conecao.php';
$stm = $conexao->prepare('INSERT INTO depoimentos (depoimento) VALUES (?)');
$tm->bindValue(1, $depoimento);
$stm->execute();

header('Location: /depoimentos.php');
?>
