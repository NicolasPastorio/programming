<?php

//abrindo arquivo escrita
// $arquivo = fopen('cursos-php.txt', 'w');
$arquivo = fopen('cursos-php.txt', 'a');

$curso = "\n" . 'Design Patterns PHP II: Boas práticas de programação';

//função para escrever em um arquivo (arquivo, conteúdo)
fwrite($arquivo, $curso);

fclose($arquivo);

