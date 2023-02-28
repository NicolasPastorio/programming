<?php

namespace Alura\Banco\servico;

use Alura\Banco\modelo\Autenticavel;

class Autenticador
{
    public function tentaLogin(Autenticavel $autenticavel, string $senha): void
    {
        if($autenticavel->podeAutenticar($senha)){
            echo 'Ok. Usuáriologado no sistema!';
        }else{
            echo 'Ops. Senha incorreta!';
        }
    }
}

?>