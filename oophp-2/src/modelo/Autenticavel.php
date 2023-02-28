<?php

namespace Alura\Banco\modelo;

interface Autenticavel
{
    public function podeAutenticar(string $senha): bool;
}

?>