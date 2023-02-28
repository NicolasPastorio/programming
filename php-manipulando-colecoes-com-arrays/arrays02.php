<?php
$array = [
  0 => 'zero',
  1 => 'um',
  2 => 'dois',
  3 => 'três',
];

// $contador = 0;
foreach($array as $numeral => $nomeNumero){
  echo "$numeral por extenso é: $nomeNumero" . PHP_EOL;
  // $contador++;
}

// echo "Total: $contador". PHP_EOL;
// echo "Total: ". sizeof($array) . PHP_EOL;
echo "Total: ". count($array) . PHP_EOL;
?>
