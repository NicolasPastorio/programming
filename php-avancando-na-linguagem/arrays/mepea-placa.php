<?php
// // array associativo(mapa ou dicionário)
// // chave(inteiro ou string) => valor
// // chave(índice esplicito) => valor(primitivo ou outro array)
// //1° passo
// $mapeaPlaca = [$carro1, $carro2, $carro3];
// $carro1 = [];
// $carro2 = [];
// $carro3 = [];
// //2° passo
// $mapeaPlaca = [$carro1, $carro2, $carro3];
// $carro1 = ['marca' => 'VW', 'modelo' => 'Golf'];
// $carro2 = ['marca' => 'Ford', 'modelo' => 'K'];
// $carro3 = ['marca' => 'Fiat', 'modelo' => 'Uno'];
// //3° passo
// $mapeaPlaca = [
//   $carro1 => ['marca' => 'VW', 'modelo' => 'Golf'],
//   $carro2 => ['marca' => 'Ford', 'modelo' => 'K'],
//   $carro3 => ['marca' => 'Fiat', 'modelo' => 'Uno']
// ];
//4° passo
$mapeaPlaca = [
  'LMS-2312' => ['marca' => 'VW', 'modelo' => 'Golf', 'ano' => 2015],
  'EXZ-1402' => ['marca' => 'Ford', 'modelo' => 'K', 'ano' => 2018],
  'DBZ-2020' => ['marca' => 'Fiat', 'modelo' => 'Uno', 'ano' => 2004]
];

foreach($mapeaPlaca as $placa => $carro){
  echo '-----------------------' . PHP_EOL;
  echo "Placa: " . $placa . PHP_EOL;
  echo "Marca: " . $carro['marca'] . PHP_EOL;
  echo "Modelo: " . $carro['modelo'] . PHP_EOL;
  echo "Ano: " . $carro['ano'] . PHP_EOL;
}
echo '----------------------' . PHP_EOL;
