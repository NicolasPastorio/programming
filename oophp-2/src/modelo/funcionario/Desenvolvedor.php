<?php

namespace Alura\Banco\modelo\funcionario;

class Desenvolvedor extends Funcionario 
{
    public function sobeDeNivel()
    {
        $this->recebeAumento($this->recuperarSalario() * 0.75);
    }

    public function calculaBonificacao(): float 
    {
        return 500.0;
    }
}