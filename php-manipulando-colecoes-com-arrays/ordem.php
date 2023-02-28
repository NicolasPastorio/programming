<?php
//---------------------------
$notas = [
  10,
  8,
  9,
  7
];

$notasOrdenadas = $notas;
sort($notasOrdenadas);

echo 'Desordenadas: ';
var_dump($notas);

echo 'Ordenadas: ';
var_dump($notasOrdenadas);
//---------------------------

$array = ['primeiro', 1 => 'segundo', 'terceiro'];

var_dump(array_is_list($array));

?>
