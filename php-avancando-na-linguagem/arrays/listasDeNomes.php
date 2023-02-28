<?php

$listaDeNomes = array("João", "Maria", "Pedro", "Ana");

for ($i=0; $i < count($listaDeNomes); $i++) {
  echo "". $i+1 ."° Nome: $listaDeNomes[$i]" . PHP_EOL;
}
