<?php

$contador = 1;
//opções equivalentes para o incremento
// $contador = $contador + 1;
// $contador += 1;
// $contador++;

while($contador <= 15){
  echo "#$contador" . PHP_EOL;
  $contador++;
}

for($contador = 1; $contador <= 15; $contador++){
  if($contador == 13){
    continue;
  }elseif($contador == 15){
    break;
  }
  echo "#$contador" . PHP_EOL;
}
