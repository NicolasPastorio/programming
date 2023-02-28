<?php

namespace Alura\Banco\Modelo;

abstract class Pessoa
{
  use AcessoPropriedades;

  protected string $nome;
  private CPF $cpf;

  public function __construct(string $nome, CPF $cpf)
  {
    $this->validaNome($nome);
    $this->nome = $nome;
    $this->cpf = $cpf;
  }

  public function recuperaNome(): string
  {
    return $this->nome;
  }
  public function recuperaCpf(): string
  {
    return $this->cpf->recuperaNumero();
  }

  //validação do nome do titular
  final protected function validaNome(string $nomeTitular)
  {
    if(strlen($nomeTitular) < 3){
      echo "Nome precisa ter pelo menos 3 caracteres!" . PHP_EOL;
      exit();
    }
  }

}

?>
