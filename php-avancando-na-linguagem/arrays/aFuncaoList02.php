<?php

//duas formas de declarar um array
$infoCafe = array('Café', 'marrom', 'cafeína');
$infoCha = ['cha', 'amarelo', 'polifenois'];

//pegando várias variáveis de uma só vez com a função list...
//duas fromas de usar a função list
[$bebida, $cor, $substancia] = $infoCafe;
list($drink, $color, $substance) = $infoCha;

echo "O $bebida contém $substancia e é $cor!" . PHP_EOL;
echo "O $drink contém $substance e é $color!" . PHP_EOL;

?>
