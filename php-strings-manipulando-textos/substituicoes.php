<?php

$texto = 'Texto com qualquer coisa poxa e caramba';

//oquê | pelo quê | onde
echo str_replace(
  ['poxa', 'caramba'],//oquê
  ['p*', 'c*'],//pelo quê
  $texto//onde
) . PHP_EOL;

//traduz caracteres para outros caracteres
echo strtr($texto, 'aceo', '@¢&#') . PHP_EOL;
echo strtr($texto, ['poxa' => 'p', 'caramba' => 'c']) . PHP_EOL;

//mais um exemplo
echo 'Vinícius' . PHP_EOL;
echo strtr('Vinícius', 'í', 'i') . PHP_EOL;
?>
