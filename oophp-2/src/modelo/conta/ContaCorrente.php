<?php

namespace Alura\Banco\modelo\conta;

class ContaCorrente extends Conta
{
    public   function percentualTarifa():float 
    {
        return 0.05;
    }
    //método transferir
    public function transferir(float $valorATransferir, Conta $contaDestino): void
    {
        if($valorATransferir > $this->saldo){
        echo "Saldo indisponível!". PHP_EOL;
        return;
        }
        $this->sacar($valorATransferir);
        $contaDestino->depositar($valorATransferir);
    }
}