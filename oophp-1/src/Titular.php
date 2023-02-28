<?php

class Titular
{
  private CPF $cpf;
  private string $nome;

  public function __construct(CPF $cpf, string $nome)
  {
    $this->cpf = $cpf;
    $this->validaNomeTitular($nome);
    $this->nome = $nome;
  }

//--------------------------------------------------
  public function recuperaNome(): string
  {
    return $this->nome;
  }
  public function recuperaCpf(): string
  {
    return $this->cpf->recuperaNumero();
  }
  //validação
  private function validaNomeTitular(string $nomeTitular)
  {
    if(strlen($nomeTitular) < 5){
      echo "Nome precisa ter pelo menos 5 caracteres!" . PHP_EOL;
      exit();
    }
  }
//--------------------------------------------------
}