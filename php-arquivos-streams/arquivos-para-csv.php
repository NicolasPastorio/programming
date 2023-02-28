<?php 

// // Pegando o conetúdo de dois arquivos .txt como string
// $meusCursos = file_get_contents('lista-cursos.txt');
// $outrosCursos = file_get_contents('cursos-php.txt');

/*Pegando o conetúdo de dois arquivos .txt em que cada linha
é um conteúdo do array*/
$meusCursos = file('lista-cursos.txt');//array
$outrosCursos = file('cursos-php.txt');//array

// Criando um arquivo .csv e escrevendo nele
$arquivoCsv = fopen('cursos.csv', 'w');

foreach($meusCursos as $curso){
    $linha = [trim(mb_convert_encoding($curso, 'Windows-1252', 'UTF-8')), 'Sim'];

    fputcsv($arquivoCsv, $linha, ';');
    // fwrite($arquivoCsv, implode(',', $linha));
}

foreach($outrosCursos as $curso){
    $linha = [trim(mb_convert_encoding($curso, 'Windows-1252', 'UTF-8')), 'Não'];

    fputcsv($arquivoCsv, $linha, ';');
    // fwrite($arquivoCsv, implode(',', $linha));
}

fclose($arquivoCsv);