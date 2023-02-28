<?php

namespace Alura\Banco\modelo\funcionario;

use Alura\Banco\modelo\Autenticavel;

class Gerente extends Funcionario implements Autenticavel
{
    public function calculaBonificacao(): float 
    {
        return $this->recuperarSalario();
    }

    public function podeAutenticar(string $senha): bool 
    {
        return $senha === '4321';
    }
}