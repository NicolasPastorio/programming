<?php

$idadeList = [21, 23, 19, 25, 30, 41, 18];

// $idadeVinicius = $idadeList[0];
// $idadeJoao = $idadeList[1];
// $idadeMaria = $idadeList[2];

list($idadeVinicius, $idadeJoao, $idadeMaria) = $idadeList;

$idadeList[] = 20;

foreach($idadeList as $idade){
  echo $idade . PHP_EOL;
}

echo 'Idade do Vinicius: ' . $idadeVinicius . PHP_EOL;
echo 'Idade do João: ' . $idadeJoao . PHP_EOL;
echo 'Idade da Maria: ' . $idadeMaria . PHP_EOL;
?>
