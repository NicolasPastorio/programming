<?php

$lista = [11, 3];

//adiciona o item no próximo índice numérico disponível
$lista[] = 4;
//adiciona o item infromando seu índice
$lista[3] = 1;

for ($i=0; $i < count($lista); $i++) {
  echo $lista[$i] . PHP_EOL;
}
