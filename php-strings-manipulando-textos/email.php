<?php

// $string = <<<FINAL
// Uma linha
// Outra linha
// etc
// FINAL;

function geraEmail(string $nome): void
{
  #heredoc ("") não ignora as variáveis
  #nowdoc ('') ignora as variáveis
  $conteudoEmail = <<<FINAL
  Olá, $nome!

  Estamos entrando em contato para
  {motivo do contato}

  {assinatura}
  FINAL;
  #--------------------------------
  $conteudoEmailSemVariaveis = <<<'FIM'
  Olá, $nome!

  E quantas strings quiser adicionar...
  FIM;
  #--------------------------------
  echo $conteudoEmail . PHP_EOL;
  echo $conteudoEmailSemVariaveis . PHP_EOL;
}

geraEmail('Vinicius Dias');
?>
