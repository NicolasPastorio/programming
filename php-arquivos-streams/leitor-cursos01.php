<?php

//abrindo arquivo como leitura
$arquivo = fopen('lista-cursos.txt', 'r');

while(!feof($arquivo)){
    $curso = fgets($arquivo);

    echo $curso . PHP_EOL;
}

//fechando arquivo
fclose($arquivo);