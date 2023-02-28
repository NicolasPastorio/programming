<?php

$multiplicando = 3;
$resultado = 0;

echo "----------------------". PHP_EOL;
for($contador = 0; $contador <= 10; $contador++){
  $resultado = $contador * $multiplicando;
  echo "$contador x $multiplicando = $resultado" . PHP_EOL;
}
echo "----------------------" . PHP_EOL;
