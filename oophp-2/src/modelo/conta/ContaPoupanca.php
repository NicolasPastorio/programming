<?php

namespace Alura\Banco\modelo\Conta;

class ContaPoupanca extends Conta
{
    public function percentualTarifa(): float 
    {
        return 0.03;
    }
}