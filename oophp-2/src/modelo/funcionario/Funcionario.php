<?php

namespace Alura\Banco\modelo\funcionario;

use Alura\Banco\modelo\CPF;
use Alura\Banco\modelo\Pessoa;

abstract class Funcionario extends Pessoa
{
  private float $salario;

  public function __construct(string $nome, CPF $cpf, float $salario)
  {
    parent::__construct($nome, $cpf);
    // $this->cargo = $cargo;
    $this->salario = $salario;
  }

  //getters

  public function alteraNome(string $nome): void
  {
    $this->validaNome($nome);
    $this->nome = $nome;
  }

  public function recebeAumento(float $valorAumento): void 
  {
    if($valorAumento < 0){
      echo 'Aumento deve ser positivo';
      return;
    }

    $this->salario += $valorAumento;
  }

  public function recuperarSalario(): float 
  {
    return $this->salario;
  }

  abstract public function calculaBonificacao(): float;
}



?>
