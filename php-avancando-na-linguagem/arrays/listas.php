<?php

// $idadesList = array(21, 23, 19, 25, 30, 41, 18);
$idadeList = [21, 23, 19, 25, 30, 41, 18];

$umaIdade = $idadeList[6];
echo $umaIdade . PHP_EOL;

// echo count($idadeList);
echo '-------------' . PHP_EOL;
for ($i = 0; $i < count($idadeList); $i++) {
  echo $idadeList[$i] . PHP_EOL;
}
echo '------------' . PHP_EOL;

$idadeList[7] = 20;
$idadeList[count($idadeList)] = 121;
$idadeList[] = 90;

foreach($idadeList as $idade){
  echo $idade . PHP_EOL;
}
echo '------------' . PHP_EOL;
