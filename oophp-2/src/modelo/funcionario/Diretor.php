<?php 

namespace Alura\Banco\modelo\funcionario;

use Alura\Banco\modelo\Autenticavel;

class Diretor extends Funcionario implements Autenticavel
{
    public function calculaBonificacao(): float 
    {
        return $this->recuperarSalario() * 2;
    }

    public function podeAutenticar(string $senha): bool 
    {
        return $senha ===  '1234';
    }
}