<?php

// // $tela = fopen('php://stderr', 'w');
// // $tela = fopen('php://stdout', 'w');
// // fwrite($tela, 'Olá mundo!');
// fwrite(STDOUT, 'Olá mundo!');
$cursos = fopen('zip://arquivos.zip#cursos-php.txt', 'r');
stream_copy_to_stream($cursos, STDOUT);

