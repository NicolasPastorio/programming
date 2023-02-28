<?php

namespace Alura\Banco\Modelo\Conta;

use Alura\Banco\modelo\Pessoa;
use Alura\Banco\modelo\CPF;
use Alura\Banco\modelo\Endereco;
use Alura\Banco\modelo\Autenticavel;

class Titular extends Pessoa implements Autenticavel
{
  private Endereco $endereco;

  public function __construct(CPF $cpf, string $nome, Endereco $endereco)
  {
    parent::__construct($nome, $cpf);
    $this->endereco = $endereco;
  }

//--------------------------------------------------

  public function recuperaEndereco(): Endereco
  {
    return $this->endereco;
  }

  public function podeAutenticar(string $senha): bool 
  {
    return $senha === 'abcd';
  }
}
